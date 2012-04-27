#define R_ARM_CALL 28
#define R_ARM_V4BX 40
    case R_ARM_CALL:
      add_vals(where,MASK(24),((long)(s+a-p))>>2);
      break;
    case R_ARM_ABS32:
      add_val(where,~0L,s+a);
      break;
    case R_ARM_V4BX:
      add_val(where,~0L,s+a);
      break;
