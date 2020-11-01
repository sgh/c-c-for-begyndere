# Lille makefile til at bygge holloworld programmet.
# Indrykningen er vigtig og gøres altid med tabulator (tab)
#
# Manualen til gmail findes her: 
# https://www.gnu.org/software/make/manual/html_node
#
# Kommentarer skrives med # i starten er hver linie.

# Sti til compilerne C og C++ (CXX)
CC:=/usr/bin/gcc
CXX:=/usr/bin/g++

# Her fortæller vi at file der hedder "*.o" kan laves ud fra 
# filer der hedder "*.c"  
%.o: %.c
	${CC} -c -o $@  $<
#   ender med at kalde fx. "/usr/bin/gcc -c -o a.o a.c"


# Tilsvarende regel for cpp-filer
%.o: %.cpp
	${CXX} -c -o $@  $<

# Regel til at samle (linke) to 2 objektfiler til programmet helloworld
helloworld: helloworld.o a.o
	${CXX} -o $@  $^

# Regnel 'all' er speciel. Det er den regel der aktiveres hvis man blot køre
# 'make' uden argumenter.
all: helloworld

# Regel til at slette de filer som compileringen har genereret.
clean:
	rm -f helloworld helloworld.o a.o
