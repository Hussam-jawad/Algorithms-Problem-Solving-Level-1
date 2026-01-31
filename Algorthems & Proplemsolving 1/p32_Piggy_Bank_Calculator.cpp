// Programm zur Berechnung des Gesamtbetrags eines Sparschweins
// Liest die Anzahl der Münzen und Dollars ein
// Berechnet den Gesamtbetrag in Pennies und gibt ihn in Dollar aus

#include <iostream>
#include <string>

using namespace std;

// Struktur zur Speicherung des Inhalts des Sparschweins
struct stPiggyBankContenet
{
	int Pennies, Nickels, Dimes, Quarters, Dollars;
};

// Liest den Inhalt des Sparschweins vom Benutzer ein
stPiggyBankContenet ReadPiggyBankContenet()
{
	stPiggyBankContenet PiggyBankContenet;

	cout << "Please enter a Total Pennies? " << endl;
	cin >> PiggyBankContenet.Pennies;

	cout << "Please enter a Total Nickels? " << endl;
	cin >> PiggyBankContenet.Nickels;

	cout << "Please enter a Total Dimes? " << endl;
	cin >> PiggyBankContenet.Dimes;

	cout << "Please enter a Total Quarters? " << endl;
	cin >> PiggyBankContenet.Quarters;

	cout << "Please enter a Total Dollars? " << endl;
	cin >> PiggyBankContenet.Dollars;

	return PiggyBankContenet;
}

// Berechnet die Gesamtanzahl der Pennies
// Wandelt alle Münzen und Dollars in Pennies um
int CalculateTotalPennies(stPiggyBankContenet PiggyBankContenet)
{
	int TotalPennies = 0;

	TotalPennies =
		PiggyBankContenet.Pennies * 1 +
		PiggyBankContenet.Nickels * 5 +
		PiggyBankContenet.Dimes * 10 +
		PiggyBankContenet.Quarters * 25 +
		PiggyBankContenet.Quarters * 100;

	return TotalPennies;
}

int main()
{
	// Liest den Inhalt des Sparschweins und berechnet die Gesamtzahl der Pennies
	int TotalPennies = CalculateTotalPennies(ReadPiggyBankContenet());

	// Gibt die Gesamtanzahl der Pennies aus
	cout << "Total Pennis = " << TotalPennies << endl;

	// Gibt den Gesamtbetrag in Dollar aus
	cout << "Total Dollars = " << (float)TotalPennies / 100 << endl;

	return 0;
}
