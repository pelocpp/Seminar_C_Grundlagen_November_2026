// #define _CRT_SECURE_NO_WARNINGS  // Für Legacy Code: "Alter Code" von irgendwo her

#include <stdio.h>
#include <string.h>
#include <stdlib.h>   // malloc
#include <ctype.h>

//struct Person
//{
//	char firstName[32];
//	char lastName[32];
//	int  age;
//};

struct Person
{
	char* firstName;
	char* lastName;
	int   age;
};

// globales Feld von Kontakten

#define MaxKontakte 100

struct Person g_meineKontakte [MaxKontakte];
int           g_index = 0;


void firstDynExample()
{
	// wie wird Speicher dynamisch angelegt
	// void* malloc(size_t size);
	// Adresse auf Nichts

	// Maßeinheit: Bytes
	// Beispiel: Will EIN int dynamisch anlegen

	int* adr = malloc(1 * sizeof(int));

	// indirektes Schreiben:
	*adr = 123;

	// ...............

	free(adr);
}

#define BufferSize 100

void einenKontaktEinlesen()
{
	struct Person einePerson = { NULL, NULL, 0 };

	// Einlesen von der Konsole
	printf("Bitte geben Sie Ihren Vornamen ein: ");

	char buffer[BufferSize] = { 0 };

	int result = scanf_s("%s", buffer, BufferSize);

	printf("Vorname: >>>%s<<<\n", buffer);

	// Diese Eingabe legen wir - mit einem minimalen Puffer - auf den Heap
	
	// a) Wie lang ist die Eingabe
	size_t len = strlen(buffer);

	// b) Für diese Eingabe Speicher auf dem Heap reservieren / anlegen
	size_t wieviel = (len + 1) * sizeof(char);
	char* ptr = malloc( wieviel);

	// c) Die Eingabe von / in buffer auf den Heap umkopieren
	//errno_t strcpy_s(
	//	char* dest,
	//	rsize_t dest_size,
	//	const char* src
	//);

	strcpy_s(ptr, wieviel, buffer);

	einePerson.firstName = ptr;

	// ============================================
    // der Nachname

	// Einlesen von der Konsole
	printf("Bitte geben Sie Ihren Nachnamen ein: ");

	result = scanf_s("%s", buffer, BufferSize);

	printf("Nachname: >>>%s<<<\n", buffer);

	// Diese Eingabe legen wir - mit einem minimalen Puffer - auf den Heap

	// a) Wie lang ist die Eingabe
	len = strlen(buffer);

	// b) Für diese Eingabe Speicher auf dem Heap reservieren / anlegen
	wieviel = (len + 1) * sizeof(char);
	ptr = malloc(wieviel);

	// c) Die Eingabe von / in buffer auf den Heap umkopieren
	//errno_t strcpy_s(
	//	char* dest,
	//	rsize_t dest_size,
	//	const char* src
	//);

	strcpy_s(ptr, wieviel, buffer);

	einePerson.lastName = ptr;

	// ==============================================
	// Alter eingeben

	int success = 0;   // 0 == Fehler, 1 == Okay

	while (success == 0) {

		printf("Bitte geben Sie Ihr Alter ein: ");

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

	einePerson.age = age;

	// ======================================
	// den eingelesenen Kontakt in die globale Kontakteverwaltung einfügen

	g_meineKontakte[g_index] = einePerson;
	++g_index;
}

void printAlleKontakte()
{
	for (int i = 0; i < MaxKontakte; ++i) {

		if (g_meineKontakte[i].age != 0) {

			printf("Vorname: %s, Nachname: %s, Alter: %d\n", 
				g_meineKontakte[i].firstName,
				g_meineKontakte[i].lastName,
				g_meineKontakte[i].age);
		}
	}
}

void freeAlleKontakte()
{
	for (int i = 0; i < MaxKontakte; ++i) {

		if (g_meineKontakte[i].age != 0) {

			free(g_meineKontakte[i].firstName);
			free(g_meineKontakte[i].lastName);
		}
	}
}

void kontakte()
{
	einenKontaktEinlesen();
	einenKontaktEinlesen();

	printAlleKontakte();

	// ======== Aufheben
	// freigeben
	freeAlleKontakte();
}