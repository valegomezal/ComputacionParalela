GCC = gcc
FLAGS = -ansi -pedantic -Wall -std=gnu11
C_FLAGS = -lm
PROGRAMAS = mainmatricesApp

mainmatricesApp:
	$(GCC) $(FLAGS) funcionmatrices.c -c
	$(GCC) $(FLAGS) mTime.c -c
	$(GCC) $(FLAGS) $@.c -c
	$(GCC) $(FLAGS) -o $@ $@.o funcionmatrices.o mTime.o
	
clean:
	$(RM) $(PROGRAMAS) *.o
	
