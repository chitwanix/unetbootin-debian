/*
distrover.cpp from UNetbootin <http://unetbootin.sourceforge.net>
Copyright (C) 2007-2008 Geza Kovacs <geza0kovacs@gmail.com>

This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 2 of the License, or (at your option) any later version.

This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License at <http://www.gnu.org/licenses/> for more details.
*/

#ifndef ubuntuverlist
#define ubuntuverlist \
"8.04_NetInstall" << "8.04_NetInstall_x64" << "8.04_HdMedia" << "8.04_HdMedia_x64" << "8.04_Live" << "8.04_Live_x64" << \
"9.10_NetInstall" << "9.10_NetInstall_x64" << "9.10_HdMedia" << "9.10_HdMedia_x64" << "9.10_Live" << "9.10_Live_x64" << \
"10.04_NetInstall" << "10.04_NetInstall_x64" << "10.04_HdMedia" << "10.04_HdMedia_x64" << "10.04_Live" << "10.04_Live_x64" << \
"10.10_NetInstall" << "10.10_NetInstall_x64" << "10.10_HdMedia" << "10.10_HdMedia_x64" << "10.10_Live" << "10.10_Live_x64" << \
"11.04_NetInstall" << "11.04_NetInstall_x64" << "11.04_HdMedia" << "11.04_HdMedia_x64" << "11.04_Live" << "11.04_Live_x64" << \
"11.10_NetInstall" << "11.10_NetInstall_x64" << "11.10_HdMedia" << "11.10_HdMedia_x64" << "11.10_Live" << "11.10_Live_x64" << \
"Daily_Live" << "Daily_Live_x64"
#endif

