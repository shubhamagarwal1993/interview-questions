EXE = output
OBJS = reverse.o

COMPILER = g++
COMPILER_FLAGS = -c -g -O0 -Wall -Werror
LINKER = g++

all : $(EXE)

$(EXE) : $(OBJS)
	$(LINKER) $(OBJS) -o $(EXE)

main.o : main.cpp 
	$(COMPILER) $(COMPILER_FLAGS) reverse.cpp

clean :
	-rm -f *.o $(EXE)
