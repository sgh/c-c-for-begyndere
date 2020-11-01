CC:=/usr/bin/gcc
CXX:=/usr/bin/g++

%.o: %.c
	${CC} -c -o $@  $<

%.o: %.cpp
	${CXX} -c -o $@  $<

main: main.o 
	${CXX} -o $@  $^

all: main

clean:
	rm -f main main.o
