

#include <stdio.h>

#include "MyFunctions.h"

//void einUnterprogramm(int wieOft) {     // Stellvertreter / Parameter
//
//	for (int i = 0; i < wieOft; ++i) {
//		printf("Hallo Unterprogramm\n");
//	}
//}

int malZwei(int wert) {

	int ergebnis;

	ergebnis = 2 * wert;

	return ergebnis;
}

void einUnterprogramm(int wieOft) {     // Stellvertreter / Parameter

	// Endlosschleife mit for
	for ( int i = 0;  ; ++i) {

		if (i == wieOft) {
			break;
			// return;
		}

		printf("Hallo Unterprogramm\n");
	}

	printf("Done Unterprogramm\n");


	//for (int i = 0; i < wieOft; ++i) {
	//	printf("Hallo Unterprogramm\n");
	//}

	//return;  // hmmm, unüblich, überflüssig

	int ergebnis = 123;   // ?!?!?! Geht das .. oder geht das nicht ???
}


void malZweiAlternativ(int wert) {

	wert = 2 * wert;
}

void malZweiAlternativEx(int* wert) {

	// wert = 2 * wert;

	// a) Wert hinter der Adresse lesen
	// indirektes Lesen: * Operator 
	int value = *wert;

	value = 2 * value;

	// b) Wert an die Adresse schreiben
	// indirektes Schreiben: * Operator
	*wert = value;
}


void testeMalZweiAlternativ()
{
	int n = 10;
	printf("n vorher: %d\n", n);

	malZweiAlternativ(n);
	printf("n nachher: %d\n", n);

	malZweiAlternativEx(& n);
	printf("n nachher: %d\n", n);

}
