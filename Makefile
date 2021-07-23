SHELL=/bin/bash

# compilers
CXX = g++
LD = g++
CXXFLAGS = -std=c++17 -g -Wall -MMD -MP
# デバッグ用
# CXXFLAGS = -std=c++17 -g -Wall -MMD -MP --pedantic-errors -fsanitize=address -fno-omit-frame-pointer 

MAIN_TARGET = main.o
TEST_TARGET = test

# sources
SRCDIR = src
OBJDIR = obj
SRCS = $(wildcard $(SRCDIR)/*.cpp)
OBJS = $(subst $(SRCDIR)/,$(OBJDIR)/,$(SRCS:.cpp=.o))

# main
MAINDIR = main
MAINOBJDIR = $(OBJDIR)
MAIN_SRCS = $(MAINDIR)/main.cpp
MAIN_OBJS = $(subst $(MAINDIR)/,$(OBJDIR)/,$(MAIN_SRCS:.cpp=.o))

# test
TESTDIR = test
TESTOBJDIR = obj/test
TEST_SRCS = $(wildcard $(TESTDIR)/*.cpp)
TEST_OBJS = $(subst $(TESTDIR)/,$(TESTOBJDIR)/,$(TEST_SRCS:.cpp=.o)) \
			$(subst $(SRCDIR)/,$(TESTOBJDIR)/,$(SRCS:.cpp=.o))

# includes
INCLUDES = -I. 
MAIN_INCLUDES =
TEST_INCLUDES = -Igoogletest-release-1.10.0/googletest/include

# for test
TEST_LIBS = -Lgoogletest-release-1.10.0/googletest/build/lib
TEST_LDFLAGS = -lgtest -lgtest_main -lpthread

# objects
MAIN_OBJ = main.o
TEST_OBJ = test.o

# doxygen
DOXYGEN = doxygen
INDEXPATH = $(DOXYGEN)/html/index.html

.PHONY: all clean main test run docs

all: $(MAIN_TARGET) $(TEST_TARGET)

$(MAIN_TARGET): $(MAIN_OBJS) $(OBJS)
	$(LD) -o $@ $^ $(LDFLAGS)

$(TEST_TARGET): $(TEST_OBJS)
	$(LD) -o $(TEST_OBJ) $(TEST_LIBS) $^ $(TEST_LDFLAGS) 
	./$(TEST_OBJ)

$(TEST_TARGET): INCLUDES += $(TEST_INCLUDES)

$(OBJDIR)/%.o: $(SRCDIR)/%.cpp
	@mkdir -p $(dir $(OBJS))
	$(CXX) $(CXXFLAGS) $(OPTIM) $(INCLUDES) -c $^ -o $@

$(MAINOBJDIR)/%.o: $(MAINDIR)/%.cpp
	@mkdir -p $(dir $(MAIN_OBJS))
	$(CXX) $(CXXFLAGS) $(OPTIM) $(INCLUDES) -c $^ -o $@

$(TESTOBJDIR)/%.o: $(TESTDIR)/%.cpp
	@./scripts/download_gtest.sh
	@mkdir -p $(dir $(TEST_OBJS))
	$(CXX) $(CXXFLAGS) $(OPTIM) $(INCLUDES) -c $^ -o $@

$(TESTOBJDIR)/%.o: $(SRCDIR)/%.cpp
	@./scripts/download_gtest.sh
	@mkdir -p $(dir $(TEST_OBJS))
	$(CXX) $(CXXFLAGS) $(OPTIM) $(INCLUDES) -c $^ -o $@

docs:
	@./scripts/download_doxygen.sh
	$(DOXYGEN)
	@echo $(INDEXPATH)

clean:
	@rm -f $(MAIN_TARGET)
	@rm -f $(MAIN_OBJS)
	@rm -f test.o
	@rm -f $(OBJS)
	@rm -rf $(OBJDIR)
	@rm -rf doxygen
	@rm -rf googletest-release-1.10.0

run: $(MAIN_TARGET)
	./$(MAIN_TARGET) name 1 2
