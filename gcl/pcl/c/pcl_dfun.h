
static void L2();
static void L4();
static void L18();
static void L20();
static void L25();
static void L28();
static void L33();
static void L38();
static void L41();
static void L42();
static void L43();
static void L44();
static void L46();
static void L47();
static void L49();
static void L50();
static void L54();
static void L55();
static void L57();
static void L59();
static void L60();
static void L63();
static void L65();
static void L66();
static void L67();
static void L71();
static void L75();
static void L77();
static void L78();
static void L80();
static void L81();
static void L82();
static void L88();
static void L89();
static void L90();
static void L91();
static void L92();
static void L93();
static void L94();
static void L95();
static void L96();
static void L97();
static void L104();
static void L109();
static void L110();
static void L115();
static void L117();
static void L118();
static void L119();
static void L120();
static void L121();
static void L122();
static void L124();
static void L127();
static void L134();
static void L136();
static object LI1();
#define VMB1 register object *base=vs_top;
#define VMS1  register object *sup=vs_top+7;vs_top=sup;
#define VMV1 vs_check;
#define VMR1(VMT1) vs_top=base ; return(VMT1);
#define VC2 object  V24 ,V23 ,V9;
static object LI3();
#define VMB3 register object *base=vs_top; object  V47;
#define VMS3  register object *sup=vs_top+7;vs_top=sup;
#define VMV3 vs_check;
#define VMR3(VMT3) vs_top=base ; return(VMT3);
#define VC4 object  V80 ,V78 ,V77 ,V76 ,V75 ,V74 ,V65;
static object LI5(object,...);
static struct { short n,allow_other_keys;object *defaults;
	 KEYTYPE keys[1];} LI5key={1,0,Cstd_key_defaults,{(void *)180}};
#define VMB5 register object *base=vs_top; object Vcs[2];
#define VMS5  register object *sup=vs_top+2;vs_top=sup;
#define VMV5 vs_check;
#define VMR5(VMT5) vs_top=base ; return(VMT5);
static object LI6();
#define VMB6 register object *base=vs_top;
#define VMS6  register object *sup=vs_top+4;vs_top=sup;
#define VMV6 vs_check;
#define VMR6(VMT6) vs_top=base ; return(VMT6);
static object LI7(object,...);
static struct { short n,allow_other_keys;object *defaults;
	 KEYTYPE keys[1];} LI7key={1,0,Cstd_key_defaults,{(void *)180}};
#define VMB7 register object *base=vs_top; object Vcs[2];
#define VMS7  register object *sup=vs_top+2;vs_top=sup;
#define VMV7 vs_check;
#define VMR7(VMT7) vs_top=base ; return(VMT7);
static object LI8();
#define VMB8 register object *base=vs_top;
#define VMS8  register object *sup=vs_top+2;vs_top=sup;
#define VMV8 vs_check;
#define VMR8(VMT8) vs_top=base ; return(VMT8);
static object LI9(object,...);
static struct { short n,allow_other_keys;object *defaults;
	 KEYTYPE keys[1];} LI9key={1,0,Cstd_key_defaults,{(void *)180}};
#define VMB9 register object *base=vs_top; object Vcs[2];
#define VMS9  register object *sup=vs_top+2;vs_top=sup;
#define VMV9 vs_check;
#define VMR9(VMT9) vs_top=base ; return(VMT9);
static object LI10();
#define VMB10 register object *base=vs_top;
#define VMS10  register object *sup=vs_top+2;vs_top=sup;
#define VMV10 vs_check;
#define VMR10(VMT10) vs_top=base ; return(VMT10);
static object LI11(object,...);
static struct { short n,allow_other_keys;object *defaults;
	 KEYTYPE keys[1];} LI11key={1,0,Cstd_key_defaults,{(void *)180}};
#define VMB11 register object *base=vs_top; object Vcs[2];
#define VMS11  register object *sup=vs_top+2;vs_top=sup;
#define VMV11 vs_check;
#define VMR11(VMT11) vs_top=base ; return(VMT11);
static object LI12();
#define VMB12 register object *base=vs_top;
#define VMS12  register object *sup=vs_top+2;vs_top=sup;
#define VMV12 vs_check;
#define VMR12(VMT12) vs_top=base ; return(VMT12);
static object LI13(object,...);
static struct { short n,allow_other_keys;object *defaults;
	 KEYTYPE keys[1];} LI13key={1,0,Cstd_key_defaults,{(void *)180}};
#define VMB13 register object *base=vs_top; object Vcs[2];
#define VMS13  register object *sup=vs_top+2;vs_top=sup;
#define VMV13 vs_check;
#define VMR13(VMT13) vs_top=base ; return(VMT13);
static object LI14();
#define VMB14 register object *base=vs_top;
#define VMS14  register object *sup=vs_top+2;vs_top=sup;
#define VMV14 vs_check;
#define VMR14(VMT14) vs_top=base ; return(VMT14);
static object LI15(object,...);
static struct { short n,allow_other_keys;object *defaults;
	 KEYTYPE keys[1];} LI15key={1,0,Cstd_key_defaults,{(void *)180}};
#define VMB15 register object *base=vs_top; object Vcs[2];
#define VMS15  register object *sup=vs_top+2;vs_top=sup;
#define VMV15 vs_check;
#define VMR15(VMT15) vs_top=base ; return(VMT15);
static object LI16();
#define VMB16 register object *base=vs_top;
#define VMS16  register object *sup=vs_top+2;vs_top=sup;
#define VMV16 vs_check;
#define VMR16(VMT16) vs_top=base ; return(VMT16);
static object LI17(object,...);
static struct { short n,allow_other_keys;object *defaults;
	 KEYTYPE keys[2];} LI17key={2,0,Cstd_key_defaults,{(void *)182,(void *)180}};
