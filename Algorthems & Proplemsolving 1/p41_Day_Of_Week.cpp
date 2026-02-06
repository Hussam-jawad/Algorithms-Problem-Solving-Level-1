// Programm zur Ermittlung des Wochentags anhand einer Zahl
// Der Benutzer gibt eine Zahl von 1 bis 7 ein
// Das Programm gibt den entsprechenden Wochentag als Text aus

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

// Enum zur Darstellung der Wochentage
// Jeder Tag ist einer Zahl von 1 bis 7 zugeordnet
enum enDayOfWeek { Sat = 1, Sun = 2, Mon = 3, Tue = 4, Wed = 5, Thu = 6, Fri = 7 };

// Liest eine Zahl innerhalb eines bestimmten Bereichs ein
// Wiederholt die Eingabe, bis eine gültige Zahl zwischen From und To eingegeben wird
int ReadNumberINRange(string Message, int From, int To)
{
	int Number = 0;
	do
	{
		cout << Message;
		cin >> Number;

	} while (Number < 1 || Number > 7);

	return Number;
}

// Liest den Wochentag als Zahl ein
// Gibt den Wert als Enum enDayOfWeek zurück
enDayOfWeek ReadDayOfWeek()
{
	return (enDayOfWeek)ReadNumberINRange("Please enter Day Number 1 - 7 ", 1, 7);
}

// Gibt den Namen des Wochentags als String zurück
// Basierend auf dem übergebenen Enum-Wert
string GetDayOfWeek(enDayOfWeek Day)
{
	switch (Day)
	{
	case enDayOfWeek::Sat:
		return "Saturday";
	case enDayOfWeek::Sun:
		return "Sunday";
	case enDayOfWeek::Mon:
		return "Monday";
	case enDayOfWeek::Tue:
		return "Tuesday";
	case enDayOfWeek::Wed:
		return "Wednesday";
	case enDayOfWeek::Thu:
		return "Thursday";
	case enDayOfWeek::Fri:
		return "Friday";
	default:
		return "Not a Valid Day";
	}
}

int main()
{
	// Liest den Wochentag ein und gibt den entsprechenden Namen aus
	cout << GetDayOfWeek(ReadDayOfWeek()) << endl;

	system("pause>0");

	return 0;
}
