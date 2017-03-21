## Process this file with automake to produce Makefile

ACLOCAL_AMFLAGS = -I m4

# Create 'State' Library
lib_LTLIBRARIES = libstate.la
libstate_la_SOURCES = src/state.c src/state.h

# make check Tests
check_PROGRAMS = test/state
TESTS = test/state

test_state_CFLAGS = -I$(top_srcdir)/src
test_state_LDFLAGS = -lstate -lcmocka

maintainer-clean-local:
		rm -rf aclocal.m4 configure Makefile.in autotools m4
