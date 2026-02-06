// Programm zur Umwandlung von Sekunden in Tage, Stunden, Minuten und Sekunden
// Der Benutzer gibt eine Gesamtanzahl an Sekunden ein
// Das Programm berechnet daraus die entsprechende Zeitdauer

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

// Struktur zur Speicherung der Zeitdauer
// Enthält Tage, Stunden, Minuten und Sekunden
struct strTaskDuration
{
	int NumberOfDay, NumberOfHour, NumberOfMinutes, NumberOfSeconds;
};

// Liest eine positive Ganzzahl vom Benutzer ein
// Wiederholt die Eingabe, bis eine Zahl größer als 0 eingegeben wird
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

// Wandelt eine Gesamtanzahl von Sekunden in eine Zeitdauer um
// Die Dauer wird in Tage, Stunden, Minuten und Sekunden aufgeteilt
strTaskDuration SecondToDuration(int TotalSeconds)
{
	strTaskDuration TaskDuration;

	// Konstanten zur Umrechnung
	const int SecondsDay = 24 * 60 * 60;
	const int SecondsPerHours = 60 * 60;
	const int SecondsOerMinute = 60;

	int Remainder = 0;

	// Berechnung der Tage
	TaskDuration.NumberOfDay = floor(TotalSeconds / SecondsDay);
	Remainder = TotalSeconds % SecondsDay;

	// Berechnung der Stunden
	TaskDuration.NumberOfHour = floor(Remainder / SecondsPerHours);
	Remainder = Remainder % SecondsPerHours;

	// Berechnung der Minuten
	TaskDuration.NumberOfMinutes = floor(Remainder / SecondsOerMinute);
	Remainder = Remainder / SecondsOerMinute;

	// Restliche Sekunden
	TaskDuration.NumberOfSeconds = Remainder;

	return TaskDuration;
}

// Gibt die berechnete Zeitdauer im Format Tag:Stunde:Minute:Sekunde aus
void PrintTaskDurationDetails(strTaskDuration TaskDuration)
{
	cout << "\n";
	cout << TaskDuration.NumberOfDay << ":"
		<< TaskDuration.NumberOfHour << ":"
		<< TaskDuration.NumberOfMinutes << ":"
		<< TaskDuration.NumberOfSeconds << "\n";
}

int main()
{
	// Liest die Gesamtanzahl der Sekunden ein
	int TotalSeconds = ReadPositiveNumber("Please enter Total Seconds? ");

	// Wandelt Sekunden in eine Zeitdauer um und gibt das Ergebnis aus
	PrintTaskDurationDetails(SecondToDuration(TotalSeconds));

	system("pause>0");

	return 0;
}
