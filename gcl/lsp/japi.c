
#include "cmpinclude.h"
#include "japi.h"
void init_japi(){do_init(VV);}
#include <japi.h>
/*	function definition for J_START	*/

static void L1()
{	object *old_base=vs_base;
	int x;
	check_arg(0);
	x=
	j_start();
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=make_fixnum(x);
}
/*	function definition for J_CONNECT	*/

static void L2()
{	object *old_base=vs_base;
	int x;
	check_arg(1);
	x=
	j_connect(
	object_to_string(vs_base[0]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=make_fixnum(x);
}
/*	function definition for J_SETDEBUG	*/

static void L3()
{	object *old_base=vs_base;
	check_arg(1);
	j_setdebug(
	object_to_int(vs_base[0]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=Cnil;
}
/*	function definition for J_FRAME	*/

static void L4()
{	object *old_base=vs_base;
	int x;
	check_arg(1);
	x=
	j_frame(
	object_to_string(vs_base[0]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=make_fixnum(x);
}
/*	function definition for J_BUTTON	*/

static void L5()
{	object *old_base=vs_base;
	int x;
	check_arg(2);
	x=
	j_button(
	object_to_int(vs_base[0]),
	object_to_string(vs_base[1]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=make_fixnum(x);
}
/*	function definition for J_GRAPHICBUTTON	*/

static void L6()
{	object *old_base=vs_base;
	int x;
	check_arg(2);
	x=
	j_graphicbutton(
	object_to_int(vs_base[0]),
	object_to_string(vs_base[1]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=make_fixnum(x);
}
/*	function definition for J_CHECKBOX	*/

static void L7()
{	object *old_base=vs_base;
	int x;
	check_arg(2);
	x=
	j_checkbox(
	object_to_int(vs_base[0]),
	object_to_string(vs_base[1]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=make_fixnum(x);
}
/*	function definition for J_LABEL	*/

static void L8()
{	object *old_base=vs_base;
	int x;
	check_arg(2);
	x=
	j_label(
	object_to_int(vs_base[0]),
	object_to_string(vs_base[1]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=make_fixnum(x);
}
/*	function definition for J_GRAPHICLABEL	*/

static void L9()
{	object *old_base=vs_base;
	int x;
	check_arg(2);
	x=
	j_graphiclabel(
	object_to_int(vs_base[0]),
	object_to_string(vs_base[1]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=make_fixnum(x);
}
/*	function definition for J_CANVAS	*/

static void L10()
{	object *old_base=vs_base;
	int x;
	check_arg(3);
	x=
	j_canvas(
	object_to_int(vs_base[0]),
	object_to_int(vs_base[1]),
	object_to_int(vs_base[2]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=make_fixnum(x);
}
/*	function definition for J_PANEL	*/

static void L11()
{	object *old_base=vs_base;
	int x;
	check_arg(1);
	x=
	j_panel(
	object_to_int(vs_base[0]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=make_fixnum(x);
}
/*	function definition for J_BORDERPANEL	*/

static void L12()
{	object *old_base=vs_base;
	int x;
	check_arg(2);
	x=
	j_borderpanel(
	object_to_int(vs_base[0]),
	object_to_int(vs_base[1]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=make_fixnum(x);
}
/*	function definition for J_RADIOGROUP	*/

static void L13()
{	object *old_base=vs_base;
	int x;
	check_arg(1);
	x=
	j_radiogroup(
	object_to_int(vs_base[0]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=make_fixnum(x);
}
/*	function definition for J_RADIOBUTTON	*/

static void L14()
{	object *old_base=vs_base;
	int x;
	check_arg(2);
	x=
	j_radiobutton(
	object_to_int(vs_base[0]),
	object_to_string(vs_base[1]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=make_fixnum(x);
}
/*	function definition for J_LIST	*/

static void L15()
{	object *old_base=vs_base;
	int x;
	check_arg(2);
	x=
	j_list(
	object_to_int(vs_base[0]),
	object_to_int(vs_base[1]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=make_fixnum(x);
}
/*	function definition for J_CHOICE	*/

static void L16()
{	object *old_base=vs_base;
	int x;
	check_arg(1);
	x=
	j_choice(
	object_to_int(vs_base[0]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=make_fixnum(x);
}
/*	function definition for J_DIALOG	*/

static void L17()
{	object *old_base=vs_base;
	int x;
	check_arg(2);
	x=
	j_dialog(
	object_to_int(vs_base[0]),
	object_to_string(vs_base[1]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=make_fixnum(x);
}
/*	function definition for J_WINDOW	*/

static void L18()
{	object *old_base=vs_base;
	int x;
	check_arg(1);
	x=
	j_window(
	object_to_int(vs_base[0]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=make_fixnum(x);
}
/*	function definition for J_POPUPMENU	*/

static void L19()
{	object *old_base=vs_base;
	int x;
	check_arg(2);
	x=
	j_popupmenu(
	object_to_int(vs_base[0]),
	object_to_string(vs_base[1]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=make_fixnum(x);
}
/*	function definition for J_SCROLLPANE	*/

static void L20()
{	object *old_base=vs_base;
	int x;
	check_arg(1);
	x=
	j_scrollpane(
	object_to_int(vs_base[0]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=make_fixnum(x);
}
/*	function definition for J_HSCROLLBAR	*/

static void L21()
{	object *old_base=vs_base;
	int x;
	check_arg(1);
	x=
	j_hscrollbar(
	object_to_int(vs_base[0]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=make_fixnum(x);
}
/*	function definition for J_VSCROLLBAR	*/

static void L22()
{	object *old_base=vs_base;
	int x;
	check_arg(1);
	x=
	j_vscrollbar(
	object_to_int(vs_base[0]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=make_fixnum(x);
}
/*	function definition for J_LINE	*/

static void L23()
{	object *old_base=vs_base;
	int x;
	check_arg(4);
	x=
	j_line(
	object_to_int(vs_base[0]),
	object_to_int(vs_base[1]),
	object_to_int(vs_base[2]),
	object_to_int(vs_base[3]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=make_fixnum(x);
}
/*	function definition for J_PRINTER	*/

static void L24()
{	object *old_base=vs_base;
	int x;
	check_arg(1);
	x=
	j_printer(
	object_to_int(vs_base[0]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=make_fixnum(x);
}
/*	function definition for J_IMAGE	*/

static void L25()
{	object *old_base=vs_base;
	int x;
	check_arg(2);
	x=
	j_image(
	object_to_int(vs_base[0]),
	object_to_int(vs_base[1]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=make_fixnum(x);
}
/*	function definition for J_FILEDIALOG	*/

static void L26()
{	object *old_base=vs_base;
	char *x;
	check_arg(4);
	x=
	j_filedialog(
	object_to_int(vs_base[0]),
	object_to_string(vs_base[1]),
	object_to_string(vs_base[2]),
	object_to_string(vs_base[3]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=make_simple_string(x);
}
/*	function definition for J_FILESELECT	*/

static void L27()
{	object *old_base=vs_base;
	char *x;
	check_arg(4);
	x=
	j_fileselect(
	object_to_int(vs_base[0]),
	object_to_string(vs_base[1]),
	object_to_string(vs_base[2]),
	object_to_string(vs_base[3]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=make_simple_string(x);
}
/*	function definition for J_MESSAGEBOX	*/

static void L28()
{	object *old_base=vs_base;
	int x;
	check_arg(3);
	x=
	j_messagebox(
	object_to_int(vs_base[0]),
	object_to_string(vs_base[1]),
	object_to_string(vs_base[2]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=make_fixnum(x);
}
/*	function definition for J_ALERTBOX	*/

static void L29()
{	object *old_base=vs_base;
	int x;
	check_arg(4);
	x=
	j_alertbox(
	object_to_int(vs_base[0]),
	object_to_string(vs_base[1]),
	object_to_string(vs_base[2]),
	object_to_string(vs_base[3]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=make_fixnum(x);
}
/*	function definition for J_CHOICEBOX2	*/

static void L30()
{	object *old_base=vs_base;
	int x;
	check_arg(5);
	x=
	j_choicebox2(
	object_to_int(vs_base[0]),
	object_to_string(vs_base[1]),
	object_to_string(vs_base[2]),
	object_to_string(vs_base[3]),
	object_to_string(vs_base[4]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=make_fixnum(x);
}
/*	function definition for J_CHOICEBOX3	*/

static void L31()
{	object *old_base=vs_base;
	int x;
	check_arg(6);
	x=
	j_choicebox3(
	object_to_int(vs_base[0]),
	object_to_string(vs_base[1]),
	object_to_string(vs_base[2]),
	object_to_string(vs_base[3]),
	object_to_string(vs_base[4]),
	object_to_string(vs_base[5]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=make_fixnum(x);
}
/*	function definition for J_ADDITEM	*/

static void L32()
{	object *old_base=vs_base;
	check_arg(2);
	j_additem(
	object_to_int(vs_base[0]),
	object_to_string(vs_base[1]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=Cnil;
}
/*	function definition for J_TEXTFIELD	*/

static void L33()
{	object *old_base=vs_base;
	int x;
	check_arg(2);
	x=
	j_textfield(
	object_to_int(vs_base[0]),
	object_to_int(vs_base[1]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=make_fixnum(x);
}
/*	function definition for J_TEXTAREA	*/

static void L34()
{	object *old_base=vs_base;
	int x;
	check_arg(3);
	x=
	j_textarea(
	object_to_int(vs_base[0]),
	object_to_int(vs_base[1]),
	object_to_int(vs_base[2]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=make_fixnum(x);
}
/*	function definition for J_MENUBAR	*/

static void L35()
{	object *old_base=vs_base;
	int x;
	check_arg(1);
	x=
	j_menubar(
	object_to_int(vs_base[0]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=make_fixnum(x);
}
/*	function definition for J_MENU	*/

static void L36()
{	object *old_base=vs_base;
	int x;
	check_arg(2);
	x=
	j_menu(
	object_to_int(vs_base[0]),
	object_to_string(vs_base[1]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=make_fixnum(x);
}
/*	function definition for J_HELPMENU	*/

static void L37()
{	object *old_base=vs_base;
	int x;
	check_arg(2);
	x=
	j_helpmenu(
	object_to_int(vs_base[0]),
	object_to_string(vs_base[1]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=make_fixnum(x);
}
/*	function definition for J_MENUITEM	*/

static void L38()
{	object *old_base=vs_base;
	int x;
	check_arg(2);
	x=
	j_menuitem(
	object_to_int(vs_base[0]),
	object_to_string(vs_base[1]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=make_fixnum(x);
}
/*	function definition for J_CHECKMENUITEM	*/

static void L39()
{	object *old_base=vs_base;
	int x;
	check_arg(2);
	x=
	j_checkmenuitem(
	object_to_int(vs_base[0]),
	object_to_string(vs_base[1]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=make_fixnum(x);
}
/*	function definition for J_PACK	*/

static void L40()
{	object *old_base=vs_base;
	check_arg(1);
	j_pack(
	object_to_int(vs_base[0]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=Cnil;
}
/*	function definition for J_PRINT	*/

static void L41()
{	object *old_base=vs_base;
	check_arg(1);
	j_print(
	object_to_int(vs_base[0]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=Cnil;
}
/*	function definition for J_PLAYSOUNDFILE	*/

static void L42()
{	object *old_base=vs_base;
	check_arg(1);
	j_playsoundfile(
	object_to_string(vs_base[0]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=Cnil;
}
/*	function definition for J_PLAY	*/

static void L43()
{	object *old_base=vs_base;
	check_arg(1);
	j_play(
	object_to_int(vs_base[0]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=Cnil;
}
/*	function definition for J_SOUND	*/

static void L44()
{	object *old_base=vs_base;
	int x;
	check_arg(1);
	x=
	j_sound(
	object_to_string(vs_base[0]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=make_fixnum(x);
}
/*	function definition for J_SETFONT	*/

static void L45()
{	object *old_base=vs_base;
	check_arg(4);
	j_setfont(
	object_to_int(vs_base[0]),
	object_to_int(vs_base[1]),
	object_to_int(vs_base[2]),
	object_to_int(vs_base[3]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=Cnil;
}
/*	function definition for J_SETFONTNAME	*/

static void L46()
{	object *old_base=vs_base;
	check_arg(2);
	j_setfontname(
	object_to_int(vs_base[0]),
	object_to_int(vs_base[1]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=Cnil;
}
/*	function definition for J_SETFONTSIZE	*/

static void L47()
{	object *old_base=vs_base;
	check_arg(2);
	j_setfontsize(
	object_to_int(vs_base[0]),
	object_to_int(vs_base[1]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=Cnil;
}
/*	function definition for J_SETFONTSTYLE	*/

static void L48()
{	object *old_base=vs_base;
	check_arg(2);
	j_setfontstyle(
	object_to_int(vs_base[0]),
	object_to_int(vs_base[1]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=Cnil;
}
/*	function definition for J_SEPERATOR	*/

static void L49()
{	object *old_base=vs_base;
	check_arg(1);
	j_seperator(
	object_to_int(vs_base[0]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=Cnil;
}
/*	function definition for J_DISABLE	*/

static void L50()
{	object *old_base=vs_base;
	check_arg(1);
	j_disable(
	object_to_int(vs_base[0]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=Cnil;
}
/*	function definition for J_ENABLE	*/

static void L51()
{	object *old_base=vs_base;
	check_arg(1);
	j_enable(
	object_to_int(vs_base[0]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=Cnil;
}
/*	function definition for J_GETSTATE	*/

static void L52()
{	object *old_base=vs_base;
	int x;
	check_arg(1);
	x=
	j_getstate(
	object_to_int(vs_base[0]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=make_fixnum(x);
}
/*	function definition for J_GETROWS	*/

static void L53()
{	object *old_base=vs_base;
	int x;
	check_arg(1);
	x=
	j_getrows(
	object_to_int(vs_base[0]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=make_fixnum(x);
}
/*	function definition for J_GETCOLUMNS	*/

static void L54()
{	object *old_base=vs_base;
	int x;
	check_arg(1);
	x=
	j_getcolumns(
	object_to_int(vs_base[0]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=make_fixnum(x);
}
/*	function definition for J_GETSELECT	*/

static void L55()
{	object *old_base=vs_base;
	int x;
	check_arg(1);
	x=
	j_getselect(
	object_to_int(vs_base[0]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=make_fixnum(x);
}
/*	function definition for J_ISSELECT	*/

static void L56()
{	object *old_base=vs_base;
	int x;
	check_arg(2);
	x=
	j_isselect(
	object_to_int(vs_base[0]),
	object_to_int(vs_base[1]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=make_fixnum(x);
}
/*	function definition for J_ISVISIBLE	*/

static void L57()
{	object *old_base=vs_base;
	int x;
	check_arg(1);
	x=
	j_isvisible(
	object_to_int(vs_base[0]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=make_fixnum(x);
}
/*	function definition for J_ISPARENT	*/

static void L58()
{	object *old_base=vs_base;
	int x;
	check_arg(2);
	x=
	j_isparent(
	object_to_int(vs_base[0]),
	object_to_int(vs_base[1]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=make_fixnum(x);
}
/*	function definition for J_ISRESIZABLE	*/

static void L59()
{	object *old_base=vs_base;
	int x;
	check_arg(1);
	x=
	j_isresizable(
	object_to_int(vs_base[0]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=make_fixnum(x);
}
/*	function definition for J_SELECT	*/

static void L60()
{	object *old_base=vs_base;
	check_arg(2);
	j_select(
	object_to_int(vs_base[0]),
	object_to_int(vs_base[1]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=Cnil;
}
/*	function definition for J_DESELECT	*/

static void L61()
{	object *old_base=vs_base;
	check_arg(2);
	j_deselect(
	object_to_int(vs_base[0]),
	object_to_int(vs_base[1]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=Cnil;
}
/*	function definition for J_MULTIPLEMODE	*/

static void L62()
{	object *old_base=vs_base;
	check_arg(2);
	j_multiplemode(
	object_to_int(vs_base[0]),
	object_to_int(vs_base[1]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=Cnil;
}
/*	function definition for J_INSERT	*/

static void L63()
{	object *old_base=vs_base;
	check_arg(3);
	j_insert(
	object_to_int(vs_base[0]),
	object_to_int(vs_base[1]),
	object_to_string(vs_base[2]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=Cnil;
}
/*	function definition for J_REMOVE	*/

static void L64()
{	object *old_base=vs_base;
	check_arg(2);
	j_remove(
	object_to_int(vs_base[0]),
	object_to_int(vs_base[1]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=Cnil;
}
/*	function definition for J_REMOVEITEM	*/

static void L65()
{	object *old_base=vs_base;
	check_arg(2);
	j_removeitem(
	object_to_int(vs_base[0]),
	object_to_string(vs_base[1]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=Cnil;
}
/*	function definition for J_REMOVEALL	*/

static void L66()
{	object *old_base=vs_base;
	check_arg(1);
	j_removeall(
	object_to_int(vs_base[0]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=Cnil;
}
/*	function definition for J_SETSTATE	*/

static void L67()
{	object *old_base=vs_base;
	check_arg(2);
	j_setstate(
	object_to_int(vs_base[0]),
	object_to_int(vs_base[1]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=Cnil;
}
/*	function definition for J_SETROWS	*/

static void L68()
{	object *old_base=vs_base;
	check_arg(2);
	j_setrows(
	object_to_int(vs_base[0]),
	object_to_int(vs_base[1]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=Cnil;
}
/*	function definition for J_SETCOLUMNS	*/

static void L69()
{	object *old_base=vs_base;
	check_arg(2);
	j_setcolumns(
	object_to_int(vs_base[0]),
	object_to_int(vs_base[1]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=Cnil;
}
/*	function definition for J_SETICON	*/

static void L70()
{	object *old_base=vs_base;
	check_arg(2);
	j_seticon(
	object_to_int(vs_base[0]),
	object_to_int(vs_base[1]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=Cnil;
}
/*	function definition for J_SETIMAGE	*/

static void L71()
{	object *old_base=vs_base;
	check_arg(2);
	j_setimage(
	object_to_int(vs_base[0]),
	object_to_int(vs_base[1]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=Cnil;
}
/*	function definition for J_SETVALUE	*/

static void L72()
{	object *old_base=vs_base;
	check_arg(2);
	j_setvalue(
	object_to_int(vs_base[0]),
	object_to_int(vs_base[1]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=Cnil;
}
/*	function definition for J_SETRADIOGROUP	*/

static void L73()
{	object *old_base=vs_base;
	check_arg(2);
	j_setradiogroup(
	object_to_int(vs_base[0]),
	object_to_int(vs_base[1]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=Cnil;
}
/*	function definition for J_SETUNITINC	*/

static void L74()
{	object *old_base=vs_base;
	check_arg(2);
	j_setunitinc(
	object_to_int(vs_base[0]),
	object_to_int(vs_base[1]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=Cnil;
}
/*	function definition for J_SETBLOCKINC	*/

static void L75()
{	object *old_base=vs_base;
	check_arg(2);
	j_setblockinc(
	object_to_int(vs_base[0]),
	object_to_int(vs_base[1]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=Cnil;
}
/*	function definition for J_SETMIN	*/

static void L76()
{	object *old_base=vs_base;
	check_arg(2);
	j_setmin(
	object_to_int(vs_base[0]),
	object_to_int(vs_base[1]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=Cnil;
}
/*	function definition for J_SETMAX	*/

static void L77()
{	object *old_base=vs_base;
	check_arg(2);
	j_setmax(
	object_to_int(vs_base[0]),
	object_to_int(vs_base[1]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=Cnil;
}
/*	function definition for J_SETSLIDESIZE	*/

static void L78()
{	object *old_base=vs_base;
	check_arg(2);
	j_setslidesize(
	object_to_int(vs_base[0]),
	object_to_int(vs_base[1]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=Cnil;
}
/*	function definition for J_SETCURSOR	*/

static void L79()
{	object *old_base=vs_base;
	check_arg(2);
	j_setcursor(
	object_to_int(vs_base[0]),
	object_to_int(vs_base[1]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=Cnil;
}
/*	function definition for J_SETRESIZABLE	*/

static void L80()
{	object *old_base=vs_base;
	check_arg(2);
	j_setresizable(
	object_to_int(vs_base[0]),
	object_to_int(vs_base[1]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=Cnil;
}
/*	function definition for J_GETLENGTH	*/

static void L81()
{	object *old_base=vs_base;
	int x;
	check_arg(1);
	x=
	j_getlength(
	object_to_int(vs_base[0]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=make_fixnum(x);
}
/*	function definition for J_GETVALUE	*/

static void L82()
{	object *old_base=vs_base;
	int x;
	check_arg(1);
	x=
	j_getvalue(
	object_to_int(vs_base[0]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=make_fixnum(x);
}
/*	function definition for J_GETSCREENHEIGHT	*/

static void L83()
{	object *old_base=vs_base;
	int x;
	check_arg(0);
	x=
	j_getscreenheight();
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=make_fixnum(x);
}
/*	function definition for J_GETSCREENWIDTH	*/

static void L84()
{	object *old_base=vs_base;
	int x;
	check_arg(0);
	x=
	j_getscreenwidth();
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=make_fixnum(x);
}
/*	function definition for J_GETHEIGHT	*/

static void L85()
{	object *old_base=vs_base;
	int x;
	check_arg(1);
	x=
	j_getheight(
	object_to_int(vs_base[0]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=make_fixnum(x);
}
/*	function definition for J_GETWIDTH	*/

static void L86()
{	object *old_base=vs_base;
	int x;
	check_arg(1);
	x=
	j_getwidth(
	object_to_int(vs_base[0]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=make_fixnum(x);
}
/*	function definition for J_GETINSETS	*/

static void L87()
{	object *old_base=vs_base;
	int x;
	check_arg(2);
	x=
	j_getinsets(
	object_to_int(vs_base[0]),
	object_to_int(vs_base[1]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=make_fixnum(x);
}
/*	function definition for J_GETLAYOUTID	*/

static void L88()
{	object *old_base=vs_base;
	int x;
	check_arg(1);
	x=
	j_getlayoutid(
	object_to_int(vs_base[0]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=make_fixnum(x);
}
/*	function definition for J_GETINHEIGHT	*/

static void L89()
{	object *old_base=vs_base;
	int x;
	check_arg(1);
	x=
	j_getinheight(
	object_to_int(vs_base[0]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=make_fixnum(x);
}
/*	function definition for J_GETINWIDTH	*/

static void L90()
{	object *old_base=vs_base;
	int x;
	check_arg(1);
	x=
	j_getinwidth(
	object_to_int(vs_base[0]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=make_fixnum(x);
}
/*	function definition for J_GETTEXT	*/

static void L91()
{	object *old_base=vs_base;
	char *x;
	check_arg(2);
	x=
	j_gettext(
	object_to_int(vs_base[0]),
	object_to_string(vs_base[1]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=make_simple_string(x);
}
/*	function definition for J_GETITEM	*/

static void L92()
{	object *old_base=vs_base;
	char *x;
	check_arg(3);
	x=
	j_getitem(
	object_to_int(vs_base[0]),
	object_to_int(vs_base[1]),
	object_to_string(vs_base[2]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=make_simple_string(x);
}
/*	function definition for J_GETITEMCOUNT	*/

static void L93()
{	object *old_base=vs_base;
	int x;
	check_arg(1);
	x=
	j_getitemcount(
	object_to_int(vs_base[0]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=make_fixnum(x);
}
/*	function definition for J_DELETE	*/

static void L94()
{	object *old_base=vs_base;
	check_arg(3);
	j_delete(
	object_to_int(vs_base[0]),
	object_to_int(vs_base[1]),
	object_to_int(vs_base[2]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=Cnil;
}
/*	function definition for J_REPLACETEXT	*/

static void L95()
{	object *old_base=vs_base;
	check_arg(4);
	j_replacetext(
	object_to_int(vs_base[0]),
	object_to_string(vs_base[1]),
	object_to_int(vs_base[2]),
	object_to_int(vs_base[3]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=Cnil;
}
/*	function definition for J_APPENDTEXT	*/

static void L96()
{	object *old_base=vs_base;
	check_arg(2);
	j_appendtext(
	object_to_int(vs_base[0]),
	object_to_string(vs_base[1]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=Cnil;
}
/*	function definition for J_INSERTTEXT	*/

static void L97()
{	object *old_base=vs_base;
	check_arg(3);
	j_inserttext(
	object_to_int(vs_base[0]),
	object_to_string(vs_base[1]),
	object_to_int(vs_base[2]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=Cnil;
}
/*	function definition for J_SETTEXT	*/

static void L98()
{	object *old_base=vs_base;
	check_arg(2);
	j_settext(
	object_to_int(vs_base[0]),
	object_to_string(vs_base[1]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=Cnil;
}
/*	function definition for J_SELECTALL	*/

static void L99()
{	object *old_base=vs_base;
	check_arg(1);
	j_selectall(
	object_to_int(vs_base[0]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=Cnil;
}
/*	function definition for J_SELECTTEXT	*/

static void L100()
{	object *old_base=vs_base;
	check_arg(3);
	j_selecttext(
	object_to_int(vs_base[0]),
	object_to_int(vs_base[1]),
	object_to_int(vs_base[2]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=Cnil;
}
/*	function definition for J_GETSELSTART	*/

static void L101()
{	object *old_base=vs_base;
	int x;
	check_arg(1);
	x=
	j_getselstart(
	object_to_int(vs_base[0]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=make_fixnum(x);
}
/*	function definition for J_GETSELEND	*/

static void L102()
{	object *old_base=vs_base;
	int x;
	check_arg(1);
	x=
	j_getselend(
	object_to_int(vs_base[0]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=make_fixnum(x);
}
/*	function definition for J_GETSELTEXT	*/

static void L103()
{	object *old_base=vs_base;
	char *x;
	check_arg(2);
	x=
	j_getseltext(
	object_to_int(vs_base[0]),
	object_to_string(vs_base[1]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=make_simple_string(x);
}
/*	function definition for J_GETCURPOS	*/

static void L104()
{	object *old_base=vs_base;
	int x;
	check_arg(1);
	x=
	j_getcurpos(
	object_to_int(vs_base[0]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=make_fixnum(x);
}
/*	function definition for J_SETCURPOS	*/

static void L105()
{	object *old_base=vs_base;
	check_arg(2);
	j_setcurpos(
	object_to_int(vs_base[0]),
	object_to_int(vs_base[1]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=Cnil;
}
/*	function definition for J_SETECHOCHAR	*/

static void L106()
{	object *old_base=vs_base;
	check_arg(2);
	j_setechochar(
	object_to_int(vs_base[0]),
	object_to_char(vs_base[1]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=Cnil;
}
/*	function definition for J_SETEDITABLE	*/

static void L107()
{	object *old_base=vs_base;
	check_arg(2);
	j_seteditable(
	object_to_int(vs_base[0]),
	object_to_int(vs_base[1]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=Cnil;
}
/*	function definition for J_SETSHORTCUT	*/

static void L108()
{	object *old_base=vs_base;
	check_arg(2);
	j_setshortcut(
	object_to_int(vs_base[0]),
	object_to_char(vs_base[1]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=Cnil;
}
/*	function definition for J_QUIT	*/

static void L109()
{	object *old_base=vs_base;
	check_arg(0);
	j_quit();
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=Cnil;
}
/*	function definition for J_KILL	*/

static void L110()
{	object *old_base=vs_base;
	check_arg(0);
	j_kill();
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=Cnil;
}
/*	function definition for J_SETSIZE	*/

static void L111()
{	object *old_base=vs_base;
	check_arg(3);
	j_setsize(
	object_to_int(vs_base[0]),
	object_to_int(vs_base[1]),
	object_to_int(vs_base[2]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=Cnil;
}
/*	function definition for J_GETACTION	*/

static void L112()
{	object *old_base=vs_base;
	int x;
	check_arg(0);
	x=
	j_getaction();
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=make_fixnum(x);
}
/*	function definition for J_NEXTACTION	*/

static void L113()
{	object *old_base=vs_base;
	int x;
	check_arg(0);
	x=
	j_nextaction();
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=make_fixnum(x);
}
/*	function definition for J_SHOW	*/

static void L114()
{	object *old_base=vs_base;
	check_arg(1);
	j_show(
	object_to_int(vs_base[0]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=Cnil;
}
/*	function definition for J_SHOWPOPUP	*/

static void L115()
{	object *old_base=vs_base;
	check_arg(3);
	j_showpopup(
	object_to_int(vs_base[0]),
	object_to_int(vs_base[1]),
	object_to_int(vs_base[2]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=Cnil;
}
/*	function definition for J_ADD	*/

static void L116()
{	object *old_base=vs_base;
	check_arg(2);
	j_add(
	object_to_int(vs_base[0]),
	object_to_int(vs_base[1]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=Cnil;
}
/*	function definition for J_RELEASE	*/

static void L117()
{	object *old_base=vs_base;
	check_arg(1);
	j_release(
	object_to_int(vs_base[0]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=Cnil;
}
/*	function definition for J_RELEASEALL	*/

static void L118()
{	object *old_base=vs_base;
	check_arg(1);
	j_releaseall(
	object_to_int(vs_base[0]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=Cnil;
}
/*	function definition for J_HIDE	*/

static void L119()
{	object *old_base=vs_base;
	check_arg(1);
	j_hide(
	object_to_int(vs_base[0]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=Cnil;
}
/*	function definition for J_DISPOSE	*/

static void L120()
{	object *old_base=vs_base;
	check_arg(1);
	j_dispose(
	object_to_int(vs_base[0]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=Cnil;
}
/*	function definition for J_SETPOS	*/

static void L121()
{	object *old_base=vs_base;
	check_arg(3);
	j_setpos(
	object_to_int(vs_base[0]),
	object_to_int(vs_base[1]),
	object_to_int(vs_base[2]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=Cnil;
}
/*	function definition for J_GETVIEWPORTHEIGHT	*/

static void L122()
{	object *old_base=vs_base;
	int x;
	check_arg(1);
	x=
	j_getviewportheight(
	object_to_int(vs_base[0]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=make_fixnum(x);
}
/*	function definition for J_GETVIEWPORTWIDTH	*/

static void L123()
{	object *old_base=vs_base;
	int x;
	check_arg(1);
	x=
	j_getviewportwidth(
	object_to_int(vs_base[0]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=make_fixnum(x);
}
/*	function definition for J_GETXPOS	*/

static void L124()
{	object *old_base=vs_base;
	int x;
	check_arg(1);
	x=
	j_getxpos(
	object_to_int(vs_base[0]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=make_fixnum(x);
}
/*	function definition for J_GETYPOS	*/

static void L125()
{	object *old_base=vs_base;
	int x;
	check_arg(1);
	x=
	j_getypos(
	object_to_int(vs_base[0]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=make_fixnum(x);
}
/*	function definition for J_GETPOS	*/

static void L126()
{	object *old_base=vs_base;
	check_arg(3);
	j_getpos(
	object_to_int(vs_base[0]),
	object_to_int(vs_base[1]),
	object_to_int(vs_base[2]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=Cnil;
}
/*	function definition for J_GETPARENTID	*/

static void L127()
{	object *old_base=vs_base;
	int x;
	check_arg(1);
	x=
	j_getparentid(
	object_to_int(vs_base[0]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=make_fixnum(x);
}
/*	function definition for J_SETFOCUS	*/

static void L128()
{	object *old_base=vs_base;
	check_arg(1);
	j_setfocus(
	object_to_int(vs_base[0]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=Cnil;
}
/*	function definition for J_HASFOCUS	*/

static void L129()
{	object *old_base=vs_base;
	int x;
	check_arg(1);
	x=
	j_hasfocus(
	object_to_int(vs_base[0]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=make_fixnum(x);
}
/*	function definition for J_GETSTRINGWIDTH	*/

static void L130()
{	object *old_base=vs_base;
	int x;
	check_arg(2);
	x=
	j_getstringwidth(
	object_to_int(vs_base[0]),
	object_to_string(vs_base[1]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=make_fixnum(x);
}
/*	function definition for J_GETFONTHEIGHT	*/

static void L131()
{	object *old_base=vs_base;
	int x;
	check_arg(1);
	x=
	j_getfontheight(
	object_to_int(vs_base[0]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=make_fixnum(x);
}
/*	function definition for J_GETFONTASCENT	*/

static void L132()
{	object *old_base=vs_base;
	int x;
	check_arg(1);
	x=
	j_getfontascent(
	object_to_int(vs_base[0]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=make_fixnum(x);
}
/*	function definition for J_KEYLISTENER	*/

static void L133()
{	object *old_base=vs_base;
	int x;
	check_arg(1);
	x=
	j_keylistener(
	object_to_int(vs_base[0]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=make_fixnum(x);
}
/*	function definition for J_GETKEYCODE	*/

static void L134()
{	object *old_base=vs_base;
	int x;
	check_arg(1);
	x=
	j_getkeycode(
	object_to_int(vs_base[0]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=make_fixnum(x);
}
/*	function definition for J_GETKEYCHAR	*/

static void L135()
{	object *old_base=vs_base;
	int x;
	check_arg(1);
	x=
	j_getkeychar(
	object_to_int(vs_base[0]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=make_fixnum(x);
}
/*	function definition for J_MOUSELISTENER	*/

static void L136()
{	object *old_base=vs_base;
	int x;
	check_arg(2);
	x=
	j_mouselistener(
	object_to_int(vs_base[0]),
	object_to_int(vs_base[1]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=make_fixnum(x);
}
/*	function definition for J_GETMOUSEX	*/

static void L137()
{	object *old_base=vs_base;
	int x;
	check_arg(1);
	x=
	j_getmousex(
	object_to_int(vs_base[0]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=make_fixnum(x);
}
/*	function definition for J_GETMOUSEY	*/

static void L138()
{	object *old_base=vs_base;
	int x;
	check_arg(1);
	x=
	j_getmousey(
	object_to_int(vs_base[0]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=make_fixnum(x);
}
/*	function definition for J_GETMOUSEPOS	*/

static void L139()
{	object *old_base=vs_base;
	check_arg(3);
	j_getmousepos(
	object_to_int(vs_base[0]),
	object_to_int(vs_base[1]),
	object_to_int(vs_base[2]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=Cnil;
}
/*	function definition for J_GETMOUSEBUTTON	*/

static void L140()
{	object *old_base=vs_base;
	int x;
	check_arg(1);
	x=
	j_getmousebutton(
	object_to_int(vs_base[0]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=make_fixnum(x);
}
/*	function definition for J_FOCUSLISTENER	*/

static void L141()
{	object *old_base=vs_base;
	int x;
	check_arg(1);
	x=
	j_focuslistener(
	object_to_int(vs_base[0]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=make_fixnum(x);
}
/*	function definition for J_COMPONENTLISTENER	*/

static void L142()
{	object *old_base=vs_base;
	int x;
	check_arg(2);
	x=
	j_componentlistener(
	object_to_int(vs_base[0]),
	object_to_int(vs_base[1]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=make_fixnum(x);
}
/*	function definition for J_WINDOWLISTENER	*/

static void L143()
{	object *old_base=vs_base;
	int x;
	check_arg(2);
	x=
	j_windowlistener(
	object_to_int(vs_base[0]),
	object_to_int(vs_base[1]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=make_fixnum(x);
}
/*	function definition for J_SETFLOWLAYOUT	*/

static void L144()
{	object *old_base=vs_base;
	check_arg(2);
	j_setflowlayout(
	object_to_int(vs_base[0]),
	object_to_int(vs_base[1]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=Cnil;
}
/*	function definition for J_SETBORDERLAYOUT	*/

static void L145()
{	object *old_base=vs_base;
	check_arg(1);
	j_setborderlayout(
	object_to_int(vs_base[0]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=Cnil;
}
/*	function definition for J_SETGRIDLAYOUT	*/

static void L146()
{	object *old_base=vs_base;
	check_arg(3);
	j_setgridlayout(
	object_to_int(vs_base[0]),
	object_to_int(vs_base[1]),
	object_to_int(vs_base[2]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=Cnil;
}
/*	function definition for J_SETFIXLAYOUT	*/

static void L147()
{	object *old_base=vs_base;
	check_arg(1);
	j_setfixlayout(
	object_to_int(vs_base[0]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=Cnil;
}
/*	function definition for J_SETNOLAYOUT	*/

static void L148()
{	object *old_base=vs_base;
	check_arg(1);
	j_setnolayout(
	object_to_int(vs_base[0]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=Cnil;
}
/*	function definition for J_SETBORDERPOS	*/

static void L149()
{	object *old_base=vs_base;
	check_arg(2);
	j_setborderpos(
	object_to_int(vs_base[0]),
	object_to_int(vs_base[1]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=Cnil;
}
/*	function definition for J_SETHGAP	*/

static void L150()
{	object *old_base=vs_base;
	check_arg(2);
	j_sethgap(
	object_to_int(vs_base[0]),
	object_to_int(vs_base[1]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=Cnil;
}
/*	function definition for J_SETVGAP	*/

static void L151()
{	object *old_base=vs_base;
	check_arg(2);
	j_setvgap(
	object_to_int(vs_base[0]),
	object_to_int(vs_base[1]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=Cnil;
}
/*	function definition for J_SETINSETS	*/

static void L152()
{	object *old_base=vs_base;
	check_arg(5);
	j_setinsets(
	object_to_int(vs_base[0]),
	object_to_int(vs_base[1]),
	object_to_int(vs_base[2]),
	object_to_int(vs_base[3]),
	object_to_int(vs_base[4]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=Cnil;
}
/*	function definition for J_SETALIGN	*/

static void L153()
{	object *old_base=vs_base;
	check_arg(2);
	j_setalign(
	object_to_int(vs_base[0]),
	object_to_int(vs_base[1]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=Cnil;
}
/*	function definition for J_SETFLOWFILL	*/

static void L154()
{	object *old_base=vs_base;
	check_arg(2);
	j_setflowfill(
	object_to_int(vs_base[0]),
	object_to_int(vs_base[1]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=Cnil;
}
/*	function definition for J_TRANSLATE	*/

static void L155()
{	object *old_base=vs_base;
	check_arg(3);
	j_translate(
	object_to_int(vs_base[0]),
	object_to_int(vs_base[1]),
	object_to_int(vs_base[2]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=Cnil;
}
/*	function definition for J_CLIPRECT	*/

static void L156()
{	object *old_base=vs_base;
	check_arg(5);
	j_cliprect(
	object_to_int(vs_base[0]),
	object_to_int(vs_base[1]),
	object_to_int(vs_base[2]),
	object_to_int(vs_base[3]),
	object_to_int(vs_base[4]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=Cnil;
}
/*	function definition for J_DRAWRECT	*/

static void L157()
{	object *old_base=vs_base;
	check_arg(5);
	j_drawrect(
	object_to_int(vs_base[0]),
	object_to_int(vs_base[1]),
	object_to_int(vs_base[2]),
	object_to_int(vs_base[3]),
	object_to_int(vs_base[4]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=Cnil;
}
/*	function definition for J_FILLRECT	*/

static void L158()
{	object *old_base=vs_base;
	check_arg(5);
	j_fillrect(
	object_to_int(vs_base[0]),
	object_to_int(vs_base[1]),
	object_to_int(vs_base[2]),
	object_to_int(vs_base[3]),
	object_to_int(vs_base[4]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=Cnil;
}
/*	function definition for J_DRAWROUNDRECT	*/

static void L159()
{	object *old_base=vs_base;
	check_arg(7);
	j_drawroundrect(
	object_to_int(vs_base[0]),
	object_to_int(vs_base[1]),
	object_to_int(vs_base[2]),
	object_to_int(vs_base[3]),
	object_to_int(vs_base[4]),
	object_to_int(vs_base[5]),
	object_to_int(vs_base[6]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=Cnil;
}
/*	function definition for J_FILLROUNDRECT	*/

static void L160()
{	object *old_base=vs_base;
	check_arg(7);
	j_fillroundrect(
	object_to_int(vs_base[0]),
	object_to_int(vs_base[1]),
	object_to_int(vs_base[2]),
	object_to_int(vs_base[3]),
	object_to_int(vs_base[4]),
	object_to_int(vs_base[5]),
	object_to_int(vs_base[6]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=Cnil;
}
/*	function definition for J_DRAWOVAL	*/

static void L161()
{	object *old_base=vs_base;
	check_arg(5);
	j_drawoval(
	object_to_int(vs_base[0]),
	object_to_int(vs_base[1]),
	object_to_int(vs_base[2]),
	object_to_int(vs_base[3]),
	object_to_int(vs_base[4]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=Cnil;
}
/*	function definition for J_FILLOVAL	*/

static void L162()
{	object *old_base=vs_base;
	check_arg(5);
	j_filloval(
	object_to_int(vs_base[0]),
	object_to_int(vs_base[1]),
	object_to_int(vs_base[2]),
	object_to_int(vs_base[3]),
	object_to_int(vs_base[4]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=Cnil;
}
/*	function definition for J_DRAWCIRCLE	*/

static void L163()
{	object *old_base=vs_base;
	check_arg(4);
	j_drawcircle(
	object_to_int(vs_base[0]),
	object_to_int(vs_base[1]),
	object_to_int(vs_base[2]),
	object_to_int(vs_base[3]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=Cnil;
}
/*	function definition for J_FILLCIRCLE	*/

static void L164()
{	object *old_base=vs_base;
	check_arg(4);
	j_fillcircle(
	object_to_int(vs_base[0]),
	object_to_int(vs_base[1]),
	object_to_int(vs_base[2]),
	object_to_int(vs_base[3]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=Cnil;
}
/*	function definition for J_DRAWARC	*/

static void L165()
{	object *old_base=vs_base;
	check_arg(7);
	j_drawarc(
	object_to_int(vs_base[0]),
	object_to_int(vs_base[1]),
	object_to_int(vs_base[2]),
	object_to_int(vs_base[3]),
	object_to_int(vs_base[4]),
	object_to_int(vs_base[5]),
	object_to_int(vs_base[6]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=Cnil;
}
/*	function definition for J_FILLARC	*/

static void L166()
{	object *old_base=vs_base;
	check_arg(7);
	j_fillarc(
	object_to_int(vs_base[0]),
	object_to_int(vs_base[1]),
	object_to_int(vs_base[2]),
	object_to_int(vs_base[3]),
	object_to_int(vs_base[4]),
	object_to_int(vs_base[5]),
	object_to_int(vs_base[6]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=Cnil;
}
/*	function definition for J_DRAWLINE	*/

static void L167()
{	object *old_base=vs_base;
	check_arg(5);
	j_drawline(
	object_to_int(vs_base[0]),
	object_to_int(vs_base[1]),
	object_to_int(vs_base[2]),
	object_to_int(vs_base[3]),
	object_to_int(vs_base[4]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=Cnil;
}
/*	function definition for J_DRAWPOLYLINE	*/

static void L168()
{	object *old_base=vs_base;
	check_arg(4);
	j_drawpolyline(
	object_to_int(vs_base[0]),
	object_to_int(vs_base[1]),
	object_to_int(vs_base[2]),
	object_to_int(vs_base[3]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=Cnil;
}
/*	function definition for J_DRAWPOLYGON	*/

static void L169()
{	object *old_base=vs_base;
	check_arg(4);
	j_drawpolygon(
	object_to_int(vs_base[0]),
	object_to_int(vs_base[1]),
	object_to_int(vs_base[2]),
	object_to_int(vs_base[3]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=Cnil;
}
/*	function definition for J_FILLPOLYGON	*/

static void L170()
{	object *old_base=vs_base;
	check_arg(4);
	j_fillpolygon(
	object_to_int(vs_base[0]),
	object_to_int(vs_base[1]),
	object_to_int(vs_base[2]),
	object_to_int(vs_base[3]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=Cnil;
}
/*	function definition for J_DRAWPIXEL	*/

static void L171()
{	object *old_base=vs_base;
	check_arg(3);
	j_drawpixel(
	object_to_int(vs_base[0]),
	object_to_int(vs_base[1]),
	object_to_int(vs_base[2]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=Cnil;
}
/*	function definition for J_DRAWSTRING	*/

static void L172()
{	object *old_base=vs_base;
	check_arg(4);
	j_drawstring(
	object_to_int(vs_base[0]),
	object_to_int(vs_base[1]),
	object_to_int(vs_base[2]),
	object_to_string(vs_base[3]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=Cnil;
}
/*	function definition for J_SETXOR	*/

static void L173()
{	object *old_base=vs_base;
	check_arg(2);
	j_setxor(
	object_to_int(vs_base[0]),
	object_to_int(vs_base[1]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=Cnil;
}
/*	function definition for J_GETIMAGE	*/

static void L174()
{	object *old_base=vs_base;
	int x;
	check_arg(1);
	x=
	j_getimage(
	object_to_int(vs_base[0]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=make_fixnum(x);
}
/*	function definition for J_GETIMAGESOURCE	*/

static void L175()
{	object *old_base=vs_base;
	check_arg(8);
	j_getimagesource(
	object_to_int(vs_base[0]),
	object_to_int(vs_base[1]),
	object_to_int(vs_base[2]),
	object_to_int(vs_base[3]),
	object_to_int(vs_base[4]),
	object_to_int(vs_base[5]),
	object_to_int(vs_base[6]),
	object_to_int(vs_base[7]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=Cnil;
}
/*	function definition for J_DRAWIMAGESOURCE	*/

static void L176()
{	object *old_base=vs_base;
	check_arg(8);
	j_drawimagesource(
	object_to_int(vs_base[0]),
	object_to_int(vs_base[1]),
	object_to_int(vs_base[2]),
	object_to_int(vs_base[3]),
	object_to_int(vs_base[4]),
	object_to_int(vs_base[5]),
	object_to_int(vs_base[6]),
	object_to_int(vs_base[7]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=Cnil;
}
/*	function definition for J_GETSCALEDIMAGE	*/

static void L177()
{	object *old_base=vs_base;
	int x;
	check_arg(7);
	x=
	j_getscaledimage(
	object_to_int(vs_base[0]),
	object_to_int(vs_base[1]),
	object_to_int(vs_base[2]),
	object_to_int(vs_base[3]),
	object_to_int(vs_base[4]),
	object_to_int(vs_base[5]),
	object_to_int(vs_base[6]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=make_fixnum(x);
}
/*	function definition for J_DRAWIMAGE	*/

static void L178()
{	object *old_base=vs_base;
	check_arg(4);
	j_drawimage(
	object_to_int(vs_base[0]),
	object_to_int(vs_base[1]),
	object_to_int(vs_base[2]),
	object_to_int(vs_base[3]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=Cnil;
}
/*	function definition for J_DRAWSCALEDIMAGE	*/

static void L179()
{	object *old_base=vs_base;
	check_arg(10);
	j_drawscaledimage(
	object_to_int(vs_base[0]),
	object_to_int(vs_base[1]),
	object_to_int(vs_base[2]),
	object_to_int(vs_base[3]),
	object_to_int(vs_base[4]),
	object_to_int(vs_base[5]),
	object_to_int(vs_base[6]),
	object_to_int(vs_base[7]),
	object_to_int(vs_base[8]),
	object_to_int(vs_base[9]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=Cnil;
}
/*	function definition for J_SETCOLOR	*/

static void L180()
{	object *old_base=vs_base;
	check_arg(4);
	j_setcolor(
	object_to_int(vs_base[0]),
	object_to_int(vs_base[1]),
	object_to_int(vs_base[2]),
	object_to_int(vs_base[3]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=Cnil;
}
/*	function definition for J_SETCOLORBG	*/

static void L181()
{	object *old_base=vs_base;
	check_arg(4);
	j_setcolorbg(
	object_to_int(vs_base[0]),
	object_to_int(vs_base[1]),
	object_to_int(vs_base[2]),
	object_to_int(vs_base[3]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=Cnil;
}
/*	function definition for J_SETNAMEDCOLOR	*/

static void L182()
{	object *old_base=vs_base;
	check_arg(2);
	j_setnamedcolor(
	object_to_int(vs_base[0]),
	object_to_int(vs_base[1]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=Cnil;
}
/*	function definition for J_SETNAMEDCOLORBG	*/

static void L183()
{	object *old_base=vs_base;
	check_arg(2);
	j_setnamedcolorbg(
	object_to_int(vs_base[0]),
	object_to_int(vs_base[1]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=Cnil;
}
/*	function definition for J_LOADIMAGE	*/

static void L184()
{	object *old_base=vs_base;
	int x;
	check_arg(1);
	x=
	j_loadimage(
	object_to_string(vs_base[0]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=make_fixnum(x);
}
/*	function definition for J_SAVEIMAGE	*/

static void L185()
{	object *old_base=vs_base;
	int x;
	check_arg(3);
	x=
	j_saveimage(
	object_to_int(vs_base[0]),
	object_to_string(vs_base[1]),
	object_to_int(vs_base[2]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=make_fixnum(x);
}
/*	function definition for J_SYNC	*/

static void L186()
{	object *old_base=vs_base;
	check_arg(0);
	j_sync();
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=Cnil;
}
/*	function definition for J_BEEP	*/

static void L187()
{	object *old_base=vs_base;
	check_arg(0);
	j_beep();
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=Cnil;
}
/*	function definition for J_RANDOM	*/

static void L188()
{	object *old_base=vs_base;
	int x;
	check_arg(0);
	x=
	j_random();
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=make_fixnum(x);
}
/*	function definition for J_SLEEP	*/

static void L189()
{	object *old_base=vs_base;
	check_arg(1);
	j_sleep(
	object_to_int(vs_base[0]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=Cnil;
}

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

