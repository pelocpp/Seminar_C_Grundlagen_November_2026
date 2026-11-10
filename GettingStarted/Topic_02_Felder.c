#include <stdio.h>  // standard input output
#include <stdlib.h>  // standard input output
#include <time.h>

void zufall() {

	// Zufallszahlen // Reproduzierbarkeit

	/* 1. Variante */ // srand(100);
	/* 2. Variante */ srand(time(NULL));   // Anzahl Millisekunden seit Einschalten des Rechners

	int n1 = rand();   // Unterprogrammaufruf
	int n2 = rand();   // Unterprogrammaufruf

	printf("n: %d\n", n1);
	printf("n: %d\n", n2);
}

// a) Ein Feld anlegen der Länge 10
//    int zahlen[10] = { 0 };

// b) Das Feld mit Zufallszahlen belegen

// c) Das Feld in der Konsole ausgeben:  for // while

// d) Die kleines und groesste Zahl in dem Feld berechnen.



#define Size 6 // Kommmentar

void felder_01() {

	int lottozahlen[Size] = { 0 };

	lottozahlen[0] = 27;
	lottozahlen[1] = 1;
	lottozahlen[2] = 38;
	lottozahlen[3] = 12;
	lottozahlen[4] = 5;
	lottozahlen[5] = 48;

	for (int i = 0; i < 6; ++i) {

		printf("Gezogene Zahl (%d) ==> %d\n", i, lottozahlen[i]);
	}
}

void felder_02() {

	int lottozahlen[6] = { 0 };

	int len1 = sizeof(int);
	printf("sizeof(int):         %d.\n", len1);

	int len2 = sizeof(lottozahlen);   // 6 * 4 == 24
	printf("sizeof(lottozahlen): %d.\n", len2);

	int index = 6;
	lottozahlen[index] = 27;  // Problem: Index 6 ist FALSCH: 0 .. 5

	printf("Done\n");
}