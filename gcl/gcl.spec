Summary: GCL compiler
Name: gcl
Version: 2.5.3
Release: 1
Group: Development
Source: ftp://ftp.gnu.org/pub/gnu/gcl/gcl-%{version}.tar.gz
Copyright: GPL
Buildroot: %{_tmppath}/%{name}-%{version}-%{release}-root
BuildRequires: texinfo
BuildRequires: readline-devel

%description
GCL compiler.

%prep
%setup -q

%build
%configure --enable-readline
make

%install
rm -rf $RPM_BUILD_ROOT
make install DESTDIR=$RPM_BUILD_ROOT INFO_DIR=%{_infodir}
# installation is a bit dirty, clean up.
rm -rf $RPM_BUILD_ROOT/%{_infodir}.. || true
rm -f $RPM_BUILD_ROOT/%{_infodir}dir || true
rm -rf $RPM_BUILD_ROOT/%{_libdir}/gcl-2.5.3/info

%clean
rm -r $RPM_BUILD_ROOT

%files 
%defattr(-,root,root)
%{_libdir}/%{name}-%{version}/unixport/saved_gcl
%{_libdir}/%{name}-%{version}/unixport/init_gcl.lsp
%{_libdir}/%{name}-%{version}/unixport/libgcl.a
%{_libdir}/%{name}-%{version}/unixport/libgclp.a
%{_libdir}/%{name}-%{version}/lsp/gprof.lsp
%{_libdir}/%{name}-%{version}/lsp/info.o
%{_libdir}/%{name}-%{version}/lsp/readline.o
%{_libdir}/%{name}-%{version}/lsp/profile.lsp
%{_libdir}/%{name}-%{version}/lsp/export.lsp
%{_libdir}/%{name}-%{version}/lsp/autoload.lsp
%{_libdir}/%{name}-%{version}/lsp/auto_new.lsp
%{_libdir}/%{name}-%{version}/cmpnew/cmpmain.lsp
%{_libdir}/%{name}-%{version}/cmpnew/cmpopt.lsp
%{_libdir}/%{name}-%{version}/cmpnew/lfun_list.lsp
%{_libdir}/%{name}-%{version}/cmpnew/collectfn.o
%{_libdir}/%{name}-%{version}/h/cmpinclude.h
%{_libdir}/%{name}-%{version}/gcl-tk/tk-package.lsp
%{_libdir}/%{name}-%{version}/gcl-tk/decode.tcl
%{_libdir}/%{name}-%{version}/gcl-tk/demos/gc-monitor.lisp
%{_libdir}/%{name}-%{version}/gcl-tk/demos/mkBasic.lisp
%{_libdir}/%{name}-%{version}/gcl-tk/demos/mkCanvText.lisp
%{_libdir}/%{name}-%{version}/gcl-tk/demos/mkdialog.lisp
%{_libdir}/%{name}-%{version}/gcl-tk/demos/mkEntry2.lisp
%{_libdir}/%{name}-%{version}/gcl-tk/demos/mkEntry.lisp
%{_libdir}/%{name}-%{version}/gcl-tk/demos/mkForm.lisp
%{_libdir}/%{name}-%{version}/gcl-tk/demos/mkHScale.lisp
%{_libdir}/%{name}-%{version}/gcl-tk/demos/mkItems.lisp
%{_libdir}/%{name}-%{version}/gcl-tk/demos/mkLabel.lisp
%{_libdir}/%{name}-%{version}/gcl-tk/demos/mkListbox.lisp
%{_libdir}/%{name}-%{version}/gcl-tk/demos/mkPlot.lisp
%{_libdir}/%{name}-%{version}/gcl-tk/demos/mkRadio.lisp
%{_libdir}/%{name}-%{version}/gcl-tk/demos/mkRuler.lisp
%{_libdir}/%{name}-%{version}/gcl-tk/demos/mkSearch.lisp
%{_libdir}/%{name}-%{version}/gcl-tk/demos/mkStyles.lisp
%{_libdir}/%{name}-%{version}/gcl-tk/demos/mkTextBind.lisp
%{_libdir}/%{name}-%{version}/gcl-tk/demos/mkVScale.lisp
%{_libdir}/%{name}-%{version}/gcl-tk/demos/nqthm-stack.lisp
%{_libdir}/%{name}-%{version}/gcl-tk/demos/showVars.lisp
%{_libdir}/%{name}-%{version}/gcl-tk/demos/widget.lisp
%{_libdir}/%{name}-%{version}/gcl-tk/gcl.tcl
%{_bindir}/gcl
%{_datadir}/emacs/21.2/site-lisp/add-default.el
%{_datadir}/emacs/21.2/site-lisp/ansi-doc.el
%{_datadir}/emacs/21.2/site-lisp/dbl.el
%{_datadir}/emacs/21.2/site-lisp/doc-to-texi.el
%{_datadir}/emacs/21.2/site-lisp/gcl.el
%{_datadir}/emacs/21.2/site-lisp/man1-to-texi.el
%{_datadir}/emacs/21.2/site-lisp/smart-complete.el
%{_datadir}/emacs/21.2/site-lisp/sshell.el
%{_datadir}/emacs/21.2/site-lisp/default.el
%{_infodir}/gcl*

%changelog
* Fri Jul 18 2003  Pawel Salek <pawsa@theochem.kth.se> 2.5.3-1
- Initial setup.

