# Microsoft Developer Studio Project File - Name="Sundar_Game" - Package Owner=<4>
# Microsoft Developer Studio Generated Build File, Format Version 6.00
# ** DO NOT EDIT **

# TARGTYPE "Win32 (x86) Application" 0x0101

CFG=Sundar_Game - Win32 Debug
!MESSAGE This is not a valid makefile. To build this project using NMAKE,
!MESSAGE use the Export Makefile command and run
!MESSAGE 
!MESSAGE NMAKE /f "Sundar_Game.mak".
!MESSAGE 
!MESSAGE You can specify a configuration when running NMAKE
!MESSAGE by defining the macro CFG on the command line. For example:
!MESSAGE 
!MESSAGE NMAKE /f "Sundar_Game.mak" CFG="Sundar_Game - Win32 Debug"
!MESSAGE 
!MESSAGE Possible choices for configuration are:
!MESSAGE 
!MESSAGE "Sundar_Game - Win32 Release" (based on "Win32 (x86) Application")
!MESSAGE "Sundar_Game - Win32 Debug" (based on "Win32 (x86) Application")
!MESSAGE 

# Begin Project
# PROP AllowPerConfigDependencies 0
# PROP Scc_ProjName ""
# PROP Scc_LocalPath ""
CPP=cl.exe
MTL=midl.exe
RSC=rc.exe

!IF  "$(CFG)" == "Sundar_Game - Win32 Release"

# PROP BASE Use_MFC 6
# PROP BASE Use_Debug_Libraries 0
# PROP BASE Output_Dir "Release"
# PROP BASE Intermediate_Dir "Release"
# PROP BASE Target_Dir ""
# PROP Use_MFC 6
# PROP Use_Debug_Libraries 0
# PROP Output_Dir "Release"
# PROP Intermediate_Dir "Release"
# PROP Ignore_Export_Lib 0
# PROP Target_Dir ""
# ADD BASE CPP /nologo /MD /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /D "_AFXDLL" /Yu"stdafx.h" /FD /c
# ADD CPP /nologo /MD /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /D "_AFXDLL" /D "_MBCS" /FR /Yu"stdafx.h" /FD /c
# ADD BASE MTL /nologo /D "NDEBUG" /mktyplib203 /win32
# ADD MTL /nologo /D "NDEBUG" /mktyplib203 /win32
# ADD BASE RSC /l 0x409 /d "NDEBUG" /d "_AFXDLL"
# ADD RSC /l 0x409 /d "NDEBUG" /d "_AFXDLL"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 /nologo /subsystem:windows /machine:I386
# ADD LINK32 /nologo /subsystem:windows /machine:I386

!ELSEIF  "$(CFG)" == "Sundar_Game - Win32 Debug"

# PROP BASE Use_MFC 6
# PROP BASE Use_Debug_Libraries 1
# PROP BASE Output_Dir "Debug"
# PROP BASE Intermediate_Dir "Debug"
# PROP BASE Target_Dir ""
# PROP Use_MFC 6
# PROP Use_Debug_Libraries 1
# PROP Output_Dir "Debug"
# PROP Intermediate_Dir "Debug"
# PROP Target_Dir ""
# ADD BASE CPP /nologo /MDd /W3 /Gm /GX /ZI /Od /D "WIN32" /D "_DEBUG" /D "_WINDOWS" /D "_AFXDLL" /Yu"stdafx.h" /FD /GZ /c
# ADD CPP /nologo /MDd /W3 /Gm /GX /ZI /Od /D "WIN32" /D "_DEBUG" /D "_WINDOWS" /D "_AFXDLL" /D "_MBCS" /FR /Yu"stdafx.h" /FD /GZ /c
# ADD BASE MTL /nologo /D "_DEBUG" /mktyplib203 /win32
# ADD MTL /nologo /D "_DEBUG" /mktyplib203 /win32
# ADD BASE RSC /l 0x409 /d "_DEBUG" /d "_AFXDLL"
# ADD RSC /l 0x409 /d "_DEBUG" /d "_AFXDLL"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 /nologo /subsystem:windows /debug /machine:I386 /pdbtype:sept
# ADD LINK32 /nologo /subsystem:windows /debug /machine:I386 /pdbtype:sept

