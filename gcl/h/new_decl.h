EXTER object fLbye (fixnum exitc);
EXTER object fLquit (fixnum exitc);
EXTER object sSAno_initA;
EXTER object fLidentity (object x0);
EXTER object fLlisp_implementation_version (void);
EXTER object sSAlisp_maxpagesA;
EXTER object sSAsystem_directoryA;
EXTER object sSAmultiply_stacksA;
EXTER object sStop_level;
EXTER object sSAcommand_argsA;
EXTER object sSAafter_gbc_hookA;
EXTER object sSAignore_maximum_pagesA;
EXTER object fSallocated (object typ);
EXTER object fSreset_number_used (object typ);
EXTER object fSstaticp (object x);
EXTER object fSallocate (object type,fixnum npages,...);
EXTER object fSallocate_sgc (object type,fixnum min,fixnum max,fixnum free_percent);
EXTER object fSallocate_growth (object type,fixnum min,fixnum max,fixnum percent,fixnum percent_free);
EXTER object fSallocate_contiguous_pages (fixnum npages,...);
EXTER object fSallocated_contiguous_pages (void);
EXTER object fSmaximum_contiguous_pages (void);
EXTER object fSallocate_relocatable_pages (fixnum npages,...);
EXTER object fSallocated_relocatable_pages (void);
EXTER object fSget_hole_size (void);
EXTER object fSset_hole_size (fixnum npages,...);
EXTER object fLgbc (object x0);
EXTER object sSAnotify_gbcA;
EXTER object sSAgbc_messageA;
EXTER object sLcommon;
EXTER object sLnull;
EXTER object sLcons;
EXTER object sLlist;
EXTER object sLsymbol;
EXTER object sLarray;
EXTER object sLvector;
EXTER object sLbit_vector;
EXTER object sLstring;
EXTER object sLsequence;
EXTER object sLsimple_array;
EXTER object sLsimple_vector;
EXTER object sLsimple_bit_vector;
EXTER object sLsimple_string;
EXTER object sLfunction;
EXTER object sLcompiled_function;
EXTER object sLpathname;
EXTER object sLcharacter;
EXTER object sLnumber;
EXTER object sLrational;
EXTER object sLfloat;
EXTER object sLstring_char;
EXTER object sLinteger;
EXTER object sLratio;
EXTER object sLshort_float;
EXTER object sLstandard_char;
EXTER object sLboolean;
EXTER object sLfixnum;
EXTER object sLpositive_fixnum;
EXTER object sLcomplex;
EXTER object sLsingle_float;
EXTER object sLpackage;
EXTER object sLbignum;
EXTER object sLrandom_state;
EXTER object sLdouble_float;
EXTER object sLstream;
EXTER object sLbit;
EXTER object sLreadtable;
EXTER object sLlong_float;
EXTER object sLhash_table;
EXTER object sLkeyword;
EXTER object sLstructure;
EXTER object sLsatisfies;
EXTER object sLmember;
EXTER object sLnot;
EXTER object sLor;
EXTER object sLand;
EXTER object sLvalues;
EXTER object sLmod;
EXTER object sLsigned_byte;
EXTER object sLunsigned_byte;
EXTER object sLsigned_char;
EXTER object sLunsigned_char;
EXTER object sLsigned_short;
EXTER object sLunsigned_short;
EXTER object sLA;
EXTER object sLplusp;
EXTER object sLmethod_combination;
EXTER object sLarithmetic_error;
EXTER object sLbase_char;
EXTER object sLbase_string;
EXTER object sLbroadcast_stream;
EXTER object sLbuilt_in_class;
EXTER object sLcell_error;
EXTER object sLclass;
EXTER object sLconcatenated_stream;
EXTER object sLcondition;
EXTER object sLcontrol_error;
EXTER object sLdivision_by_zero;
EXTER object sLecho_stream;
EXTER object sLend_of_file;
EXTER object sLerror;
EXTER object sLextended_char;
EXTER object sLfile_error;
EXTER object sLfile_stream;
EXTER object sLfloating_point_inexact;
EXTER object sLfloating_point_invalid_operation;
EXTER object sLfloating_point_overflow;
EXTER object sLfloating_point_underflow;
EXTER object sLgeneric_function;
EXTER object sLlogical_pathname;
EXTER object sLmethod;
EXTER object sLpackage_error;
EXTER object sLparse_error;
EXTER object sLprint_not_readable;
EXTER object sLprogram_error;
EXTER object sLreader_error;
EXTER object sLserious_condition;
EXTER object sLsimple_base_string;
EXTER object sLsimple_condition;
EXTER object sLsimple_type_error;
EXTER object sLsimple_warning;
EXTER object sLstandard_class;
EXTER object sLstandard_generic_function;
EXTER object sLstandard_method;
EXTER object sLstandard_object;
EXTER object sLstorage_condition;
EXTER object sLstream_error;
EXTER object sLstring_stream;
EXTER object sLstructure_class;
EXTER object sLstructure_object;
EXTER object sLstyle_warning;
EXTER object sLsynonym_stream;
EXTER object sLtwo_way_stream;
EXTER object sLtype_error;
EXTER object sLunbound_slot;
EXTER object sLunbound_variable;
EXTER object sLundefined_function;
EXTER object sLwarning;
EXTER object sSchar_size;
EXTER object sSshort_size;
EXTER object fLfuncall (object fun,...);
EXTER object fLapply (object fun,...);
EXTER object fLeval (object x0);
EXTER object fLconstantp (object x0);
EXTER object sSlambda_block_expanded;
EXTER object sSAbreak_pointsA;
EXTER object sSAbreak_stepA;
EXTER object fLmacroexpand (object form,...);
EXTER object sLfuncall;
EXTER object sLAmacroexpand_hookA;
EXTER object sSdefmacroA;
EXTER object sSAinhibit_macro_specialA;
EXTER object fLnot (object x0);
EXTER object fLnot (object x0);
EXTER object fLsymbolp (object x0);
EXTER object fLatom (object x0);
EXTER object fLconsp (object x0);
EXTER object fLlistp (object x0);
EXTER object fLnumberp (object x0);
EXTER object fLintegerp (object x0);
EXTER object fLrationalp (object x0);
EXTER object fLrealp (object x0);
EXTER object fLfloatp (object x0);
EXTER object fLcomplexp (object x0);
EXTER object fLcharacterp (object x0);
EXTER object fLstringp (object x0);
EXTER object fLbit_vector_p (object x0);
EXTER object fLvectorp (object x0);
EXTER object fLsimple_string_p (object x0);
EXTER object fLsimple_bit_vector_p (object x0);
EXTER object fLsimple_vector_p (object x0);
EXTER object fLarrayp (object x0);
EXTER object fLpackagep (object x0);
EXTER object fLfunctionp (object x0);
EXTER object fLcompiled_function_p (object x0);
EXTER object fLcommonp (object x0);
EXTER object fLeq (object x0,object x1);
EXTER object fLeql (object x0,object x1);
EXTER object fLequal (object x0,object x1);
EXTER object fLequalp (object x0,object x1);
EXTER object fScontains_sharp_comma (object x0);
EXTER object fSspicep (object x0);
EXTER object fSfixnump (object x0);
EXTER object fLset (object symbol,object value);
EXTER object fSfset (object sym,object function);
EXTER object fLmakunbound (object sym);
EXTER object fLfmakunbound (object sym);
EXTER object sSclear_compiler_properties;
EXTER object fSclear_compiler_properties (object x0,object x1);
EXTER object sLaref;
EXTER object sLcar;
EXTER object sLcdr;
EXTER object sLchar;
EXTER object sLdecf;
EXTER object sLelt;
EXTER object sLfill_pointer;
EXTER object sLget;
EXTER object sLgetf;
EXTER object sLgethash;
EXTER object sLincf;
EXTER object sLpop;
EXTER object sLpush;
EXTER object sLschar;
EXTER object sLsetf;
EXTER object sSsetf_lambda;
EXTER object sSstructure_access;
EXTER object sLsvref;
EXTER object sStraced;
EXTER object sLvector;
EXTER object sKallow_other_keys;
EXTER object fSerror_set (volatile object x0);
EXTER object sLgensym_counter;
EXTER object fSmc (object name,object address);
EXTER object fSmfsfun (object name,object address,object argd);
EXTER object fSmfvfun (object name,object address,object argd);
EXTER object fSmfvfun_key (object symbol,object address,object argd,object keys);
EXTER object fSmf (object name,object addr);
EXTER object fSmm (object name,object addr);
EXTER object fScompiled_function_name (object fun);
EXTER object fSturbo_closure (object funobj);
EXTER object fSspecialp (object sym);
EXTER object sSdebug;
EXTER object fSdefvar1 (object sym,object val,...);
EXTER object fSdebug (object sym,object val);
EXTER object fSsetvv (object index,object val);
EXTER object sSPmemory;
EXTER object sSPinit;
EXTER object fSinit_cmp_anon (void);
EXTER object sKexternal;
EXTER object sKinherited;
EXTER object sKinternal;
EXTER object sKnicknames;
EXTER object sKuse;
EXTER object sLApackageA;
EXTER object fSset_gmp_allocate_relocatable (object flag);
EXTER object fSallocate_bigger_fixnum_range (fixnum min,fixnum max);
EXTER object fScmod (object num);
EXTER object fScplus (object x0,object x1);
EXTER object fSctimes (object x0,object x1);
EXTER object fScdifference (object x0,object x1);
EXTER object fLnth (fixnum index,object list);
EXTER object fLfirst (object x);
EXTER object fLsecond (object x);
EXTER object fLthird (object x);
EXTER object fLfourth (object x);
EXTER object fLfifth (object x);
EXTER object fLsixth (object x);
EXTER object fLseventh (object x);
EXTER object fLeighth (object x);
EXTER object fLninth (object x);
EXTER object fLtenth (object x);
EXTER object fSnext_hash_table_entry (object table,object ind);
EXTER object fLhash_table_test (object table);
EXTER object fLhash_table_size (object table);
EXTER object sLarray_rank_limit;
EXTER object sLarray_dimension_limit;
EXTER object sLarray_total_size_limit;
EXTER object sLbit;
EXTER object fLaref (object x,fixnum i, ...);
EXTER object fLsvref (object x,ufixnum i);
EXTER object fLrow_major_aref (object x,fixnum i);
EXTER object fSaset1 (object x, fixnum i,object val);
EXTER object fSaset (object x,fixnum i,object y, ...);
EXTER object fSsvset (object x,fixnum i,object val);
EXTER object fSmake_vector1 (fixnum n,fixnum elt_type,object staticp,...);
EXTER object fSget_aelttype (object x);
EXTER object fSmake_vector (object x0,object x1,object x2,object x3,object x4,object x5,object x6,...);
EXTER object fSmake_array1 (fixnum elt_type,object staticp,object initial_element,object displaced_to,fixnum displaced_index_offset, object dimensions);
EXTER object fScopy_array_portion (object x,object y,fixnum i1,fixnum i2,object n1o);
EXTER object fSfill_pointer_set (object x,fixnum i);
EXTER object fLfill_pointer (object x);
EXTER object fLarray_has_fill_pointer_p (object x);
EXTER object fLarray_element_type (object x);
EXTER object fLadjustable_array_p (object x);
EXTER object fSdisplaced_array_p (object x);
EXTER object fLarray_rank (object x);
EXTER object fLarray_dimension (object x,fixnum i);
EXTER object fSreplace_array (object old,object new);
EXTER object fLarray_total_size (object x);
EXTER object fSaset_by_cursor (object array,object val,object cursor);
EXTER object sSAmatch_dataA;
EXTER object sSAcase_fold_searchA;
EXTER object fSmatch_beginning (fixnum i);
EXTER object fSmatch_end (fixnum i);
EXTER object fSstring_match (object pattern,object string,...);
EXTER object sSs_data;
EXTER object sLcompile;
EXTER object sLcompile_tl;
EXTER object sLdeclare;
EXTER object sLeval;
EXTER object sLexecute;
EXTER object sSfunction_documentation;
EXTER object sLload;
EXTER object sLload_tl;
EXTER object sLprogn;
EXTER object sLtypep;
EXTER object sLvalues;
EXTER object sSvariable_documentation;
EXTER object sLwarn;
EXTER object sSAallow_gzipped_fileA;
EXTER object sKmyaddr;
EXTER object sKmyport;
EXTER object sKasync;
EXTER object sKhost;
EXTER object sKserver;
EXTER object sSsocket;
EXTER object sLAstandard_inputA;
EXTER object sLAstandard_outputA;
EXTER object sLAerror_outputA;
EXTER object sLAterminal_ioA;
EXTER object sLAquery_ioA;
EXTER object sLAdebug_ioA;
EXTER object sLAtrace_outputA;
EXTER object sSAignore_eof_on_terminal_ioA;
EXTER object sSAload_pathnameA;
EXTER object sLAload_verboseA;
EXTER object sKabort;
EXTER object sKappend;
EXTER object sKcreate;
EXTER object sKdefault;
EXTER object sKdirection;
EXTER object sKelement_type;
EXTER object sKerror;
EXTER object sKif_does_not_exist;
EXTER object sKif_exists;
EXTER object sKinput;
EXTER object sKio;
EXTER object sKnew_version;
EXTER object sKoutput;
EXTER object sKoverwrite;
EXTER object sKprint;
EXTER object sKprobe;
EXTER object sKrename;
EXTER object sKrename_and_delete;
EXTER object sKset_default_pathname;
EXTER object sKsupersede;
EXTER object sKverbose;
EXTER object sLAread_default_float_formatA;
EXTER object sLAread_baseA;
EXTER object sLAread_suppressA;
EXTER object sSY;
EXTER object sSYB;
EXTER object sSYZ;
EXTER object sLlistA;
EXTER object sLappend;
EXTER object sLnconc;
EXTER object sLapply;
EXTER object sLvector;
EXTER object sKupcase;
EXTER object sKdowncase;
EXTER object sKcapitalize;
EXTER object sKstream;
EXTER object sKescape;
EXTER object sKreadably;
EXTER object sKpretty;
EXTER object sKcircle;
EXTER object sKbase;
EXTER object sKradix;
EXTER object sKcase;
EXTER object sKgensym;
EXTER object sKlevel;
EXTER object sKlength;
EXTER object sKarray;
EXTER object sLAprint_escapeA;
EXTER object sLAprint_readablyA;
EXTER object sLAprint_prettyA;
EXTER object sLAprint_circleA;
EXTER object sLAprint_baseA;
EXTER object sLAprint_radixA;
EXTER object sLAprint_caseA;
EXTER object sLAprint_gensymA;
EXTER object sLAprint_levelA;
EXTER object sLAprint_lengthA;
EXTER object sLAprint_arrayA;
EXTER object sSAprint_packageA;
EXTER object sSAprint_structureA;
EXTER object sSpretty_print_format;
EXTER object sSAprint_nansA;
EXTER object fLformat (object strm, object control,...);
EXTER object sSAindent_formatted_outputA;
EXTER object fSsetenv (object variable,object value);
EXTER object fLdelete_file (object path);
EXTER object fLerror (object fmt_string,...);
EXTER object fLspecific_error (object error_name,object fmt_string,...);
EXTER object fLspecific_correctable_error (object error_name,object fmt_string,...);
EXTER object fLcerror (object continue_fmt_string,object fmt_string,...);
EXTER object fSihs_top (void);
EXTER object fSihs_fun (object x0);
EXTER object fSihs_vs (object x0);
EXTER object fSfrs_top (void);
EXTER object fSfrs_vs (object x0);
EXTER object fSfrs_bds (object x0);
EXTER object fSfrs_class (object x0);
EXTER object fSfrs_tag (object x0);
EXTER object fSfrs_ihs (object x0);
EXTER object fSbds_top (void);
EXTER object fSbds_var (object x0);
EXTER object fSbds_val (object x0);
EXTER object fSvs_top (void);
EXTER object fSvs (object x0);
EXTER object fSsch_frs_base (object x0,object x1);
EXTER object fSinternal_super_go (object tag,object x1,object x2);
EXTER object sSuniversal_error_handler;
EXTER object fSuniversal_error_handler (object x0,object x1,object x2,object x3,object error_fmt_string);
EXTER object sSterminal_interrupt;
EXTER object sKwrong_type_argument;
EXTER object sKtoo_few_arguments;
EXTER object sKtoo_many_arguments;
EXTER object sKunexpected_keyword;
EXTER object sKinvalid_form;
EXTER object sKunbound_variable;
EXTER object sKinvalid_variable;
EXTER object sKundefined_function;
EXTER object sKinvalid_function;
EXTER object sKpackage_error;
EXTER object sKcatch;
EXTER object sKprotect;
EXTER object sKcatchall;
EXTER object fLget_universal_time (void);
EXTER object fLget_internal_real_time (void);
EXTER object sSAdefault_time_zoneA;
EXTER object fSgetpid (void);
EXTER object fSuse_fast_links (object flag,...);
EXTER object sScdefn;
EXTER object sLAlink_arrayA;
EXTER object fSprofile (object start_address,object scale);
EXTER object fSfunction_start (object funobj);
EXTER object fSset_up_combined (object first,...);
EXTER object fSdisplay_profile (object start_addr,object scal);
EXTER object fSarray_adress (object array);
EXTER object sSAprofile_arrayA;
EXTER object sSAinterrupt_enableA;
EXTER object sSsigusr1_interrupt;
EXTER object sSsigio_interrupt;
EXTER object sSsignal_safety_required (fixnum signo,fixnum safety);
EXTER object fSallow_signal (fixnum n);
EXTER object fSinitfun (object sym,object addr_ind,object argd,...);
EXTER object fSinitmacro (object first,...);
EXTER object fSset_key_struct (object key_struct_ind);
EXTER object fSinvoke (object x);
EXTER object fSopen_named_socket (fixnum port);
EXTER object fSclose_fd (fixnum fd);
EXTER object fSclose_sfd (object sfd);
EXTER object fSaccept_socket_connection (object named_socket);
EXTER object fShostname_to_hostid (object host);
EXTER object fSgethostname (void);
EXTER object fShostid_to_hostname (object host_id);
EXTER object fScheck_fd_for_input (fixnum fd,fixnum timeout);
EXTER object fSclear_connection (fixnum fd);
EXTER object fSconnection_state_fd (object sfd);
EXTER object fSour_write (object sfd,object buffer,fixnum nbytes);
EXTER object fSour_read_with_offset (object fd,object buffer,fixnum offset,fixnum nbytes,fixnum timeout);
EXTER object fSprint_to_string1 (object str,object x,object the_code);
EXTER object fSset_sigio_for_fd (fixnum fd);
EXTER object fSreset_string_input_stream (object strm,object string,fixnum start,fixnum end);
EXTER object fScheck_state_input (object osfd,fixnum timeout);
EXTER object fSclear_connection_state (object osfd);
EXTER object fSgetpeername (object sock);
EXTER object fSgetsockname (object sock);
EXTER object fSset_blocking (object sock,object setBlocking);
