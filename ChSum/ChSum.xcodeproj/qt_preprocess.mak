#############################################################################
# Makefile for building: ChSum.app/Contents/MacOS/ChSum
# Generated by qmake (3.1) (Qt 5.11.0)
# Project:  ChSum.pro
# Template: app
# Command: /Users/jie/My/Study/Qt/qt-everywhere-src-5.11.0/qtbase/bin/qmake -o ChSum.xcodeproj/project.pbxproj ChSum.pro -spec macx-xcode
#############################################################################

MAKEFILE      = project.pbxproj

MOC       = /Users/jie/My/Study/Qt/qt-everywhere-src-5.11.0/qtbase/bin/moc
UIC       = 
LEX       = flex
LEXFLAGS  = 
YACC      = yacc
YACCFLAGS = -d
DEFINES       = -DQT_DEPRECATED_WARNINGS -DQT_NO_DEBUG -DQT_GUI_LIB -DQT_CORE_LIB
INCPATH       = -I. -I../../../qt-everywhere-src-5.11.0/qtbase/include -I../../../qt-everywhere-src-5.11.0/qtbase/include/QtGui -I../../../qt-everywhere-src-5.11.0/qtbase/include/QtCore -I. -I/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX10.13.sdk/System/Library/Frameworks/OpenGL.framework/Headers -I/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX10.13.sdk/System/Library/Frameworks/AGL.framework/Headers -I../../../qt-everywhere-src-5.11.0/qtbase/mkspecs/macx-clang
DEL_FILE  = rm -f
MOVE      = mv -f

preprocess: compilers
clean preprocess_clean: compiler_clean

mocclean: compiler_moc_header_clean compiler_moc_objc_header_clean compiler_moc_source_clean

mocables: compiler_moc_header_make_all compiler_moc_objc_header_make_all compiler_moc_source_make_all

check: first

benchmark: first

compilers: moc_predefs.h
compiler_rcc_make_all:
compiler_rcc_clean:
compiler_moc_predefs_make_all: moc_predefs.h
compiler_moc_predefs_clean:
	-$(DEL_FILE) moc_predefs.h
moc_predefs.h: ../../../qt-everywhere-src-5.11.0/qtbase/mkspecs/features/data/dummy.cpp
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/clang++ -pipe -stdlib=libc++ -O2 -std=gnu++11 -Wall -W -dM -E -o moc_predefs.h ../../../qt-everywhere-src-5.11.0/qtbase/mkspecs/features/data/dummy.cpp

compiler_moc_header_make_all:
compiler_moc_header_clean:
compiler_moc_objc_header_make_all:
compiler_moc_objc_header_clean:
compiler_moc_source_make_all:
compiler_moc_source_clean:
compiler_rez_source_make_all:
compiler_rez_source_clean:
compiler_yacc_decl_make_all:
compiler_yacc_decl_clean:
compiler_yacc_impl_make_all:
compiler_yacc_impl_clean:
compiler_lex_make_all:
compiler_lex_clean:
compiler_clean: compiler_moc_predefs_clean 
