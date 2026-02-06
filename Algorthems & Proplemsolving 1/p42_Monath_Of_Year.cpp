// Programm zur Ermittlung des Monatsnamens anhand einer Zahl
// Der Benutzer gibt eine Zahl von 1 bis 12 ein
// Das Programm gibt den entsprechenden Monatsnamen aus

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

// Enum zur Darstellung der Monate des Jahres
// Jeder Monat ist einer Zahl von 1 bis 12 zugeordnet
enum enMonthOfYear
{
	Jan = 1, Feb = 2,
	Mar = 3, Apr = 4,
	May = 5, Jun = 6,
	Jul = 7, Aug = 8,
	Sep = 9, Oct = 10,
	Nov = 11, Dec = 12
};

// Liest eine Zahl innerhalb eines definierten Bereichs ein
// Wiederholt die Eingabe, bis eine gültige Monatszahl eingegeben wird
int ReadNumberINRange(string Message, int From, int To)
{
	int Number = 0;
	do
	{
		cout << Message;
		cin >> Number;

	} while (Number < 1 || Number > 12);

	return Number;
}

// Liest den Monat als Zahl ein
// Gibt den Wert als Enum enMonthOfYear zurück
enMonthOfYear ReadMonthOfYear()
{
	return (enMonthOfYear)ReadNumberINRange("Please enter Month of Number ? ", 1, 12);
}

// Gibt den Namen des Monats als String zurück
// Basierend auf dem übergebenen Enum-Wert
string GetMonthOfYear(enMonthOfYear Month)
{
	switch (Month)
	{
	case enMonthOfYear::Jan:
		return "January";
	case enMonthOfYear::Feb:
		return "February";
	case enMonthOfYear::Mar:
		return "March";
	case enMonthOfYear::Apr:
		return "April";
	case enMonthOfYear::May:
		return "May";
	case enMonthOfYear::Jun:
		return "Jun";
	case enMonthOfYear::Jul:
		return "July";
	case enMonthOfYear::Aug:
		return "August";
	case enMonthOfYear::Sep:
		return "Septemper";
	case enMonthOfYear::Oct:
		return "October";
	case enMonthOfYear::Nov:
		return "November";
	case enMonthOfYear::Dec:
		return "December";
	default:
		return "Not a Valid Month !!";
	}
}

int main()
{
	// Liest den Monat ein und gibt den entsprechenden Monatsnamen aus
	cout << GetMonthOfYear(ReadMonthOfYear());

	system("pause>0");

	return 0;
}
