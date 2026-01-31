// Programm zur Überprüfung, ob eine eingegebene Zahl eine Primzahl ist
// Der Benutzer gibt eine positive Zahl ein
// Das Programm prüft die Zahl und gibt aus, ob sie prim oder nicht prim ist

#include <iostream>
#include <string>

using namespace std;

// Enum zur Darstellung des Ergebnisses der Primzahlprüfung
// Prime     -> Zahl ist eine Primzahl
// NotPrime  -> Zahl ist keine Primzahl
enum enPrimeNotPrime { Prime = 1, NotPrime = 2 };

// Liest eine positive Zahl vom Benutzer ein
// Die Eingabe wird so lange wiederholt, bis eine Zahl größer als 0 eingegeben wird
int ReadPositiveNumber()
{
	int Number = 0;
	do
	{
		cout << "Please enter a Number ? ";
		cin >> Number;

	} while (Number <= 0);

	return Number;
}

// Prüft, ob eine Zahl eine Primzahl ist
// Gibt Prime zurück, wenn die Zahl prim ist
// Gibt NotPrime zurück, wenn die Zahl nicht prim ist
enPrimeNotPrime CheckPrimeNumber(int Number)
{
	// Zahlen kleiner als 2 sind keine Primzahlen
	if (Number < 2)
		return enPrimeNotPrime::NotPrime;

	// Berechnet die obere Grenze für die Teilbarkeitsprüfung
	int M = Number / 2;

	// Prüft, ob die Zahl durch eine andere Zahl teilbar ist
	for (int i = 2; i <= M; i++)
	{
		if (Number % i == 0)
			return enPrimeNotPrime::NotPrime;
		else
			return enPrimeNotPrime::Prime;
	}
}

// Gibt das Ergebnis der Primzahlprüfung auf dem Bildschirm aus
void PrintPrimeNumber(int Number)
{
	if (CheckPrimeNumber(Number) == enPrimeNotPrime::NotPrime)
		cout << "Your Number is Not Prime !!" << endl;
	else
		cout << "Your Number is a Prime Number ..." << endl;
}

int main()
{
	// Liest eine positive Zahl vom Benutzer ein
	int Number = ReadPositiveNumber();

	// Prüft die Zahl und gibt das Ergebnis aus
	PrintPrimeNumber(Number);

	return 0;
}
