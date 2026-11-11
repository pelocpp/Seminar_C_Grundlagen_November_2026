#include <stdio.h>
#include <stdlib.h>


#include "MyFunctions.h"

void pointer()
{
	int n = 123;    // wir reservieren Speicher für eine int-Variable

	int* adr = & n;   // & Operator:  Adress-Operator // gib mir Adresse von

	// will Speicher für 5 int-Variablen haben
	// int* adr2 = malloc();

	printf("n = %d\n", n);

	// Übungsaufgabe: Weise den Wert 456 an n zu,
	// ohne den Namen / Bezeichner n zu verwenden.

	// n = 456;

	*adr = 456;   // indirektes Schreiben: * Operator // schreibe / lese indirekt

	// ================================================================

	// Geht das // Was ist das // ja, das geht

	++adr;  // ??????????????????????????????????????????????????????????
	// oder
	// adr = adr + 1;

	// Hmm: Habe eine neue Adresse: Gehört mit dieser Speicher ???????????

	*adr = 999;

	// ======================================================

	double d = 123.456;

	double* d_adr = &d;

	++ d_adr;
}