!ENDIF 

# Begin Target

# Name "Sundar_Game - Win32 Release"
# Name "Sundar_Game - Win32 Debug"
# Begin Group "Source Files"

# PROP Default_Filter "cpp;c;cxx;rc;def;r;odl;idl;hpj;bat"
# Begin Source File

SOURCE=.\InstructDlg.cpp
# End Source File
# Begin Source File

SOURCE=.\ScoreDlg.cpp
# End Source File
# Begin Source File

SOURCE=.\StdAfx.cpp
# ADD CPP /Yc"stdafx.h"
# End Source File
# Begin Source File

SOURCE=.\Sundar_Game.cpp
# End Source File
# Begin Source File

SOURCE=.\Sundar_Game.rc
# End Source File
# Begin Source File

SOURCE=.\Sundar_GameDlg.cpp
# End Source File
# End Group
# Begin Group "Header Files"

# PROP Default_Filter "h;hpp;hxx;hm;inl"
# Begin Source File

SOURCE=.\InstructDlg.h
# End Source File
# Begin Source File

SOURCE=.\Resource.h
# End Source File
# Begin Source File

SOURCE=.\ScoreDlg.h
# End Source File
# Begin Source File

SOURCE=.\StdAfx.h
# End Source File
# Begin Source File

SOURCE=.\Sundar_Game.h
# End Source File
# Begin Source File

SOURCE=.\Sundar_GameDlg.h
# End Source File
# End Group
# Begin Group "Resource Files"

# PROP Default_Filter "ico;cur;bmp;dlg;rc2;rct;bin;rgs;gif;jpg;jpeg;jpe"
# Begin Source File

SOURCE=.\res\1.bmp
# End Source File
# Begin Source File

SOURCE=.\res\10.bmp
# End Source File
# Begin Source File

SOURCE=.\res\11.BMP
# End Source File
# Begin Source File

SOURCE=.\res\12.BMP
# End Source File
# Begin Source File

SOURCE=.\res\13.BMP
# End Source File
# Begin Source File

SOURCE=.\res\14.BMP
# End Source File
# Begin Source File

SOURCE=.\res\15.BMP
# End Source File
# Begin Source File

SOURCE=.\res\2.bmp
# End Source File
# Begin Source File

SOURCE=.\res\3.bmp
# End Source File
# Begin Source File

SOURCE=.\res\4.bmp
# End Source File
# Begin Source File

SOURCE=.\res\5.bmp
# End Source File
# Begin Source File

SOURCE=.\res\6.bmp
# End Source File
# Begin Source File

SOURCE=.\res\7.bmp
# End Source File
# Begin Source File

SOURCE=.\res\8.bmp
# End Source File
# Begin Source File

SOURCE=.\res\9.bmp
# End Source File
# Begin Source File

SOURCE=".\res\XP\ac0036-64.ico"
# End Source File
# Begin Source File

SOURCE=.\res\Flag\afghan.ico
# End Source File
# Begin Source File

SOURCE=.\res\Face\alien.ico
# End Source File
# Begin Source File

SOURCE=.\res\Face\ansley.ico
# End Source File
# Begin Source File

SOURCE=.\res\app.ico
# End Source File
# Begin Source File

SOURCE=.\res\General\app.ico
# End Source File
# Begin Source File

SOURCE=".\res\aqua-blue-panther.bmp"
# End Source File
# Begin Source File

SOURCE=.\res\Flag\argentina.ico
# End Source File
# Begin Source File

SOURCE=.\res\BackGround.bmp
# End Source File
# Begin Source File

SOURCE=.\res\Flag\belgium.ico
# End Source File
# Begin Source File

