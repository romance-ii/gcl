/*
	x : fixnum or bignum (may be not normalized)
	y : integer
   returns
	fixnum or bignum ( not normalized )
*/

object big_log_op();

object
log_op(op,mp_op)
int (*op)();
void (*mp_op)();
{
	object x;
	int	narg, i, j;
	

	narg = vs_top - vs_base;
	if (narg < 2) too_few_arguments();
	i = narg;
	while(--i >= 0)
		{if (type_of(vs_base[i]) == t_bignum) goto BIG_OP;
		if (type_of(vs_base[i]) != t_fixnum) FEwrong_type_argument(sLinteger, vs_base[i]);
		  };
	j = fix(vs_base[0]);
	i = 1;
	while (i < narg) {
		j = (*op)(j, fix(vs_base[i]));
		i++;
	}
	return(make_fixnum(j));

BIG_OP:
	{ object u = new_bignum();
	 MP_ASSIGN_OBJECT(MP(u),vs_base[0]);
	i = 1;
	while (i < narg) {
	  object y = vs_base[i];
	  (*mp_op) (MP(u),MP(u), INTEGER_TO_MP(y,big_fixnum1));
	  i++;
	}
	x = normalize_big(u);
	return(x);
	}
}


void
mp_and_op(u, i, j)
mpz_t u, i, j;
{
	mpz_and(u,i,j);
         /* (i & j); */
}

void
mp_eqv_op(u, i, j)
mpz_t u, i, j;
{
	mpz_xor(u,i,j);
        mpz_com(u,u);
      /* (~(i ^ j)); */

}

void
mp_nand_op(u, i, j)
mpz_t u, i, j;
{
	mpz_and(u,i,j);
        mpz_com(u,u);
	/* (~(i & j)); */
}

void
mp_nor_op(u, i, j)
mpz_t u, i, j;
{
     mpz_ior(u,u,j);
     mpz_com(u,i);
     /* (~(i | j)); */
}

void
mp_andc1_op(u,i, j)
mpz_t u, i, j;
{
     mpz_com(u,i);
     mpz_and(u,u,j);
	/* ((~i) & j); */
}

void
mp_andc2_op(u,i, j)
mpz_t u, i, j;
{
      mpz_com(u,j);
      mpz_and(u,u,i);
	/* (i & (~j));*/
}

void
mp_orc1_op(u, i, j)
mpz_t u, i, j;
{
   mpz_com(u,i);
   mpz_ior(u,u,j);
/*	((~i) | j); */
}

void
mp_orc2_op(u,i, j)
mpz_t u, i, j;
{
    mpz_com(u,j);
    mpz_ior(u,u,i);
	/* (i | (~j)); */
}

void
mp_b_clr_op(u,i, j)
mpz_t u, i, j;
{
    mpz_set_si(u,0);
/* 	(0); */
}

void
mp_b_set_op(u,i, j)
mpz_t u, i, j;
{
   mpz_set_si(u,-1);
	/* (-1); */
}

void
mp_b_1_op(u, i, j)
mpz_t u, i, j;
{
    mpz_set(u,i);
   /*	(i); */
}

void
mp_b_2_op(u, i, j)
mpz_t u, i, j;
{
   mpz_set(u,j);
/* 	(j); */
}

void
mp_b_c1_op(u, i, j)
mpz_t u, i, j;
{
  mpz_com(u,i);
	/* (~i); */
}

void
mp_b_c2_op(u, i, j)
mpz_t u, i, j;
{
   mpz_com(u,j);
	/* (~j); */
}




int
big_bitp(x, p)
object	x;
int	p;
{
  return mpz_tstbit(MP(x),p);
}



   

void
mp_ior_op(u, i, j)
mpz_t u, i, j;
{
	mpz_ior(u,i,j);
    /* (i | j); */
}

void
mp_xor_op(u, i, j)
mpz_t u, i, j;
{
	mpz_xor(u,i,j);
  /* (i ^ j); */
}

int
mpz_bitcount(x)
     mpz_t x;
     
{
  if (mpz_sgn(x) >= 0) {
    return mpz_popcount(x);
  } else {
    object u = new_bignum();
    mpz_com(MP(u),x);
    return mpz_popcount(MP(u));
  }
}


int
mpz_bitlength(x)
     mpz_t x;
     
{
  if (mpz_sgn(x) >= 0) {
    return mpz_sizeinbase(x,2);
  } else {
    object u = new_bignum();
    mpz_com(MP(u),x);
    return mpz_sizeinbase(MP(u),2);
  }
}



