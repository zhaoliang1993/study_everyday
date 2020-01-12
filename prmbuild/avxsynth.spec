#Copyright (c) 2020 EulerOS zhaoliang<zhaoliang45@huawei.com>
Name:		
Version:	4.0
%define rel marguerite
Release:	0.%{rel}
Summary:	Linux Port of Avisynth

Group:		
License:	GPL:
URL:		
Source0:	

#BuildRequires:	build-essential checkinstall git pkg-config yasm autoconf automake libtool
BuildRequires: build-essential
BuildRequires:	pkg-config
BuildRequires:	yasm
BuildRequires:	autoconf
BuildRequires:	automake
BuildRequires:	libtool
BuildRequires:	MPlayer
BuildRequires:	cairo-devel
BuildRequires:	pango-devel
#等等

Requires:	

%description


%prep
%setup -q


%build
%configure
make %{?_smp_mflags}


%install
make install DESTDIR=%{buildroot}


%files
%doc



%changelog

