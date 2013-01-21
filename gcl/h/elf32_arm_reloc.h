#define R_ARM_THM_CALL        10
#define R_ARM_CALL 28
#define R_ARM_V4BX 40
#define R_ARM_THM_MOVW_ABS_NC 47
#define R_ARM_THM_MOVW_ABS    48
#define R_ARM_MOVW_ABS_NC 43
#define R_ARM_MOVT_ABS    44
    case R_ARM_THM_CALL: 
      s+=a; 
      if (ELF_ST_TYPE(sym->st_info)==STT_FUNC) s|=1; 
      s-=p+4; /*FIXME maybe drop 4 and add_val below*/
      s=((long)s>>1); 
      massert(!(abs(s)&0xffc00000));  
      store_val(where,MASK(11),s>>11); 
      store_val(where,MASK(11)<<16,(s&0x7ff)<<16); 
      break; 
    case R_ARM_THM_MOVW_ABS_NC:
      s+=a;
      if (ELF_ST_TYPE(sym->st_info)==STT_FUNC) s|=1;
      s&=0xffff;
      s=((s>>12)&0xf)|(((s>>11)&0x1)<<10)|((s&0xff)<<16)|(((s>>8)&0x7)<<28);
      add_vals(where,~0L,s);
      break;
    case R_ARM_THM_MOVW_ABS:
      s+=a;
      s>>=16;
      s=((s>>12)&0xf)|(((s>>11)&0x1)<<10)|((s&0xff)<<16)|(((s>>8)&0x7)<<28);
      add_vals(where,~0L,s);
      break;
    case R_ARM_MOVW_ABS_NC:
      s+=a;
      s&=0xffff;
      s=(s&0xfff)|((s>>12)<<16);
      add_vals(where,~0L,s);
      break;
    case R_ARM_MOVT_ABS:
      s+=a;
      s>>=16;
      s=(s&0xfff)|((s>>12)<<16);
      add_vals(where,~0L,s);
      break;
    case R_ARM_CALL:
      add_vals(where,MASK(24),((long)(s+a-p))>>2);
      break;
    case R_ARM_ABS32:
      add_val(where,~0L,s+a);
      break;
    case R_ARM_V4BX:
      add_val(where,~0L,s+a);
      break;
