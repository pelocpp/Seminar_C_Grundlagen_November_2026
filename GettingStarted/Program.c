#include <stdio.h>

#include "MyFunctions.h"

// auch ein Unterprogramm: Besonders, weil hier das gesamte Programm
// anfängt ==> Namen 'main'


void main() {

  //  printf("Bin in main: %d\n", globalVariable);

    test_uhrzeit();
}

void main_unterprogramme() {

    int wieviel = 3;
    einUnterprogramm(wieviel);   // Parameter 

    printf("\n");

    einUnterprogramm(1+ 2 +3);   // Parameter 

    int einWert = 5;
    int resultat;

    resultat = malZwei(einWert);

    /*resultat = */printf("Halloo");
}



void main_helloworld()
{
    printf("Hello World");
}

