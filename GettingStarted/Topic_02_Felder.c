#include <stdio.h>  // standard input output

void felder_01() {

	int lottozahlen[6] = { 0 };

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