distroselect->addItem(unetbootin::tr("== Select Distribution =="), (QStringList() << unetbootin::tr("== Select Version ==") <<
unetbootin::tr("Welcome to <a href=\"http://unetbootin.sourceforge.net/\">UNetbootin</a>, the Universal Netboot Installer. Usage:"
	"<ol><li>Select a distribution and version to download from the list above, or manually specify files to load below.</li>"
	"<li>Select an installation type, and press OK to begin installing.</li></ol>") <<
unetbootin::tr("== Select Version ==")));
distroselect->addItem("Arch Linux", (QStringList() << "core" <<
unetbootin::tr("<b>Homepage:</b> <a href=\"http://www.archlinux.org/\">http://www.archlinux.org</a><br/>"
	"<b>Description:</b> Arch Linux is a lightweight distribution optimized for speed and flexibility.<br/>"
	"<b>Install Notes:</b> The default version allows for installation over the internet (FTP).") <<
"core" << "core_x64" << "netinstall" << "netinstall_x64"));
distroselect->addItem("BackTrack", (QStringList() << "5R1-GNOME" <<
unetbootin::tr("<b>Homepage:</b> <a href=\"http://www.backtrack-linux.org/\">http://www.backtrack-linux.org/</a><br/>"
	"<b>Description:</b> BackTrack is a distribution focused on network analysis and penetration testing.<br/>"
	"<b>Install Notes:</b> BackTrack is booted and run in live mode; no installation is required to use it.") <<
"5R1-GNOME" << "5R1-GNOME_x64" << "5R1-KDE" << "5R1-KDE_x64"));
distroselect->addItem("CentOS", (QStringList() << "5" <<
unetbootin::tr("<b>Homepage:</b> <a href=\"http://www.centos.org/\">http://www.centos.org</a><br/>"
	"<b>Description:</b> CentOS is a free Red Hat Enterprise Linux clone.<br/>"
	"<b>Install Notes:</b> The default version allows for both installation over the internet (FTP), or offline installation using pre-downloaded installation ISO files.") <<
"4" << "4_x64" << "5" << "5_x64"));
distroselect->addItem("CloneZilla", (QStringList() << "1.1.0-8" <<
unetbootin::tr("<b>Homepage:</b> <a href=\"http://clonezilla.org/\">http://clonezilla.org/</a><br/>"
	"<b>Description:</b> CloneZilla is a distribution used for disk backup and imaging.<br/>"
	"<b>Install Notes:</b> CloneZilla is booted and run in live mode; no installation is required to use it.") <<
"1.1.0-8"));
distroselect->addItem("Damn Small Linux", (QStringList() << "Latest_Live" <<
unetbootin::tr("<b>Homepage:</b> <a href=\"http://damnsmalllinux.org/\">http://damnsmalllinux.org</a><br/>"
	"<b>Description:</b> Damn Small Linux is a minimalist distribution designed for older computers.<br/>"
	"<b>Install Notes:</b> The Live version loads the entire system into RAM and boots from memory, so installation is not required but optional.") <<
"Latest_Live"));
distroselect->addItem("Debian", (QStringList() << "Stable_NetInstall" <<
unetbootin::tr("<b>Homepage:</b> <a href=\"http://www.debian.org/\">http://www.debian.org</a><br/>"
	"<b>Description:</b> Debian is a community-developed Linux distribution that supports a wide variety of architectures and offers a large repository of packages.<br/>"
	"<b>Install Notes:</b> The NetInstall version allows for installation over FTP. If you would like to use a pre-downloaded install iso, use the HdMedia option, and then place the install iso file on the root directory of your hard drive or USB drive") <<
"Stable_NetInstall" << "Stable_NetInstall_x64" << "Stable_HdMedia" << "Stable_HdMedia_x64" << "Testing_NetInstall" << "Testing_NetInstall_x64" << "Testing_HdMedia" << "Testing_HdMedia_x64" << "Unstable_NetInstall" << "Unstable_NetInstall_x64" << "Unstable_HdMedia" << "Unstable_HdMedia_x64"));
//	"Stable_NetInstall" << "Stable_NetInstall_x64" << "Stable_Live" << "Testing_NetInstall" << "Testing_NetInstall_x64" << "Testing_Live" << "Unstable_NetInstall" << "Unstable_NetInstall_x64" << "Unstable_Live"));
distroselect->addItem("Dreamlinux", (QStringList() << "Latest_Live" <<
unetbootin::tr("<b>Homepage:</b> <a href=\"http://www.dreamlinux.com.br/\">http://www.dreamlinux.com.br</a><br/>"
	"<b>Description:</b> Dreamlinux is a user-friendly Debian-based distribution.<br/>"
	"<b>Install Notes:</b> The Live version allows for booting in Live mode, from which the installer can optionally be launched.") <<
"Latest_Live"));
distroselect->addItem("Dr.Web AntiVirus", (QStringList() << "Latest_Live" <<
unetbootin::tr("<b>Homepage:</b> <a href=\"http://www.freedrweb.com/livecd\">http://www.freedrweb.com/livecd</a><br/>"
	"<b>Description:</b> Dr.Web AntiVirus is an anti-virus emergency kit to restore a system that broke due to malware.<br/>"
	"<b>Install Notes:</b> The Live version allows for booting in Live mode, from which malware scans can be launched.") <<
"Latest_Live"));
distroselect->addItem("Elive", (QStringList() << "Stable_Live" <<
unetbootin::tr("<b>Homepage:</b> <a href=\"http://www.elivecd.org/\">http://www.elivecd.org</a><br/>"
	"<b>Description:</b> Elive is a Debian-based distribution featuring the Enlightenment window manager.<br/>"
	"<b>Install Notes:</b> The Live version allows for booting in Live mode, from which the installer can optionally be launched.") <<
"Stable_Live"));
distroselect->addItem("Fedora", (QStringList() << "15_Live" <<
unetbootin::tr("<b>Homepage:</b> <a href=\"http://fedoraproject.org/\">http://fedoraproject.org</a><br/>"
	"<b>Description:</b> Fedora is a Red Hat sponsored community distribution which showcases the latest cutting-edge free/open-source software.<br/>"
	"<b>Install Notes:</b> The Live version allows for booting in Live mode, from which the installer can optionally be launched. The NetInstall version allows for both installation over the internet (FTP), or offline installation using pre-downloaded installation ISO files.") <<
	"13_NetInstall" << "13_NetInstall_x64" << "13_Live" << "13_Live_x64" << "14_NetInstall" << "14_NetInstall_x64" << "14_Live" << "14_Live_x64" << "15_NetInstall" << "15_NetInstall_x64" << "15_Live" << "15_Live_x64" << "Rawhide_NetInstall" << "Rawhide_NetInstall_x64"));