SOURCE=.\res\Flag\benin.ico
# End Source File
# Begin Source File

SOURCE=.\res\bitmap2.bmp
# End Source File
# Begin Source File

SOURCE=.\res\bitmap4.bmp
# End Source File
# Begin Source File

SOURCE=.\res\blue_background.bmp
# End Source File
# Begin Source File

SOURCE=.\res\Flag\bulgaria.ico
# End Source File
# Begin Source File

SOURCE=.\res\XP\cam_48.ico
# End Source File
# Begin Source File

SOURCE=.\res\Face\cat.ICO
# End Source File
# Begin Source File

SOURCE=.\res\cconlinehelp.ico
# End Source File
# Begin Source File

SOURCE=.\res\General\cconlinehelp.ico
# End Source File
# Begin Source File

SOURCE=.\res\Flag\chad.ico
# End Source File
# Begin Source File

SOURCE=.\res\Flag\chile.ico
# End Source File
# Begin Source File

SOURCE=.\res\Flag\china.ico
# End Source File
# Begin Source File

SOURCE=.\res\clock1.ico
# End Source File
# Begin Source File

SOURCE=.\res\General\clock1.ico
# End Source File
# Begin Source File

SOURCE=.\res\clock2.ico
# End Source File
# Begin Source File

SOURCE=.\res\General\clock2.ico
# End Source File
# Begin Source File

SOURCE=.\res\clock3.ico
# End Source File
# Begin Source File

SOURCE=.\res\General\clock3.ico
# End Source File
# Begin Source File

SOURCE=.\res\Flag\columbia.ico
# End Source File
# Begin Source File

SOURCE=.\res\Flag\costarica.ico
# End Source File
# Begin Source File

SOURCE=.\res\Face\couple.ICO
# End Source File
# Begin Source File

SOURCE=.\res\Fav\couple2.ICO
# End Source File
# Begin Source File

SOURCE=.\res\Face\cowboy.ico
# End Source File
# Begin Source File

SOURCE=.\res\Face\cowboy2.ico
# End Source File
# Begin Source File

SOURCE=.\res\cursor1.cur
# End Source File
# Begin Source File

SOURCE=.\res\Flag\denmark.ico
# End Source File
# Begin Source File

SOURCE=.\res\Flag\djibouti.ico
# End Source File
# Begin Source File

SOURCE=.\res\Flag\dominicanrepublic.ico
# End Source File
# Begin Source File

SOURCE=.\res\earth.ico
# End Source File
# Begin Source File

SOURCE=.\res\General\earth.ico
# End Source File
# Begin Source File

SOURCE=.\res\Flag\easttimor.ico
# End Source File
# Begin Source File

SOURCE=".\res\XP\ei0021-64.ico"
# End Source File
# Begin Source File

SOURCE=.\res\Face\emicon.ico
# End Source File
# Begin Source File

SOURCE=.\res\Face\emicon4.ico
# End Source File
# Begin Source File

SOURCE=.\res\Face\emicon6.ico
# End Source File
# Begin Source File

SOURCE=.\res\Flag\estonia.ico
# End Source File
# Begin Source File

SOURCE=.\res\Face\face.ICO
# End Source File
# Begin Source File

SOURCE=.\res\Face\face2.ICO
# End Source File
# Begin Source File

SOURCE=.\res\favicon.ico
# End Source File
# Begin Source File

SOURCE=.\res\General\favicon.ico
# End Source File
# Begin Source File

SOURCE=.\res\Face\funnyman.ICO
# End Source File
# Begin Source File

SOURCE=.\res\Face\godess.ICO
# End Source File
# Begin Source File

SOURCE=.\res\Face\headphones.ICO
# End Source File
# Begin Source File

SOURCE=".\res\high score.bmp"
# End Source File
# Begin Source File

SOURCE=.\res\General\icon1.ico
# End Source File
# Begin Source File

SOURCE=.\res\icon1.ico
# End Source File
# Begin Source File

