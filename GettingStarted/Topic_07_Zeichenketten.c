
// #define _CRT_SECURE_NO_WARNINGS  // Für Legacy Code: "Alter Code" von irgendwo her

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

void zeichen()
{
    char ch = '!';   // 1 Byte

    int n = ch;

    printf("ch: %c\n", ch);     // %c: c wie char
    printf("ch: %d\n", ch);

    ch = 77;

    printf("ch: %c\n", ch);
    printf("ch: %d\n", ch);
}

void zeichen_02()
{
    char zeichen[] = "ABC";

    printf("Zeichen: %s\n", zeichen);     // %s: s wie string
}

void zeichen_03()
{
    char zeichen[] = "ABC";

    int n = 0;

    while (zeichen[n] != '\0') {
        ++n;
    }

    printf("Die Zeichenkette %s ist %d Zeichen lang.\n", zeichen, n);

    zeichen[0] = 'a';

    printf("Die Zeichenkette %s ist %d Zeichen lang.\n", zeichen, n);
}

void zeichen_04()
{
    const char* zeichen = "123";  // Wo liegen jetzt diese Zeichen: In einem
                                 // meistens schreibgeschützten Speicherbereich.

    printf("Zeichenkette %s.\n", zeichen);

    // 'a' an der ersten Stelle der Zeichenkette reinschreiben

   // *zeichen = 'a';
}

void zeichen_05()
{
    char zeichen[] = "ABCDEF";

    // size_t strlen ( const char * str );

    size_t len = strlen(zeichen);   // typedef unsigned __int64 size_t;
                                    // unsigned long long

    printf("Len: %zu\n", len);
}

#define BufferSize 8

void zeichen_06()
{
    // Einlesen von der Konsole
    printf("Bitte geben Sie Ihren Vornamen an: ");

    char buffer[BufferSize] = { 0 };

    int result = scanf_s("%s", buffer, BufferSize);

    printf("Result: %d\n", result);

    printf("Name: >>>%s<<<\n", buffer);

    printf("Bitte geben Sie Ihr Alter ein:\n");

    //// a) erste Variante
    //int age = 0;

    //result = scanf_s("%d", & age);

    //printf("Alter: %d\n", age);

    // =============================================

    // b) Zweite Variante

    int success = 0;   // 0 == Fehler, 1 == Okay

    while (success == 0) {

        result = scanf_s("%s", buffer, BufferSize);

        // Eingabe kontrollieren
        size_t len = strlen(buffer);

        // Annahme:
        success = 1;  // hat geklappt

        for (int i = 0; i < len; ++i) {
            if (isdigit(buffer[i]) == 0) {
                printf("Falsche Eingabe, Eingabe bitte wiederholen !!!\n");
                success = 0;
                // break;
            }
        }
    }

    printf("Korrekte Eingabe: %s\n", buffer);

    // Sollten jetzt die korrekte Eingabe, die als Feld von Zeichen vorliegt,
    // nach int umwandeln

    int age = 0;

    age = atoi(buffer);

    printf("Alter: %d\n", age);
}

void zeichenketten()
{
    zeichen_06();
}

