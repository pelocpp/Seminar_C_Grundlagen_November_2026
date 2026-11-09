#include <stdio.h>

// Hello World

void main_inkrement() {

    int n = 10;

    printf("n = %d\n", n);

    int m = n;
    ++n;

    printf("m = %d\n", m);
}

void main_plus_one() {

    int n = 10;

    printf("n = %d\n", n);

    n = n + 1;

    printf("n = %d\n", n);

    ++n;   // dasselbe wie n = n + 1

    printf("n = %d\n", n);
}


void main_for() {

    //for (int i = 0; i < 10; i = i + 1) {
    //    printf("i = %d\n", i);
    //}

    for (int i = 0; i < 10; ++i) {
        printf("i = %d\n", i);
    }

    printf("\n");
    // man kann diese for-Schleife 1:1 auf while umsetzen - und umgekehrt

    int i = 0;
    while (i < 10) {
        printf("i = %d\n", i);
        // i = i + 1;
        ++i;
    }
}


void main_while() {

    printf("Start\n");

    int a = 0;

    while (a < 10) {

        a = a + 2;

        //if (a % 2 == 1) {   // will ungerade
        //    continue;
        //}

        printf("Bedingung erfuellt! a = %d\n", a);

        // Aussage: Wenn a ungerade ist, will ich SOFORT nach oben (12)
        // also erneut die Bedingung auswerten
        // anders formuliert: Alles was unterhalb steht: Auslassen


        // Aussage: Der Wert a gleich 5 stellt ein Problem dar,
        // ich will VORZEITIG die while-Schleife verlassen

        if (a == 5) {
            break;  // verlässt die umgebende while-Anweisung
        }
    } // Ende von while - es geht erneut nach 12 // erneute Auswertung der Bedingung

    printf("Done\n");
}


void main_if()
{
    int a = 22;  // IOs // Sensorik // E/A // Merker
    int b = 11;

    if (a == 2 || b == 1) {
        printf("Bedingung erfuellt!\n");
    }
    else {
        printf("Andere Werte ...\n");
    }

    //if (a == 1) {
    //    printf("Bedingung erfuellt - Wert : %d\n", a);
    //}
    //else if (a == 2) {
    //    printf("Bedingung erfuellt - Wert : %d\n", a);
    //}
    //else if (a == 3) {
    //    printf("Bedingung erfuellt - Wert : %d\n", a);
    //}
    //else {
    //    printf("Anderer Wert: %d\n", a);
    //}


    // Vergleichen: Ist a kleiner als b
    //if ( a < b ) {
    //    printf("Bedingung erfuellt\n");
    //}
    //else {
    //    printf("Bedingung nicht erfuellt\n");
    //}
}



void main_variablen()
{
    int a = 123;  // Stück Speicher wird reserviert
    // Auch ein Typ zugeordnet: Hier: Ganze Zahl

// Ausgabe in der Konsole: printf - Bibliotheksfunktion
    printf("Hello World: a = %d.\n", a);

    int len1 = sizeof(short);
    int len2 = sizeof(int);
    int len3 = sizeof(long);
    int len4 = sizeof(long long);

    printf("sizeof(short):     %d.\n", len1);
    printf("sizeof(int):       %d.\n", len2);
    printf("sizeof(long):      %d.\n", len3);
    printf("sizeof(long long): %d.\n", len4);

    short meineZahl = 32767;
    unsigned short meineZahl2 = 65535;

    //printf("sizeof(unsigned short):     %d.\n", sizeof(unsigned short));
    //printf("sizeof(unsigned int):       %d.\n", sizeof(unsigned int));
    //printf("sizeof(unsigned long):      %d.\n", sizeof(unsigned long));
    //printf("sizeof(unsigned long long): %d.\n", sizeof(unsigned long long));

    float f = 123.456f;
    double d = 123.456;

    printf("f: %g.\n", f);
    printf("d: %e.\n", d);

    char ch = '?';   // Ein Zeichen
    printf("ch: %c.\n", ch);

    // Operatoren

    int n = (1 + 2) * 3;
    // int n2 = a + b * c;

    printf("n: %d.\n", n);
}



void main_hello_world()
{
    printf("Hello World");

    int a = 1;
    int b = 2;
    int c = a + b;

    getchar();
}