distroselect->addItem("FreeBSD", (QStringList() << "8.0" <<
unetbootin::tr("<b>Homepage:</b> <a href=\"http://www.freebsd.org/\">http://www.freebsd.org</a><br/>"
	"<b>Description:</b> FreeBSD is a general-purpose Unix-like operating system designed for scalability and performance.<br/>"
	"<b>Install Notes:</b> The default version allows for both installation over the internet (FTP), or offline installation using pre-downloaded installation ISO files.") <<
"6.3" << "6.3_x64" << "7.0" << "7.0_x64" << "7.2" << "7.2_x64" << "8.0" << "8.0_x64"));
distroselect->addItem("FreeDOS", (QStringList() << "1.0" <<
unetbootin::tr("<b>Homepage:</b> <a href=\"http://www.freedos.org/\">http://www.freedos.org</a><br/>"
	"<b>Description:</b> FreeDOS is a free MS-DOS compatible operating system.<br/>"
	"<b>Install Notes:</b> See the <a href=\"http://fd-doc.sourceforge.net/wiki/index.php?n=FdDocEn.FdInstall\">manual</a> for installation details.") <<
"1.0"));
distroselect->addItem("FreeNAS", (QStringList() << "0.7.4919" <<
unetbootin::tr("<b>Homepage:</b> <a href=\"http://freenas.org/\">http://www.freenas.org</a><br/>"
	"<b>Description:</b> FreeNAS is an embedded open source NAS (Network-Attached Storage) distribution based on FreeBSD.<br/>"
	"<b>Install Notes:</b> The LiveCD version creates a RAM drive for FreeNAS, and uses a FAT formatted floppy disk or USB key for saving the configuration file. The embedded version allows installation to hard disk.") <<
"0.7.1.5024_Live" << "0.7.1.4997_Live_x64"));
distroselect->addItem("Frugalware", (QStringList() << "Stable" <<
unetbootin::tr("<b>Homepage:</b> <a href=\"http://frugalware.org/\">http://frugalware.org</a><br/>"
	"<b>Description:</b> Frugalware is a general-purpose Slackware-based distro for advanced users.<br/>"
	"<b>Install Notes:</b> The default option allows for both installation over the internet (FTP), or offline installation using pre-downloaded installation ISO files.") <<
"Stable" << "Stable_x64" << "Testing" << "Testing_x64" << "Current" << "Current_x64"));
//distroselect->addItem("F-Secure Rescue CD", (QStringList() << "Latest_Live" <<
//unetbootin::tr("<b>Homepage:</b> <a href=\"http://www.f-secure.com/linux-weblog/\">http://www.f-secure.com/linux-weblog/</a><br/>"
//	"<b>Description:</b> F-Secure Rescue CD detects and removes malware from your Windows installation.<br/>"
//	"<b>Install Notes:</b> The Live version allows for booting in Live mode, from which malware scans can be launched.") <<
//                                             "Latest_Live"));
distroselect->addItem("GeeXboX", (QStringList() << "2.0-i386" <<
unetbootin::tr("<b>Homepage:</b> <a href=\"http://www.geexbox.org/\">http://www.geexbox.org</a><br/>"
               "<b>Description:</b> GeeXboX is an Embedded Linux Media Center Distribution.<br/>") << "2.0-i386" << "2.0-x86_64"));
