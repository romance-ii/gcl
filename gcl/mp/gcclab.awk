
  /NEW_LABEL/ { lab++; next;}
  /Lmylabel/  { at = index($0,"Lmylabel");
              printf("%s%d%s\n", substr($0,1,at),lab,substr($0,at+1));
              next;}

                {print}




              
   