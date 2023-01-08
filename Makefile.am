SUBDIRS = include src main test
ACLOCAL_AMFLAGS = -I m4

DOCDIR = doxygen
LCOVDIR = lcov

clean-local:
	@rm -f src/*.gcno
	@rm -f test/*.gcno
	@rm -f test/*.gcda
	@rm -rf $(DOCDIR)
	@rm -rf $(LCOVDIR)

check-local:
	test/test_acsample

.PHONY: docs lcov
INDEXPATH = $(DOCDIR)/html/index.html
docs:
	doxygen
	@echo $(INDEXPATH)

COVERAGE = coverage.info
lcov: check
	lcov --capture --directory . --output-file $(COVERAGE)
	lcov --remove $(COVERAGE) **include/c++/** --output-file $(COVERAGE)
	lcov --remove $(COVERAGE) **bits** --output-file $(COVERAGE)
	lcov --remove $(COVERAGE) **gtest*.h --output-file $(COVERAGE)
	lcov --remove $(COVERAGE) **gtest*.cc --output-file $(COVERAGE)
	genhtml $(COVERAGE) --output-directory $(LCOVDIR)
	@rm -f *.gcno
	@rm -f *.gcda
	@rm -f $(COVERAGE)
	@echo -n -e ""
	@echo $(LCOVDIR)/index.html

EXTRA_DIST = Doxyfile LICENSE scripts/*