//distroselect->addItem("Gentoo", (QStringList() << "2008.0_Live" <<
//unetbootin::tr("<b>Homepage:</b> <a href=\"http://www.gentoo.org/\">http://www.gentoo.org</a><br/>"
//	"<b>Description:</b> Gentoo is a flexible source-based distribution designed for advanced users.<br/>"
//	"<b>Install Notes:</b> The Live version allows for booting in Live mode, from which the installer can optionally be launched.") <<
//"2007.0_Live" << "2007.0_Live_x64" << "2008.0_Live" << "2008.0_x64_Live"));
//	distroselect->addItem("GAG", (QStringList() << "4.9" <<
//	tr("<b>Homepage:</b> <a href=\"http://gag.sourceforge.net/\">http://gag.sourceforge.net</a><br/>"
//		"<b>Description:</b> GAG is a user-friendly graphical boot manager.<br/>"
//		"<b>Install Notes:</b> GAG simply boots and runs; no installation is required to use it.") <<
//	"4.9"));
distroselect->addItem("gNewSense", (QStringList() << "Latest_Live" <<
unetbootin::tr("<b>Homepage:</b> <a href=\"http://www.gnewsense.org/\">http://www.gnewsense.org</a><br/>"
	"<b>Description:</b> gNewSense is an FSF-endorsed distribution based on Ubuntu with all non-free components removed.<br/>"
	"<b>Install Notes:</b> The Live version allows for booting in Live mode, from which the installer can optionally be launched.") <<
"Latest_Live"));
distroselect->addItem("Gujin", (QStringList() << "2.4" <<
unetbootin::tr("<b>Homepage:</b> <a href=\"http://gujin.sourceforge.net/\">http://gujin.sourceforge.net</a><br/>"
	"<b>Description:</b> Gujin is a graphical boot manager which can bootstrap various volumes and files.<br/>"
	"<b>Install Notes:</b> Gujin simply boots and runs; no installation is required to use it.") <<
"2.4"));
distroselect->addItem("Kaspersky Rescue Disk", (QStringList() << "10_Live" <<
unetbootin::tr("<b>Homepage:</b> <a href=\"http://ftp.kaspersky.com/devbuilds/RescueDisk/\">http://ftp.kaspersky.com/devbuilds/RescueDisk/</a><br/>"
	"<b>Description:</b> Kaspersky Rescue Disk detects and removes malware from your Windows installation.<br/>"
	"<b>Install Notes:</b> The Live version allows for booting in Live mode, from which malware scans can be launched.") <<
"10_Live" << "8_Live"));
	distroselect->addItem("Kubuntu", (QStringList() << "10.04_Live" <<
unetbootin::tr("<b>Homepage:</b> <a href=\"http://www.kubuntu.org/\">http://www.kubuntu.org</a><br/>"
	"<b>Description:</b> Kubuntu is an official Ubuntu derivative featuring the KDE desktop.<br/>"
	"<b>Install Notes:</b> The Live version allows for booting in Live mode, from which the installer can optionally be launched. The NetInstall version allows for installation over FTP, and can install Kubuntu and other official Ubuntu derivatives. If you would like to use a pre-downloaded alternate (not desktop) install iso, use the HdMedia option, and then place the alternate install iso file on the root directory of your hard drive or USB drive") <<
ubuntuverlist));
	distroselect->addItem("LinuxConsole", (QStringList() << "1.0.2009-cd" <<
unetbootin::tr("<b>Homepage:</b> <a href=\"http://linuxconsole.org/\">http://linuxconsole.org</a><br/>"
 "<b>Description:</b> LinuxConsole is a desktop distro to play games, easy to install, easy to use and fast to boot .<br/>"
 "<b>Install Notes:</b> The 1.0.2009 is latest 1.0 release.") <<
 "1.0.2009-cd"));
	distroselect->addItem("Linux Mint", (QStringList() << "10_Live" <<
unetbootin::tr("<b>Homepage:</b> <a href=\"http://linuxmint.com/\">http://linuxmint.com</a><br/>"
	"<b>Description:</b> Linux Mint is a user-friendly Ubuntu-based distribution which includes additional proprietary codecs and other software by default.<br/>"
	"<b>Install Notes:</b> The Live version allows for booting in Live mode, from which the installer can optionally be launched.") <<
	"3.1_Live" << "4.0_Live" << "5_Live" << "5_Live_x64" << "6_Live" << "6_Live_x64" << "7_Live" << "7_Live_x64" << "8_Live" << "8_Live_x64" << "9_Live" << "9_Live_x64" << "10_Live" << "10_Live_x64"));
