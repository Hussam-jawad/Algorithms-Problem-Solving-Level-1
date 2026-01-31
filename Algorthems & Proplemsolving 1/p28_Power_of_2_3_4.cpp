// Programm zur Berechnung der Potenz einer Zahl
// Liest eine Zahl ein und berechnet die Quadrate, Kubikzahlen und vierte Potenz

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

// Berechnet Number hoch pwer (Number^pwer)
// Rückgabewert: Ergebnis der Potenzierung
int Pwer(int Number, int pwer)
{
	int p = 1;
	for (int i = 0; i < pwer; i++)
	{
		p *= Number; // Multiplikation Number-mal pwer
	}

	return p;
}

int main()
{
	// Eingabe der Zahl
	int Number = ReadNumber("Please enter a Number ? ");

	// Ausgabe der Quadrate, Kubikzahlen und vierten Potenzen
	cout << Pwer(Number, 2) << endl;
	cout << Pwer(Number, 3) << endl;
	cout << Pwer(Number, 4) << endl;

	return 0;
}