SOURCE=.\res\XP\IEXPLORE.ICO
# End Source File
# Begin Source File

SOURCE=.\res\General\info.ico
# End Source File
# Begin Source File

SOURCE=.\res\info.ico
# End Source File
# Begin Source File

SOURCE=.\res\General\JavaCup.ico
# End Source File
# Begin Source File

SOURCE=.\res\JavaCup.ico
# End Source File
# Begin Source File

SOURCE=".\res\Face\man - 16.ico"
# End Source File
# Begin Source File

SOURCE=.\res\Fav\man.ICO
# End Source File
# Begin Source File

SOURCE=.\res\Fav\man10.ICO
# End Source File
# Begin Source File

SOURCE=.\res\Fav\man11.ICO
# End Source File
# Begin Source File

SOURCE=.\res\Fav\man12.ICO
# End Source File
# Begin Source File

SOURCE=.\res\Fav\man13.ICO
# End Source File
# Begin Source File

SOURCE=.\res\Fav\man14.ICO
# End Source File
# Begin Source File

SOURCE=.\res\Fav\man2.ICO
# End Source File
# Begin Source File

SOURCE=.\res\Fav\man3.ICO
# End Source File
# Begin Source File

SOURCE=.\res\Fav\man4.ICO
# End Source File
# Begin Source File

SOURCE=.\res\Fav\man5.ICO
# End Source File
# Begin Source File

SOURCE=.\res\Fav\man6.ICO
# End Source File
# Begin Source File

SOURCE=.\res\Fav\man7.ICO
# End Source File
# Begin Source File

SOURCE=.\res\Fav\man8.ICO
# End Source File
# Begin Source File

SOURCE=.\res\Fav\man9.ICO
# End Source File
# Begin Source File

SOURCE=.\res\XP\MSDTX.ICO
# End Source File
# Begin Source File

SOURCE=.\res\General\msnms.ico
# End Source File
# Begin Source File

SOURCE=.\res\msnms.ico
# End Source File
# Begin Source File

SOURCE=.\res\General\ndpsetup.ico
# End Source File
# Begin Source File

SOURCE=.\res\ndpsetup.ico
# End Source File
# Begin Source File

SOURCE=.\res\General\rational.ico
# End Source File
# Begin Source File

SOURCE=.\res\rational.ico
# End Source File
# Begin Source File

SOURCE=.\res\General\roundtarget.ico
# End Source File
# Begin Source File

SOURCE=.\res\roundtarget.ico
# End Source File
# Begin Source File

SOURCE=.\res\General\stgui.ico
# End Source File
# Begin Source File

SOURCE=.\res\stgui.ico
# End Source File
# Begin Source File

SOURCE=.\res\Sundar_Game.ico
# End Source File
# Begin Source File

SOURCE=.\res\Sundar_Game.rc2
# End Source File
# Begin Source File

SOURCE=".\res\XP\wi0009-64.ico"
# End Source File
# Begin Source File

SOURCE=".\res\XP\wi0054-64.ico"
# End Source File
# Begin Source File

SOURCE=".\res\XP\wi0062-64.ico"
# End Source File
# Begin Source File

SOURCE=".\res\XP\wi0063-64.ico"
# End Source File
# Begin Source File

SOURCE=".\res\XP\wi0064-64.ico"
# End Source File
# Begin Source File

SOURCE=".\res\XP\wi0096-64.ico"
# End Source File
# Begin Source File

SOURCE=".\res\XP\wi0111-64.ico"
# End Source File
# Begin Source File

SOURCE=".\res\XP\wi0122-64.ico"
# End Source File
# Begin Source File

SOURCE=".\res\XP\wi0124-64.ico"
# End Source File
# Begin Source File

SOURCE=".\res\XP\wi0126-64.ico"
# End Source File
# End Group
# Begin Source File

SOURCE=.\ReadMe.txt
# End Source File
# End Target
# End Project
