#include <stdio.h>
#include <stdlib.h>

int main() {
	// Bed om 1024 bytes hukommelse.
	void* ptr = malloc(1024);

	// ptr indeholdr nu adressen på hukommelsen.
	// vi kan udskrive adressen sådan her:
	printf("%lX\n", ptr);

	// Frigiv hokummelse.
	free(ptr);
}
