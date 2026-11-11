


#include <stdio.h>

int globalVariable = 123;   // hier wird eine globale Variable DEFINIERT / mit Vorbelegung.

void memory_01()
{
	int n = 123;    // n ist eine lokale Variable
	int m = 456;    // n ist eine lokale Variable

	printf("n: %d\n", n);
}

void memory()
{
	int a = 10;
	int b = 11;
	int c = 12;

	printf("%d\n", globalVariable);

	// n = 456;  Nope

	memory_01();
}

