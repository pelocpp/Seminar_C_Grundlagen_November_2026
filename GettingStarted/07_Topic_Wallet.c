// Übung

// Geldbeutel

// Euros und Cent

// Systematik im Umgang / Zugriff auf Strukturen:
// Wir greifen auf einen Geldbeutel nur mit Funktionen zu.

struct wallet
{
	int euros;
	int cents;
};

typedef struct wallet Wallet;


// Fügt euros dem Geldbeutel hinzu
// Achtung: negative Geldbeträge sind nicht erlaubt
// 1 == okay, 0 == nicht okay
int add(Wallet* w, int euros);

// Fügt cent in den Geldbeutel ein.
// Achtung: Zusatz:
// Wenn 350 cent hinzugefügt werden:  ===> hinzu: 3 Euro und 50 cent.
int addCents(Wallet* w, int cents);


// euros aus dem Geldbeutel entnehmen
// Achtung: Es können nicht mehr Euros entnommen werden,
// als im Geldbeutel enthalten sind
// 1 == okay, 0 == nicht okay
int take(Wallet* w, int euros);

// Inhalt auf der Konsole ausgeben
void print(Wallet* w);   

// Inhalt zweier Geldbeutel vergleichen
// -1: left hat weniger
// 0:  beide haben gleich viel
// 1:  right hat weniger
int compare(Wallet* left, Wallet* right);

void test_wallet()
{
	Wallet myWallet = { 0, 0 };

	// myWallet.euros = -50;
	// add(& myWallet, 50);
}