

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
}