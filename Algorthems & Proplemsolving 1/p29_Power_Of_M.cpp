// Programm zur Berechnung der Potenz einer Zahl mit beliebigem Exponenten
// Liest eine Basiszahl und einen Exponenten ein und berechnet Number^M

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

// Liest eine Zahl vom Benutzer ein
// Message: individuelle Eingabeaufforderung
int ReadNumber(string Message)
{
	int Number;
	cout << Message << endl;
	cin >> Number;

	return Number;
}

// Berechnet Number hoch M (Number^M)
// Rückgabewert: Ergebnis der Potenzierung
int PowerOfM(int Number, int M)
{
	if (M == 1)
	{
		return 1; // Sonderfall: Exponent = 1 ergibt 1
	}

	int p = 1;
	for (int i = 0; i < M; i++)
	{
		p *= Number; // Multiplikation Number-mal M
	}

	return p;
}

int main()
{
	// Eingabe der Basiszahl und des Exponenten
	int Number = ReadNumber("Please enter a Number ? ");
	int M = ReadNumber("Please enter The Power ? ");

	// Ausgabe des Potenzergebnisses
	cout << PowerOfM(Number, M) << endl;

	return 0;
}