distroselect->addItem("Mandriva", (QStringList() << "2008.1_NetInstall" <<
unetbootin::tr("<b>Homepage:</b> <a href=\"http://www.mandriva.com/\">http://www.mandriva.com/</a><br/>"
	"<b>Description:</b> Mandriva is a user-friendly distro formerly known as Mandrake Linux.<br/>"
	"<b>Install Notes:</b> The Live version allows for booting in Live mode, from which the installer can optionally be launched. The NetInstall version allows for installation over the internet (FTP) or via pre-downloaded <a href=\"http://www.mandriva.com/en/download\">\"Free\" iso image files</a>.") <<
"2008.0_NetInstall" << "2008.0_NetInstall_x64" << "2008.1_NetInstall" << "2008.1_NetInstall_x64"));
distroselect->addItem("MEPIS", (QStringList() << "SimplyMEPIS" <<
unetbootin::tr("<b>Homepage:</b> <a href=\"http://www.mepis.org/\">http://www.mepis.org</a><br/>"
	"<b>Description:</b> MEPIS is a Debian-based distribution. SimplyMEPIS is a user-friendly version based on KDE, while AntiX is a lightweight version for older computers.<br/>"
	"<b>Install Notes:</b> MEPIS supports booting in Live mode, from which the installer can optionally be launched.") <<
	"SimplyMEPIS" << "SimplyMEPIS_x64" << "AntiX"));
distroselect->addItem("NetbootCD", (QStringList() << "Latest" <<
unetbootin::tr("<b>Homepage:</b> <a href=\"http://netbootcd.tuxfamily.org/\">http://netbootcd.tuxfamily.org</a><br/>"
	"<b>Description:</b> NetbootCD is a small boot CD that downloads and boots network-based installers for other distributions.<br/>"
	"<b>Install Notes:</b> NetbootCD boots and runs in live mode.") <<
"Latest"));
//distroselect->addItem("NetBSD", (QStringList() << "4.0" <<
//unetbootin::tr("<b>Homepage:</b> <a href=\"http://www.netbsd.org/\">http://www.netbsd.org</a><br/>"
//	"<b>Description:</b> NetBSD is a Unix-like operating system which focuses on portability.<br/>"
//	"<b>Install Notes:</b>The default version allows for both installation over the internet (FTP), or using pre-downloaded installation ISO files.") <<
//"4.0"));
distroselect->addItem("NimbleX", (QStringList() << "Latest_Live" <<
unetbootin::tr("<b>Homepage:</b> <a href=\"http://www.nimblex.net/\">http://www.nimblex.net</a><br/>"
	"<b>Description:</b> NimbleX is a small, versatile Slackware-based distribution. It is built using the linux-live scripts, and features the KDE desktop. It can be booted from CD or flash memory (USB pens or MP3 players), and can easily be customized and extended.<br/>"
	"<b>Install Notes:</b> NimbleX boots in Live mode.") <<
"Latest_Live"));
distroselect->addItem("NTPasswd", (QStringList() << "2011.05.11" <<
unetbootin::tr("<b>Homepage:</b> <a href=\"http://pogostick.net/~pnh/ntpasswd/\">http://pogostick.net/~pnh/ntpasswd/</a><br/>"
	"<b>Description:</b> The Offline NT Password and Registry Editor can reset Windows passwords and edit the registry on Windows 2000-Vista.<br/>"
	"<b>Install Notes:</b> NTPasswd is booted and run in live mode; no installation is required to use it.") <<
"2008.05.26" << "2011.05.11"));
	distroselect->addItem("openSUSE", (QStringList() << "11.1" <<
unetbootin::tr("<b>Homepage:</b> <a href=\"http://www.opensuse.org/\">http://www.opensuse.org</a><br/>"
	"<b>Description:</b> openSUSE is a user-friendly Novell sponsored distribution.<br/>"
	"<b>Install Notes:</b> The default version allows for both installation over the internet (FTP), or offline installation using pre-downloaded installation ISO files.") <<
	"11.1" << "11.1_x64" << "Factory" << "Factory_x64"));
