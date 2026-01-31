// Programm zur Summierung mehrerer Zahlen mit Abbruchbedingung
// Liest Zahlen vom Benutzer ein und addiert sie
// Die Eingabe -99 beendet die Eingabe und gibt die Summe aus

#include <iostream>
#include <string>

using namespace std;

// Liest eine Zahl vom Benutzer mit einer individuellen Meldung ein
float ReadNumbers(string Message)
{
	float Number = 0;

	cout << Message << endl;
	cin >> Number;

	return Number;
}

// Liest mehrere Zahlen ein und berechnet deren Summe
// Die Schleife wird beendet, sobald der Benutzer -99 eingibt
float SumNumbers()
{
	int Sum = 0, Number = 0, Counter = 1;

	do
	{
		// Fordert den Benutzer auf, eine neue Zahl einzugeben
		Number = ReadNumbers("Please enter a Number " + to_string(Counter));

		// Abbruchbedingung: -99 beendet die Eingabe
		if (Number == -99)
			break;

		// Addiert die eingegebene Zahl zur Gesamtsumme
		Sum += Number;
		Counter++;

	} while (Number != -99);

	return Sum;
}

int main()
{
	// Berechnet die Summe der eingegebenen Zahlen und gibt das Ergebnis aus
	cout << "\nReasul is: " << SumNumbers() << endl;

	return 0;
}
