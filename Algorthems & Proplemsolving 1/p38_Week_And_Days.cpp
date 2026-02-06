// Programm zur Umrechnung von Stunden in Tage und Wochen
// Der Benutzer gibt eine positive Anzahl von Stunden ein
// Das Programm berechnet daraus die entsprechenden Tage und Wochen

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

// Liest eine positive Ganzzahl vom Benutzer ein
// Die Eingabe wird so lange wiederholt, bis eine Zahl größer als 0 eingegeben wird
int ReadPositiveNumber(string Message)
{
	int Number = 0;
	do
	{
		cout << Message;
		cin >> Number;

	} while (Number <= 0);

	return Number;
}

// Wandelt Stunden in Tage um
float HoursToDay(float NumberOfHours)
{
	return (float)NumberOfHours / 24;
}

// Wandelt Stunden direkt in Wochen um
float HoursToWeeks(float NumberOfHours)
{
	return (float)NumberOfHours / 24 / 7;
}

// Wandelt Tage in Wochen um
float DaysToWeek(float NumberOfDays)
{
	return (float)NumberOfDays / 7;
}

int main()
{
	// Liest die Anzahl der Stunden vom Benutzer ein
	float NumberofHours = ReadPositiveNumber("Please enter Number Of Hours? ");

	// Berechnet die entsprechenden Tage aus den Stunden
	float NumberofDays = HoursToDay(NumberofHours);

	// Berechnet die Wochen aus den Tagen
	float NumberOfWeek = DaysToWeek(NumberofDays);

	cout << endl;

	// Gibt die ursprünglichen Stunden aus
	cout << "Total Hours = " << NumberofHours << endl;

	// Gibt die berechneten Tage aus
	cout << "Total Days = " << NumberofDays << endl;

	// Gibt die berechneten Wochen aus
	cout << "Total Week = " << HoursToWeeks(NumberofHours) << endl;

	system("pause>0");

	return 0;
}
