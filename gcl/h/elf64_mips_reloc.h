    case R_MIPS_JALR:
      break;
    case R_MIPS_64:
      add_val(where,~0L,s+a);
      break;
    case R_MIPS_GPREL32:
      add_val(where,MASK(32),s+a-(ul)got);
      break;
    case R_MIPS_32:
      add_val(where,MASK(32),s+a);
      break;
    case R_MIPS_GOT_DISP:
    case R_MIPS_CALL16:
    case R_MIPS_GOT_PAGE:
      gote=got+(a>>32)-1;
      a&=MASK(32);
      store_val(where,MASK(16),((void *)gote-(void *)got));
      if (s>=ggot && s<ggote) {
        massert(!write_stub(s,got,gote));
      } else
        *gote=s+(a&~MASK(16))+((a&0x8000)<<1);
      break;
    case R_MIPS_GOT_OFST:
      store_val(where,MASK(16),a);
      break;
    case R_MIPS_HI16:
      s+=a&MASK(32);
      if (ELF_R_FTYPE(r->r_info)==R_MIPS_GPREL16) s=(ul)got-s;
      if (!hr) hr=(void *)r;
      if (a&(1L<<32)) add_vals(where,MASK(16),(s+(a>>32))>>16);
      break;
    case R_MIPS_LO16:
      s+=a;
      if (ELF_R_FTYPE(r->r_info)==R_MIPS_GPREL16) s=(ul)got-s;
      a=*where&MASK(16);
      if (a&0x8000) a|=0xffffffffffff0000; 
      a+=s&MASK(16);
      a+=(a&0x8000)<<1; 
      store_val(where,MASK(16),a);
      a&=~MASK(16);
      {
        Rela *ra=(void *)r;				
        for (hr=hr ? hr : (void *)ra;--ra>=hr && ELF_R_TYPE(ra->r_info)==R_MIPS_HI16;)
	  relocate(sym1,ra,ra->r_addend|(1L<<32)|(a<<32),start,got,gote);
      }
      hr=NULL;
      break;
