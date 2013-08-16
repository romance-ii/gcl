EXTER inline int
set_writable(fixnum i,fixnum m) {

  fixnum j;
  object v;

  if (i<first_data_page || i>=page(core_end))
    error("out of core in set_writable");

  if ((v=sSAwritableA ? sSAwritableA->s.s_dbind : Cnil)==Cnil)
    error("no wrimap in set_writable");

  if ((j=i-first_data_page)<0 || j>=v->v.v_dim)/*FIXME*/
    return 0;

  if ((void *)wrimap!=(void *)v->v.v_self)
    error("set_writable called in gc");

  if (m)
    wrimap[j/8]|=(1<<(j%8));
  else
    wrimap[j/8]&=~(1<<(j%8));

  writable_pages+=m ? 1 : -1;

  return 0;

}

EXTER inline int
is_writable(fixnum i) {

  fixnum j;
  object v;

  if (i<first_data_page || i>=page(core_end))
    return 0;

  if ((v=sSAwritableA ? sSAwritableA->s.s_dbind : Cnil)==Cnil)
    return 1;

  if ((j=i-first_data_page)<0 || j>=v->v.v_dim)
    return 1;

  return (wrimap[j/8]>>(j%8))&0x1;

}