distroselect->addItem("Ophcrack", (QStringList() << "XP-LiveCD-2.0" <<
unetbootin::tr("<b>Homepage:</b> <a href=\"http://ophcrack.sourceforge.net/\">http://ophcrack.sourceforge.net</a><br/>"
	"<b>Description:</b> Ophcrack can crack Windows passwords.<br/>"
	"<b>Install Notes:</b> Ophcrack is booted and run in live mode; no installation is required to use it.") <<
"XP-LiveCD-2.0" << "Vista-LiveCD-2.0"));
distroselect->addItem("Parted Magic", (QStringList() << "Latest_Live" <<
unetbootin::tr("<b>Homepage:</b> <a href=\"http://partedmagic.com/\">http://partedmagic.com</a><br/>"
	"<b>Description:</b> Parted Magic includes the GParted partition manager and other system utilities which can resize, copy, backup, and manipulate disk partitions.<br/>"
	"<b>Install Notes:</b> Parted Magic is booted and run in live mode; no installation is required to use it.") <<
"2.1_Live" << "Latest_Live" << "Latest_Live_x64"));
//distroselect->addItem("PCLinuxOS", (QStringList() << "KDE 2010" <<
//unetbootin::tr("<b>Homepage:</b> <a href=\"http://www.pclinuxos.com/\">http://www.pclinuxos.com</a><br/>"
//	"<b>Description:</b> PCLinuxOS is a user-friendly Mandriva-based distribution.<br/>"
//	"<b>Install Notes:</b> The Live version allows for booting in Live mode, from which the installer can optionally be launched.") <<
//"KDE 2010" << "Gnome 2010" << "LXDE 2010" << "MiniMe 2010" << "E17 2010"));
distroselect->addItem("Puppy Linux", (QStringList() << "Latest_Live" <<
unetbootin::tr("<b>Homepage:</b> <a href=\"http://www.puppylinux.com/\">http://www.puppylinux.com</a><br/>"
	"<b>Description:</b> Puppy Linux is a lightweight distribution designed for older computers.<br/>"
	"<b>Install Notes:</b> The Live version loads the entire system into RAM and boots from memory, so installation is not required but optional.") <<
	"Latest_Live"));
distroselect->addItem("Sabayon Linux", (QStringList() << "5.2" <<
unetbootin::tr("<b>Homepage:</b> <a href=\"http://www.sabayonlinux.org/\">http://www.sabayonlinux.org</a><br/>"
	"<b>Description:</b> Sabayon Linux is a Gentoo-based Live DVD distribution which features the Entropy binary package manager in addition to the source-based Portage.<br/>"
	"<b>Install Notes:</b> The Live version allows for booting in Live mode, from which the installer can optionally be launched. The LiteMCE edition is 2 GB, while the full edition will need an 8 GB USB drive") <<
	"5.1" << "5.1_x64" << "5.2" << "5.2_x64"));
