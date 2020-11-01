// Vores egen header fil der erlærer funktionen 'test'
#include "a.h"

// Standard IO header - indeholder printf samt en masse andet.
#include <stdio.h>

int main() {
	// Kald printf-funktionen og udskriv "Hello World".
	printf("main: Hello World!\n");

	// Kald funktionen 'test' som er defineres i filen "a.c"
	test();
}
