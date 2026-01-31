// Programm zur Berechnung der Fakultät einer positiven Zahl
// Liest eine positive Zahl ein und berechnet das Fakultätsergebnis mit einer for-Schleife

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

// Liest eine positive Zahl vom Benutzer ein
// Message: individuelle Eingabeaufforderung
int ReadPositiveNumber(string Message)
{
	int Number = 0;
	do
	{
		cout << Message << endl;
		cin >> Number;
	} while (Number <= 0);

	return Number;
}

// Berechnet die Fakultät der übergebenen Zahl
// Rückgabewert: Produkt aller Zahlen von Number bis 1
int CalcolateFactoria(int Number)
{
	int factorial = 1;
	for (int i = Number; i > 0; i--)
	{
		factorial *= i; // Multiplikation aller Zahlen von Number bis 1
	}

	return factorial;
}

int main()
{
	// Eingabe der positiven Zahl
	int Number = ReadPositiveNumber("Please enter Number ? ");

	// Berechnung der Fakultät
	int Factorial = CalcolateFactoria(Number);

	// Ausgabe des Ergebnisses
	cout << "The Factorial Number is: ";
	cout << Factorial << endl;

	return 0;
}