#define VMB17 register object *base=vs_top; object Vcs[4];
#define VMS17  register object *sup=vs_top+3;vs_top=sup;
#define VMV17 vs_check;
#define VMR17(VMT17) vs_top=base ; return(VMT17);
#define VC18
static object LI19(object,...);
static struct { short n,allow_other_keys;object *defaults;
	 KEYTYPE keys[3];} LI19key={3,0,Cstd_key_defaults,{(void *)183,(void *)182,(void *)180}};
#define VMB19 register object *base=vs_top; object Vcs[6];
#define VMS19  register object *sup=vs_top+4;vs_top=sup;
#define VMV19 vs_check;
#define VMR19(VMT19) vs_top=base ; return(VMT19);
#define VC20
static object LI21(object,...);
static struct { short n,allow_other_keys;object *defaults;
	 KEYTYPE keys[2];} LI21key={2,0,Cstd_key_defaults,{(void *)182,(void *)180}};
#define VMB21 register object *base=vs_top; object Vcs[4];
#define VMS21  register object *sup=vs_top+3;vs_top=sup;
#define VMV21 vs_check;
#define VMR21(VMT21) vs_top=base ; return(VMT21);
static object LI22();
#define VMB22 register object *base=vs_top;
#define VMS22  register object *sup=vs_top+3;vs_top=sup;
#define VMV22 vs_check;
#define VMR22(VMT22) vs_top=base ; return(VMT22);
static object LI23(object,...);
static struct { short n,allow_other_keys;object *defaults;
	 KEYTYPE keys[4];} LI23key={4,0,Cstd_key_defaults,{(void *)184,(void *)183,(void *)182,(void *)180}};
#define VMB23 register object *base=vs_top; object Vcs[8];
#define VMS23  register object *sup=vs_top+5;vs_top=sup;
#define VMV23 vs_check;
#define VMR23(VMT23) vs_top=base ; return(VMT23);
static object LI24();
#define VMB24 register object *base=vs_top;
#define VMS24  register object *sup=vs_top+5;vs_top=sup;
#define VMV24 vs_check;
#define VMR24(VMT24) vs_top=base ; return(VMT24);
#define VC25
static object LI26(object,...);
static struct { short n,allow_other_keys;object *defaults;
	 KEYTYPE keys[5];} LI26key={5,0,Cstd_key_defaults,{(void *)185,(void *)184,(void *)183,(void *)182,(void *)180}};
#define VMB26 register object *base=vs_top; object Vcs[10];
#define VMS26  register object *sup=vs_top+6;vs_top=sup;
#define VMV26 vs_check;
#define VMR26(VMT26) vs_top=base ; return(VMT26);
static object LI27();
#define VMB27 register object *base=vs_top;
#define VMS27  register object *sup=vs_top+6;vs_top=sup;
#define VMV27 vs_check;
#define VMR27(VMT27) vs_top=base ; return(VMT27);
#define VC28
static object LI29(object,...);
static struct { short n,allow_other_keys;object *defaults;
	 KEYTYPE keys[3];} LI29key={3,0,Cstd_key_defaults,{(void *)183,(void *)182,(void *)180}};
#define VMB29 register object *base=vs_top; object Vcs[6];
#define VMS29  register object *sup=vs_top+4;vs_top=sup;
#define VMV29 vs_check;
#define VMR29(VMT29) vs_top=base ; return(VMT29);
static object LI30();
#define VMB30 register object *base=vs_top;
#define VMS30  register object *sup=vs_top+4;vs_top=sup;
#define VMV30 vs_check;
#define VMR30(VMT30) vs_top=base ; return(VMT30);
static object LI31(object,...);
static struct { short n,allow_other_keys;object *defaults;
	 KEYTYPE keys[2];} LI31key={2,0,Cstd_key_defaults,{(void *)186,(void *)180}};
#define VMB31 register object *base=vs_top; object Vcs[4];
#define VMS31  register object *sup=vs_top+3;vs_top=sup;
#define VMV31 vs_check;
#define VMR31(VMT31) vs_top=base ; return(VMT31);
static object LI32();
#define VMB32 register object *base=vs_top;
#define VMS32  register object *sup=vs_top+3;vs_top=sup;
#define VMV32 vs_check;
#define VMR32(VMT32) vs_top=base ; return(VMT32);
#define VC33
static object LI34(object,...);
static struct { short n,allow_other_keys;object *defaults;
	 KEYTYPE keys[1];} LI34key={1,0,Cstd_key_defaults,{(void *)180}};
#define VMB34 register object *base=vs_top; object Vcs[2];
#define VMS34  register object *sup=vs_top+2;vs_top=sup;
#define VMV34 vs_check;
#define VMR34(VMT34) vs_top=base ; return(VMT34);
static object LI35();
#define VMB35 register object *base=vs_top;
#define VMS35  register object *sup=vs_top+2;vs_top=sup;
#define VMV35 vs_check;
#define VMR35(VMT35) vs_top=base ; return(VMT35);
static object LI36(object,...);
static struct { short n,allow_other_keys;object *defaults;
	 KEYTYPE keys[1];} LI36key={1,0,Cstd_key_defaults,{(void *)180}};