distroselect->addItem("Slax", (QStringList() << "Latest_Live" <<
unetbootin::tr("<b>Homepage:</b> <a href=\"http://www.slax.org/\">http://www.slax.org</a><br/>"
	"<b>Description:</b> Slax is a Slackware-based distribution featuring the KDE desktop.<br/>"
	"<b>Install Notes:</b> The Live version allows for booting in Live mode, from which the installer can optionally be launched.") <<
"Latest_Live"));
distroselect->addItem("SliTaz", (QStringList() << "Stable_Live" <<
unetbootin::tr("<b>Homepage:</b> <a href=\"http://www.slitaz.org/en/\">http://www.slitaz.org/en</a><br/>"
	"<b>Description:</b> SliTaz is a lightweight, desktop-oriented micro distribution.<br/>"
	"<b>Install Notes:</b> The Live version loads the entire system into RAM and boots from memory, so installation is not required but optional.") <<
"Stable_Live" << "Cooking_Live"));
distroselect->addItem("Smart Boot Manager", (QStringList() << "3.7" <<
unetbootin::tr("<b>Homepage:</b> <a href=\"http://btmgr.sourceforge.net/about.html\">http://btmgr.sourceforge.net/about.html</a><br/>"
	"<b>Description:</b> Smart Boot Manager is a bootloader which can overcome some boot-related BIOS limitations and bugs.<br/>"
	"<b>Install Notes:</b> SBM simply boots and runs; no installation is required to use it.") <<
"3.7"));
distroselect->addItem("Super Grub Disk", (QStringList() << "Latest" <<
unetbootin::tr("<b>Homepage:</b> <a href=\"http://www.supergrubdisk.org\">http://www.supergrubdisk.org</a><br/>"
	"<b>Description:</b> Super Grub Disk is a bootloader which can perform a variety of MBR and bootloader recovery tasks.<br/>"
	"<b>Install Notes:</b> SGD simply boots and runs; no installation is required to use it.") <<
"Latest"));
distroselect->addItem("Super OS", (QStringList() << "Latest_Live" <<
unetbootin::tr("<b>Homepage:</b> <a href=\"http://hacktolive.org/wiki/Super_OS\">http://hacktolive.org/wiki/Super_OS</a><br/>"
	"<b>Description:</b> Super OS is an unofficial derivative of Ubuntu which includes additional software by default. Requires a 2GB USB drive to install.<br/>"
	"<b>Install Notes:</b> The Live version allows for booting in Live mode, from which the installer can optionally be launched.") <<
"Latest_Live"));
//distroselect->addItem("SystemRescueCD", (QStringList() << "Latest_Live" <<
//unetbootin::tr("<b>Homepage:</b> <a href=\"http://www.sysresccd.org\">http://www.sysresccd.org</a><br/>"
//	"<b>Description:</b> SystemRescueCD includes various partition management and data recovery and backup tools.<br/>"
//	"<b>Install Notes:</b> SystemRescueCD is booted and run in live mode; no installation is required to use it.") <<
//"Latest_Live"));
distroselect->addItem("Ubuntu", (QStringList() << "10.04_Live" <<
unetbootin::tr("<b>Homepage:</b> <a href=\"http://www.ubuntu.com/\">http://www.ubuntu.com</a><br/>"
	"<b>Description:</b> Ubuntu is a user-friendly Debian-based distribution. It is currently the most popular Linux desktop distribution.<br/>"
	"<b>Install Notes:</b> The Live version allows for booting in Live mode, from which the installer can optionally be launched. The NetInstall version allows for installation over FTP, and can install Kubuntu and other official Ubuntu derivatives. If you would like to use a pre-downloaded alternate (not desktop) install iso, use the HdMedia option, and then place the alternate install iso file on the root directory of your hard drive or USB drive") <<
ubuntuverlist));
distroselect->addItem("xPUD", (QStringList() << "Stable_Live" <<
unetbootin::tr("<b>Homepage:</b> <a href=\"http://www.xpud.org/\">http://www.xpud.org</a><br/>"
	"<b>Description:</b> xPUD is a lightweight distribution featuring a simple kiosk-like interface with a web browser and media player.<br/>"
	"<b>Install Notes:</b> The Live version loads the entire system into RAM and boots from memory.") <<
"Stable_Live" << "Unstable_Live"));
distroselect->addItem("Xubuntu", (QStringList() << "10.04_Live" <<
unetbootin::tr("<b>Homepage:</b> <a href=\"http://www.xubuntu.org/\">http://www.xubuntu.org</a><br/>"
	"<b>Description:</b> Xubuntu is an official Ubuntu derivative featuring the XFCE desktop.<br/>"
	"<b>Install Notes:</b> The Live version allows for booting in Live mode, from which the installer can optionally be launched. The NetInstall version allows for installation over FTP, and can install Kubuntu and other official Ubuntu derivatives. If you would like to use a pre-downloaded alternate (not desktop) install iso, use the HdMedia option, and then place the alternate install iso file on the root directory of your hard drive or USB drive") <<
ubuntuverlist));
distroselect->addItem("Zenwalk", (QStringList() << "5.2" <<
unetbootin::tr("<b>Homepage:</b> <a href=\"http://www.zenwalk.org/\">http://www.zenwalk.org</a><br/>"
	"<b>Description:</b> Zenwalk is a Slackware-based distribution featuring the XFCE desktop.<br/>"
	"<b>Install Notes:</b> The Live version allows for booting in Live mode, from which the installer can optionally be launched.") <<
"5.2"));