#define VMB36 register object *base=vs_top; object Vcs[2];
#define VMS36  register object *sup=vs_top+2;vs_top=sup;
#define VMV36 vs_check;
#define VMR36(VMT36) vs_top=base ; return(VMT36);
static object LI37();
#define VMB37 register object *base=vs_top;
#define VMS37  register object *sup=vs_top+2;vs_top=sup;
#define VMV37 vs_check;
#define VMR37(VMT37) vs_top=base ; return(VMT37);
#define VC38 object  V189;
static object LI40();
#define VMB39 register object *base=vs_top;
#define VMS39  register object *sup=vs_top+11;vs_top=sup;
#define VMV39 vs_check;
#define VMR39(VMT39) vs_top=base ; return(VMT39);
#define VC40
#define VC41
#define VC42 object  V219;
#define VC43 object  V225;
static object LI45();
#define VMB44
#define VMS44
#define VMV44
#define VMR44(VMT44) return(VMT44);
#define VC45 object  V235;
#define VC46 object  V240;
static object LI48();
#define VMB47
#define VMS47
#define VMV47
#define VMR47(VMT47) return(VMT47);
#define VC48 object  V252;
#define VC49 object  V259 ,V257;
static object LI51();
#define VMB50 register object *base=vs_top;
#define VMS50  register object *sup=vs_top+2;vs_top=sup;
#define VMV50 vs_check;
#define VMR50(VMT50) vs_top=base ; return(VMT50);
static object LI52();
#define VMB51 register object *base=vs_top; object  V272 ,V269;
#define VMS51  register object *sup=vs_top+4;vs_top=sup;
#define VMV51 vs_check;
#define VMR51(VMT51) vs_top=base ; return(VMT51);
static object LI53();
#define VMB52
#define VMS52
#define VMV52
#define VMR52(VMT52) return(VMT52);
#define VC53 object  V283;
#define VC54 object  V288;
static object LI56();
#define VMB55
#define VMS55
#define VMV55
#define VMR55(VMT55) return(VMT55);
#define VC56
static object LI58(object,object,...);
#define VMB57 register object *base=vs_top; object  V309 ,V306; object Vcs[2];
#define VMS57  register object *sup=vs_top+5;vs_top=sup;
#define VMV57 vs_check;
#define VMR57(VMT57) vs_top=base ; return(VMT57);
#define VC58 object  V319;
#define VC59 object  V324;
static object LI61(object,object,...);
#define VMB60 register object *base=vs_top; object  V329;
#define VMS60  register object *sup=vs_top+2;vs_top=sup;
#define VMV60 vs_check;
#define VMR60(VMT60) vs_top=base ; return(VMT60);
static object LI62();
#define VMB61 register object *base=vs_top;
#define VMS61  register object *sup=vs_top+6;vs_top=sup;
#define VMV61 vs_check;
#define VMR61(VMT61) vs_top=base ; return(VMT61);
#define VC62
static object LI64();
#define VMB63 register object *base=vs_top; object  V341;
#define VMS63  register object *sup=vs_top+6;vs_top=sup;
#define VMV63 vs_check;
#define VMR63(VMT63) vs_top=base ; return(VMT63);
#define VC64
#define VC65
#define VC66
static object LI68();
#define VMB67 register object *base=vs_top;
#define VMS67  register object *sup=vs_top+3;vs_top=sup;
#define VMV67 vs_check;
#define VMR67(VMT67) vs_top=base ; return(VMT67);
static object LI69(object,object,object,object,object,...);
#define VMB68 register object *base=vs_top; object  V362;
#define VMS68  register object *sup=vs_top+3;vs_top=sup;
#define VMV68 vs_check;
#define VMR68(VMT68) vs_top=base ; return(VMT68);
static object LI70();
#define VMB69 register object *base=vs_top; object  V381 ,V380 ,V379;
#define VMS69  register object *sup=vs_top+5;vs_top=sup;
#define VMV69 vs_check;
#define VMR69(VMT69) vs_top=base ; return(VMT69);
#define VC70 object  V391 ,V390 ,V389 ,V388 ,V387 ,V386 ,V385;
static object LI73();
#define VMB71 register object *base=vs_top; object  V405 ,V402;
#define VMS71  register object *sup=vs_top+6;vs_top=sup;
#define VMV71 vs_check;
#define VMR71(VMT71) vs_top=base ; return(VMT71);
static object LI74();
#define VMB72 register object *base=vs_top; object  V415 ,V412;
#define VMS72  register object *sup=vs_top+11;vs_top=sup;
#define VMV72 vs_check;
#define VMR72(VMT72) vs_top=base ; return(VMT72);
#define VC73 object  V442 ,V438 ,V434;
static object LI76(object,object,...);
#define VMB74 register object *base=vs_top;
#define VMS74  register object *sup=vs_top+2;vs_top=sup;
#define VMV74 vs_check;
#define VMR74(VMT74) vs_top=base ; return(VMT74);
#define VC75 object  V455 ,V454 ,V453 ,V452;
#define VC76
static object LI79();
#define VMB77 register object *base=vs_top; object  V464 ,V461;
#define VMS77  register object *sup=vs_top+2;vs_top=sup;
#define VMV77 vs_check;
#define VMR77(VMT77) vs_top=base ; return(VMT77);
#define VC78
#define VC81
#define VC82 object  V515;
#define VC83 object  V537 ,V533;
#define VC84 object  V552;
#define VC85 object  V570;
#define VC86
#define VC87 object  V625 ,V624 ,V623 ,V622;
#define VC88
#define VC89
#define VC90 object  V657 ,V654 ,V652;
#define VC91 object  V663 ,V660;
#define VC92 object  V697 ,V696 ,V693 ,V692 ,V680 ,V677;
static object LI99();
#define VMB93 register object *base=vs_top; object  V704;
#define VMS93 vs_top += 1;
#define VMV93 vs_check;
#define VMR93(VMT93) vs_top=base ; return(VMT93);
static object LI102();
#define VMB94 register object *base=vs_top;
#define VMS94  register object *sup=vs_top+5;vs_top=sup;
#define VMV94 vs_check;
#define VMR94(VMT94) vs_top=base ; return(VMT94);
#define VC95 object  V728 ,V727 ,V724 ,V723 ,V722 ,V719;
static object LI105();
#define VMB96 register object *base=vs_top; object  V741 ,V740;
#define VMS96 vs_top += 5;
#define VMV96 vs_check;
#define VMR96(VMT96) vs_top=base ; return(VMT96);
static object LI107();
#define VMB97 register object *base=vs_top; object  V757 ,V755;
#define VMS97  register object *sup=vs_top+1;vs_top=sup;
#define VMV97 vs_check;
#define VMR97(VMT97) vs_top=base ; return(VMT97);
static object LI108();
#define VMB98 register object *base=vs_top; object  V772 ,V771;
#define VMS98  register object *sup=vs_top+3;vs_top=sup;
#define VMV98 vs_check;
#define VMR98(VMT98) vs_top=base ; return(VMT98);
#define VC99
#define VC100
static object LI111();
#define VMB101 register object *base=vs_top; object  V796;
#define VMS101  register object *sup=vs_top+3;vs_top=sup;
#define VMV101 vs_check;
#define VMR101(VMT101) vs_top=base ; return(VMT101);
static object LI112();
#define VMB102 register object *base=vs_top; object  V806;
#define VMS102  register object *sup=vs_top+3;vs_top=sup;
#define VMV102 vs_check;
#define VMR102(VMT102) vs_top=base ; return(VMT102);
static object LI113();
#define VMB103
#define VMS103
#define VMV103
#define VMR103(VMT103) return(VMT103);
static object LI114();
#define VMB104
#define VMS104
#define VMV104
#define VMR104(VMT104) return(VMT104);
#define VC105 object  V827;
static object LI116();
#define VMB106 register object *base=vs_top;
#define VMS106  register object *sup=vs_top+1;vs_top=sup;
#define VMV106 vs_check;
#define VMR106(VMT106) vs_top=base ; return(VMT106);
#define VC107 object  V847 ,V846;
#define VC108 object  V855 ,V854 ,V850;
#define VC109
#define VC110 object  V866 ,V865 ,V863 ,V862;
#define VC111
#define VC112
#define VC113 object  V879 ,V878 ,V877;
static object LI125(object,object,object,object,object,object,...);
#define VMB114 register object *base=vs_top; object  V908 ,V906; object Vcs[8];
#define VMS114  register object *sup=vs_top+6;vs_top=sup;
#define VMV114 vs_check;
#define VMR114(VMT114) vs_top=base ; return(VMT114);
static object LI126();
#define VMB115 register object *base=vs_top;
#define VMS115  register object *sup=vs_top+4;vs_top=sup;
#define VMV115 vs_check;
#define VMR115(VMT115) vs_top=base ; return(VMT115);
#define VC116
static object LI128(object,object,object,...);
#define VMB117
#define VMS117
#define VMV117
#define VMR117(VMT117) return(VMT117);
static object LI129();
#define VMB118 register object *base=vs_top;
#define VMS118  register object *sup=vs_top+4;vs_top=sup;
#define VMV118 vs_check;
#define VMR118(VMT118) vs_top=base ; return(VMT118);
static object LI130(object,object,...);
#define VMB119 register object *base=vs_top;
#define VMS119  register object *sup=vs_top+4;vs_top=sup;
#define VMV119 vs_check;
#define VMR119(VMT119) vs_top=base ; return(VMT119);
static object LI131();
#define VMB120 register object *base=vs_top;
#define VMS120  register object *sup=vs_top+5;vs_top=sup;
#define VMV120 vs_check;
#define VMR120(VMT120) vs_top=base ; return(VMT120);
static object LI132();
#define VMB121 object  V978;
#define VMS121
#define VMV121
#define VMR121(VMT121) return(VMT121);
static object LI133();
#define VMB122 register object *base=vs_top;
#define VMS122  register object *sup=vs_top+5;vs_top=sup;
#define VMV122 vs_check;
#define VMR122(VMT122) vs_top=base ; return(VMT122);
#define VC123 object  V995;
static object LI135();
#define VMB124 register object *base=vs_top;
#define VMS124  register object *sup=vs_top+7;vs_top=sup;
#define VMV124 vs_check;
#define VMR124(VMT124) vs_top=base ; return(VMT124);
#define VC125 object  V1019;
static object LI138();
#define VMB126 register object *base=vs_top; object  V1028;
#define VMS126 vs_top += 2;
#define VMV126 vs_check;
#define VMR126(VMT126) vs_top=base ; return(VMT126);
static void LC167();
#define VC127 object  V1032;
static void LC166();
#define VC128
static void LC168();
#define VC129
static void LC165();
#define VC130
static void LC169();
#define VC131
static void L123();
#define VC132 object  V1044;
static void LC106();
#define VC133
static void LC103();
#define VC134 object  V1062 ,V1061;
static void LC164();
#define VC135 object  V1069;
static void LC163();
#define VC136
static void LC162();
#define VC137 object  V1091;
static void LC161();
#define VC138
static void LC85();
#define VC139
static void LC84();
#define VC140
static void L87();
#define VC141
static void L86();
#define VC142
static void L85();
#define VC143
static void L84();
#define VC144
static void L83();
#define VC145 object  V1125;
static void LC160();
#define VC146 object  V1132;
static void LC159();
#define VC147
static void LC158();
#define VC148
static void LC157();
#define VC149 object  V1138;
static void LC156();
#define VC150 object  V1141;
static void LC155();
#define VC151 object  V1150 ,V1149 ,V1146;
static void LC154();
#define VC152 object  V1163 ,V1162 ,V1159 ,V1158 ,V1157 ,V1154;
static void LC153();
#define VC153
static void LC152();
#define VC154 object  V1167;
static void LC151();
#define VC155
static void LC150();
#define VC156
static void LC149();
#define VC157
static void LC148();
#define VC158 object  V1187 ,V1184;
static void LC147();
#define VC159
static void LC146();
#define VC160
static void LC145();
#define VC161
static void LC144();
#define VC162
static void LC143();
#define VC163
static void LC142();
#define VC164
static void LC141();
#define VC165
static void LC140();
#define VC166
static void LC139();
#define VC167
static void LC169();
static void LC168();
static void LC167();
static void LC166();
static void LC165();
static void LC106();
static void LC103();
static void LC164();
static void LC163();
static void LC162();
static void LC161();
static void LC85();
static void LC84();
static void LC160();
static void LC159();
static void LC158();
static void LC157();
static void LC156();
static void LC155();
static void LC154();
static void LC153();
static void LC152();
static void LC151();
static void LC150();
static void LC149();
static void LC148();
static void LC147();
static void LC146();
static void LC145();
static void LC144();
static void LC143();
static void LC142();
static void LC141();
static void LC140();
static void LC139();
#define VM167 5
#define VM166 6
#define VM165 2
#define VM164 4
#define VM163 2
#define VM162 3
#define VM161 2
#define VM160 2
#define VM159 4
#define VM158 4
#define VM157 4
#define VM156 3
#define VM155 9
#define VM154 3
#define VM153 3
#define VM152 5
#define VM151 6
#define VM150 2
#define VM149 2
#define VM148 3
#define VM147 2
#define VM146 2
#define VM145 8
#define VM144 6
#define VM143 4
#define VM142 1
#define VM141 2
#define VM140 6
#define VM139 4
#define VM138 3
#define VM137 7
#define VM136 9
#define VM135 6
#define VM134 10
#define VM133 5
#define VM132 2
#define VM131 3
#define VM130 3
#define VM129 3
#define VM128 3
#define VM127 2
#define VM126 2
#define VM125 6
#define VM124 7
#define VM123 5
#define VM122 5
#define VM121 0
#define VM120 5
#define VM119 4
#define VM118 4
#define VM117 0
#define VM116 7
#define VM115 4
#define VM114 6
#define VM113 8
#define VM112 4
#define VM111 5
#define VM110 4
#define VM109 4
#define VM108 4
#define VM107 5
#define VM106 1
#define VM105 4
#define VM104 0
#define VM103 0
#define VM102 3
#define VM101 3
#define VM100 7
#define VM99 6
#define VM98 3
#define VM97 1
#define VM96 5
#define VM95 7
#define VM94 5
#define VM93 1
#define VM92 7
#define VM91 20
#define VM90 9
#define VM89 9
#define VM88 9
#define VM87 13
#define VM86 12
#define VM85 9
#define VM84 6
#define VM83 7
#define VM82 24
#define VM81 8
#define VM78 11
#define VM80 1
#define VM79 1
#define VM77 2
#define VM76 5
#define VM75 6
#define VM74 2
#define VM73 8
#define VM72 11
#define VM71 6
#define VM70 13
#define VM69 5
#define VM68 3
#define VM67 3
#define VM66 2
#define VM65 4
#define VM64 4
#define VM63 6
#define VM62 9
#define VM61 6
#define VM60 2
#define VM59 5
#define VM58 8
#define VM57 5
#define VM56 4
#define VM55 0
#define VM54 5
#define VM53 9
#define VM52 0
#define VM51 4
#define VM50 2
#define VM49 7
#define VM48 10
#define VM47 0
#define VM46 6
#define VM45 10
#define VM44 0
#define VM43 8
#define VM42 12
#define VM41 11
#define VM40 9
#define VM39 11
#define VM38 6
#define VM37 2
#define VM36 2
#define VM35 2
#define VM34 2
#define VM33 4
#define VM32 3
#define VM31 3
#define VM30 4
#define VM29 4
#define VM28 4
#define VM27 6
#define VM26 6
#define VM25 4
#define VM24 5
#define VM23 5
#define VM22 3
#define VM21 3
#define VM20 4
#define VM19 4
#define VM18 4
#define VM17 3
#define VM16 2
#define VM15 2
#define VM14 2
#define VM13 2
#define VM12 2
#define VM11 2
#define VM10 2
#define VM9 2
#define VM8 2
#define VM7 2
#define VM6 4
#define VM5 2
#define VM4 10
#define VM3 7
#define VM2 6
#define VM1 7
static char * VVi[355]={
#define Cdata VV[354]
(char *)(LI1),
(char *)(L2),
(char *)(LI3),
(char *)(L4),
(char *)(LI5),
(char *)(&LI5key),
(char *)(LI6),
(char *)(LI7),
(char *)(&LI7key),
(char *)(LI8),
(char *)(LI9),
(char *)(&LI9key),
(char *)(LI10),
(char *)(LI11),
(char *)(&LI11key),
(char *)(LI12),
(char *)(LI13),
(char *)(&LI13key),
(char *)(LI14),
(char *)(LI15),
(char *)(&LI15key),
(char *)(LI16),
(char *)(LI17),
(char *)(&LI17key),
(char *)(L18),
(char *)(LI19),
(char *)(&LI19key),
(char *)(L20),
(char *)(LI21),
(char *)(&LI21key),
(char *)(LI22),
(char *)(LI23),
(char *)(&LI23key),
(char *)(LI24),
(char *)(L25),
(char *)(LI26),
(char *)(&LI26key),
(char *)(LI27),
(char *)(L28),
(char *)(LI29),
(char *)(&LI29key),
(char *)(LI30),
(char *)(LI31),
(char *)(&LI31key),
(char *)(LI32),
(char *)(L33),
(char *)(LI34),
(char *)(&LI34key),
(char *)(LI35),
(char *)(LI36),
(char *)(&LI36key),
(char *)(LI37),
(char *)(L38),
(char *)(LI40),
(char *)(L41),
(char *)(L42),
(char *)(L43),
(char *)(L44),
(char *)(LI45),
(char *)(L46),
(char *)(L47),
(char *)(LI48),
(char *)(L49),
(char *)(L50),
(char *)(LI51),
(char *)(LI52),
(char *)(LI53),
(char *)(L54),
(char *)(L55),
(char *)(LI56),
(char *)(L57),
(char *)(LI58),
(char *)(L59),
(char *)(L60),
(char *)(LI61),
(char *)(LI62),
(char *)(L63),
(char *)(LI64),
(char *)(L65),
(char *)(L66),
(char *)(L67),
(char *)(LI68),
(char *)(LI69),
(char *)(LI70),
(char *)(L71),
(char *)(LI73),
(char *)(LI74),
(char *)(L75),
(char *)(LI76),
(char *)(L77),
(char *)(L78),
(char *)(LI79),
(char *)(L80),
(char *)(L81),
(char *)(L82),
(char *)(L88),
(char *)(L89),
(char *)(L90),
(char *)(L91),
(char *)(L92),
(char *)(L93),
(char *)(L94),
(char *)(L95),
(char *)(L96),
(char *)(L97),
(char *)(LI99),
(char *)(LI102),
(char *)(L104),
(char *)(LI105),
(char *)(LI107),
(char *)(LI108),
(char *)(L109),
(char *)(L110),
(char *)(LI111),
(char *)(LI112),
(char *)(LI113),
(char *)(LI114),
(char *)(L115),
(char *)(LI116),
(char *)(L117),
(char *)(L118),
(char *)(L119),
(char *)(L120),
(char *)(L121),
(char *)(L122),
(char *)(L124),
(char *)(LI125),
(char *)(LI126),
(char *)(L127),
(char *)(LI128),
(char *)(LI129),
(char *)(LI130),
(char *)(LI131),
(char *)(LI132),
(char *)(LI133),
(char *)(L134),
(char *)(LI135),
(char *)(L136),
(char *)(LI138),
(char *)(&LC145),
(char *)(&LC146),
(char *)(&LC156),
(char *)(&LC157)
};
#define VV ((object *)VVi)
static void LnkT353();
static void (*Lnk353)() = LnkT353;
static void LnkT352();
static void (*Lnk352)() = LnkT352;
static void LnkT351();
static void (*Lnk351)() = LnkT351;
static object *Lclptr350;
static void LnkT350();
static void (*Lnk350)() = LnkT350;
static object *Lclptr349;
static void LnkT349();
static void (*Lnk349)() = LnkT349;
static void LnkT348();
static void (*Lnk348)() = LnkT348;
static void LnkT347();
static void (*Lnk347)() = LnkT347;
static object  LnkTLI346(object,...);
static object  (*LnkLI346)() = (object (*)()) LnkTLI346;
static object *Lclptr345;
static void LnkT345();
static void (*Lnk345)() = LnkT345;
static object *Lclptr344;
static void LnkT344();
static void (*Lnk344)() = LnkT344;
static void LnkT343();
static void (*Lnk343)() = LnkT343;
static object *Lclptr342;
static void LnkT342();
static void (*Lnk342)() = LnkT342;
static object  LnkTLI341(object,...);
static object  (*LnkLI341)() = (object (*)()) LnkTLI341;
static object  LnkTLI340(object,...);
static object  (*LnkLI340)() = (object (*)()) LnkTLI340;
static object *Lclptr339;
static void LnkT339();
static void (*Lnk339)() = LnkT339;
static void LnkT337();
static void (*Lnk337)() = LnkT337;
static object  LnkTLI332(object,...);
static object  (*LnkLI332)() = (object (*)()) LnkTLI332;
static object  LnkTLI331(object,...);
static object  (*LnkLI331)() = (object (*)()) LnkTLI331;
static object  LnkTLI330(object,...);
static object  (*LnkLI330)() = (object (*)()) LnkTLI330;
static object *Lclptr329;
static void LnkT329();
static void (*Lnk329)() = LnkT329;
static object  LnkTLI328(object,...);
static object  (*LnkLI328)() = (object (*)()) LnkTLI328;
static object  LnkTLI327(object,...);
static object  (*LnkLI327)() = (object (*)()) LnkTLI327;
static object *Lclptr326;
static void LnkT326();
static void (*Lnk326)() = LnkT326;
static object  LnkTLI325(object,...);
static object  (*LnkLI325)() = (object (*)()) LnkTLI325;
static void LnkT324();
static void (*Lnk324)() = LnkT324;
static object  LnkTLI323(object,...);
static object  (*LnkLI323)() = (object (*)()) LnkTLI323;
static object  LnkTLI322(object,...);
static object  (*LnkLI322)() = (object (*)()) LnkTLI322;
static object  LnkTLI321(object,...);
static object  (*LnkLI321)() = (object (*)()) LnkTLI321;
static object *Lclptr320;
static void LnkT320();
static void (*Lnk320)() = LnkT320;
static object  LnkTLI319(object,...);
static object  (*LnkLI319)() = (object (*)()) LnkTLI319;
static object  LnkTLI318(object,...);
static object  (*LnkLI318)() = (object (*)()) LnkTLI318;
static void LnkT317();
static void (*Lnk317)() = LnkT317;
static void LnkT316();
static void (*Lnk316)() = LnkT316;
static void LnkT315();
static void (*Lnk315)() = LnkT315;
static void LnkT314();
static void (*Lnk314)() = LnkT314;
static void LnkT313();
static void (*Lnk313)() = LnkT313;
static void LnkT312();
static void (*Lnk312)() = LnkT312;
static void LnkT311();
static void (*Lnk311)() = LnkT311;
static void LnkT310();
static void (*Lnk310)() = LnkT310;
static object *Lclptr309;
static void LnkT309();
static void (*Lnk309)() = LnkT309;
static object  LnkTLI308(object,...);
static object  (*LnkLI308)() = (object (*)()) LnkTLI308;
static object  LnkTLI307(object,...);
static object  (*LnkLI307)() = (object (*)()) LnkTLI307;
static object  LnkTLI306(object,...);
static object  (*LnkLI306)() = (object (*)()) LnkTLI306;
static object  LnkTLI305(object,...);
static object  (*LnkLI305)() = (object (*)()) LnkTLI305;
static object  LnkTLI304(object,...);
static object  (*LnkLI304)() = (object (*)()) LnkTLI304;
static object  LnkTLI303(object,...);
static object  (*LnkLI303)() = (object (*)()) LnkTLI303;
static object  LnkTLI302(object,...);
static object  (*LnkLI302)() = (object (*)()) LnkTLI302;
static object  LnkTLI301(object,...);
static object  (*LnkLI301)() = (object (*)()) LnkTLI301;
static void LnkT300();
static void (*Lnk300)() = LnkT300;
static object  LnkTLI299(object,...);
static object  (*LnkLI299)() = (object (*)()) LnkTLI299;
static object  LnkTLI297(object,...);
static object  (*LnkLI297)() = (object (*)()) LnkTLI297;
static object *Lclptr296;
static void LnkT296();
static void (*Lnk296)() = LnkT296;
static void LnkT295();
static void (*Lnk295)() = LnkT295;
static object  LnkTLI294(object,...);
static object  (*LnkLI294)() = (object (*)()) LnkTLI294;
static object  LnkTLI293(object,...);
static object  (*LnkLI293)() = (object (*)()) LnkTLI293;
static void LnkT162();
static void (*Lnk162)() = LnkT162;
static object *Lclptr292;
static void LnkT292();
static void (*Lnk292)() = LnkT292;
static object  LnkTLI291(object,...);
static object  (*LnkLI291)() = (object (*)()) LnkTLI291;
static object *Lclptr290;
static void LnkT290();
static void (*Lnk290)() = LnkT290;
static object  LnkTLI289(object,...);
static object  (*LnkLI289)() = (object (*)()) LnkTLI289;
static object *Lclptr288;
static void LnkT288();
static void (*Lnk288)() = LnkT288;
static object  LnkTLI287(object,...);
static object  (*LnkLI287)() = (object (*)()) LnkTLI287;
static object  LnkTLI286(object,...);
static object  (*LnkLI286)() = (object (*)()) LnkTLI286;
static object  LnkTLI285(object,...);
static object  (*LnkLI285)() = (object (*)()) LnkTLI285;
static object *Lclptr284;
static void LnkT284();
static void (*Lnk284)() = LnkT284;
static object  LnkTLI283(object,...);
static object  (*LnkLI283)() = (object (*)()) LnkTLI283;
static object *Lclptr282;
static void LnkT282();
static void (*Lnk282)() = LnkT282;
static object  LnkTLI281(object,...);
static object  (*LnkLI281)() = (object (*)()) LnkTLI281;
static object *Lclptr280;
static void LnkT280();
static void (*Lnk280)() = LnkT280;
static object  LnkTLI279(object,...);
static object  (*LnkLI279)() = (object (*)()) LnkTLI279;
static object  LnkTLI278(object,...);
static object  (*LnkLI278)() = (object (*)()) LnkTLI278;
static object *Lclptr277;
static void LnkT277();
static void (*Lnk277)() = LnkT277;
static object  LnkTLI276(object,...);
static object  (*LnkLI276)() = (object (*)()) LnkTLI276;
static void LnkT275();
static void (*Lnk275)() = LnkT275;
static void LnkT273();
static void (*Lnk273)() = LnkT273;
static object  LnkTLI272(object,...);
static object  (*LnkLI272)() = (object (*)()) LnkTLI272;
static object *Lclptr271;
static void LnkT271();
static void (*Lnk271)() = LnkT271;
static void LnkT270();
static void (*Lnk270)() = LnkT270;
static void LnkT269();
static void (*Lnk269)() = LnkT269;
static object  LnkTLI268(object,...);
static object  (*LnkLI268)() = (object (*)()) LnkTLI268;
static object  LnkTLI267(object,...);
static object  (*LnkLI267)() = (object (*)()) LnkTLI267;
static object  LnkTLI266(object,...);
static object  (*LnkLI266)() = (object (*)()) LnkTLI266;
static void LnkT265();
static void (*Lnk265)() = LnkT265;
static object  LnkTLI264(object,...);
static object  (*LnkLI264)() = (object (*)()) LnkTLI264;
static void LnkT263();
static void (*Lnk263)() = LnkT263;
static void LnkT262();
static void (*Lnk262)() = LnkT262;
static void LnkT261();
static void (*Lnk261)() = LnkT261;
static void LnkT260();
static void (*Lnk260)() = LnkT260;
static object *Lclptr259;
static void LnkT259();
static void (*Lnk259)() = LnkT259;
static object  LnkTLI258();
static object  (*LnkLI258)() = LnkTLI258;
static void LnkT257();
static void (*Lnk257)() = LnkT257;
static void LnkT256();
static void (*Lnk256)() = LnkT256;
static void LnkT255();
static void (*Lnk255)() = LnkT255;
static void LnkT254();
static void (*Lnk254)() = LnkT254;
static object *Lclptr253;
static void LnkT253();
static void (*Lnk253)() = LnkT253;
static void LnkT252();
static void (*Lnk252)() = LnkT252;
static void LnkT102();
static void (*Lnk102)() = LnkT102;
static void LnkT249();
static void (*Lnk249)() = LnkT249;
static void LnkT93();
static void (*Lnk93)() = LnkT93;
static void LnkT248();
static void (*Lnk248)() = LnkT248;
static object  LnkTLI247(object,...);
static object  (*LnkLI247)() = (object (*)()) LnkTLI247;
static void LnkT246();
static void (*Lnk246)() = LnkT246;
static object  LnkTLI245(object,...);
static object  (*LnkLI245)() = (object (*)()) LnkTLI245;
static object  LnkTLI244(object,...);
static object  (*LnkLI244)() = (object (*)()) LnkTLI244;
static void LnkT243();
static void (*Lnk243)() = LnkT243;
static object  LnkTLI242();
static object  (*LnkLI242)() = LnkTLI242;
static void LnkT241();
static void (*Lnk241)() = LnkT241;
static object  LnkTLI240();
static object  (*LnkLI240)() = LnkTLI240;
static object  LnkTLI239(object,...);
static object  (*LnkLI239)() = (object (*)()) LnkTLI239;
static object  LnkTLI238(object,...);
static object  (*LnkLI238)() = (object (*)()) LnkTLI238;
static object  LnkTLI237(object,...);
static object  (*LnkLI237)() = (object (*)()) LnkTLI237;
static object  LnkTLI236(object,...);
static object  (*LnkLI236)() = (object (*)()) LnkTLI236;
static object  LnkTLI235(object,...);
static object  (*LnkLI235)() = (object (*)()) LnkTLI235;
static object  LnkTLI234(object,...);
static object  (*LnkLI234)() = (object (*)()) LnkTLI234;
static object  LnkTLI233(object,...);
static object  (*LnkLI233)() = (object (*)()) LnkTLI233;
static object  LnkTLI232();
static object  (*LnkLI232)() = LnkTLI232;
static void LnkT231();
static void (*Lnk231)() = LnkT231;
static object  LnkTLI230(object,...);
static object  (*LnkLI230)() = (object (*)()) LnkTLI230;
static void LnkT229();
static void (*Lnk229)() = LnkT229;
static object  LnkTLI227(object,...);
static object  (*LnkLI227)() = (object (*)()) LnkTLI227;
static void LnkT226();
static void (*Lnk226)() = LnkT226;
static object  LnkTLI225(object,...);
static object  (*LnkLI225)() = (object (*)()) LnkTLI225;
static object  LnkTLI224(object,...);
static object  (*LnkLI224)() = (object (*)()) LnkTLI224;
static void LnkT223();
static void (*Lnk223)() = LnkT223;
static object  LnkTLI222(object,...);
static object  (*LnkLI222)() = (object (*)()) LnkTLI222;
static object  LnkTLI221(object,...);
static object  (*LnkLI221)() = (object (*)()) LnkTLI221;
static void LnkT219();
static void (*Lnk219)() = LnkT219;
static object  LnkTLI218(object,...);
static object  (*LnkLI218)() = (object (*)()) LnkTLI218;
static void LnkT217();
static void (*Lnk217)() = LnkT217;
static object *Lclptr216;
static void LnkT216();
static void (*Lnk216)() = LnkT216;
static object  LnkTLI215(object,...);
static object  (*LnkLI215)() = (object (*)()) LnkTLI215;
static void LnkT214();
static void (*Lnk214)() = LnkT214;
static object  LnkTLI213(object,...);
static object  (*LnkLI213)() = (object (*)()) LnkTLI213;
static void LnkT210();
static void (*Lnk210)() = LnkT210;
static object  LnkTLI209(object,...);
static object  (*LnkLI209)() = (object (*)()) LnkTLI209;
static object  LnkTLI208(object,...);
static object  (*LnkLI208)() = (object (*)()) LnkTLI208;
static object  LnkTLI206();
static object  (*LnkLI206)() = LnkTLI206;
static void LnkT205();
static void (*Lnk205)() = LnkT205;
static void LnkT204();
static void (*Lnk204)() = LnkT204;
static void LnkT203();
static void (*Lnk203)() = LnkT203;
static object  LnkTLI202(object,...);
static object  (*LnkLI202)() = (object (*)()) LnkTLI202;
static void LnkT201();
static void (*Lnk201)() = LnkT201;
static object  LnkTLI200(object,...);
static object  (*LnkLI200)() = (object (*)()) LnkTLI200;
static void LnkT199();
static void (*Lnk199)() = LnkT199;
static object  LnkTLI198(object,...);
static object  (*LnkLI198)() = (object (*)()) LnkTLI198;
static object  LnkTLI196(object,...);
static object  (*LnkLI196)() = (object (*)()) LnkTLI196;
static void LnkT195();
static void (*Lnk195)() = LnkT195;
static object  LnkTLI194(object,...);
static object  (*LnkLI194)() = (object (*)()) LnkTLI194;
static object  LnkTLI35(object,...);
static object  (*LnkLI35)() = (object (*)()) LnkTLI35;
static object  LnkTLI192(object,...);
static object  (*LnkLI192)() = (object (*)()) LnkTLI192;
static object  LnkTLI191(object,...);
static object  (*LnkLI191)() = (object (*)()) LnkTLI191;
static object  LnkTLI190(object,...);
static object  (*LnkLI190)() = (object (*)()) LnkTLI190;
static void LnkT189();
static void (*Lnk189)() = LnkT189;
static object  LnkTLI188(object,...);
static object  (*LnkLI188)() = (object (*)()) LnkTLI188;
static void LnkT187();
static void (*Lnk187)() = LnkT187;
static object  LnkTLI181(object,...);
static object  (*LnkLI181)() = (object (*)()) LnkTLI181;
static object  LnkTLI179(object,...);
static object  (*LnkLI179)() = (object (*)()) LnkTLI179;
static object  LnkTLI47(object,...);
static object  (*LnkLI47)() = (object (*)()) LnkTLI47;
static object *Lclptr178;
static void LnkT178();
static void (*Lnk178)() = LnkT178;
static object *Lclptr177;
static void LnkT177();
static void (*Lnk177)() = LnkT177;
static object  LnkTLI176(object,...);
static object  (*LnkLI176)() = (object (*)()) LnkTLI176;
