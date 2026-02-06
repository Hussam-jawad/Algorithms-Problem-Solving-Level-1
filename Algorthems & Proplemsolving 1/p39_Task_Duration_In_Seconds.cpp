// Programm zur Berechnung der gesamten Dauer einer Aufgabe in Sekunden
// Die Dauer wird in Tagen, Stunden, Minuten und Sekunden eingegeben
// Am Ende wird alles in Sekunden umgerechnet und ausgegeben

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

// Struktur zur Speicherung der Aufgabendauer
// Enthält Tage, Stunden, Minuten und Sekunden
struct strTaskDuration
{
	int NumberOfDay, NumberOfHour, NumberOfMinutes, NumberOfSeconds;
};

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

// Liest die komplette Aufgabendauer vom Benutzer ein
// Jeder Zeitwert wird separat abgefragt
strTaskDuration ReadTaskDuration()
{
	strTaskDuration TaskDuration;

	TaskDuration.NumberOfDay = ReadPositiveNumber("Please enter Number of Day ? ");
	TaskDuration.NumberOfHour = ReadPositiveNumber("Please enter Number of Hour ? ");
	TaskDuration.NumberOfMinutes = ReadPositiveNumber("Please enter Number of Minutes ? ");
	TaskDuration.NumberOfSeconds = ReadPositiveNumber("Please enter Number of Secondes ? ");

	return TaskDuration;
}

// Rechnet die gesamte Aufgabendauer in Sekunden um
int TaskDurationInSeconds(strTaskDuration TaskDuration)
{
	int DurationInSeconde = 0;

	// Umrechnung der Tage in Sekunden
	DurationInSeconde = TaskDuration.NumberOfDay * 24 * 60 * 60;

	// Umrechnung der Stunden in Sekunden
	DurationInSeconde += TaskDuration.NumberOfHour * 60 * 60;

	// Umrechnung der Minuten in Sekunden
	DurationInSeconde += TaskDuration.NumberOfMinutes * 60;

	// Hinzufügen der Sekunden
	DurationInSeconde += TaskDuration.NumberOfSeconds;

	return DurationInSeconde;
}

int main()
{
	// Liest die Aufgabendauer ein und gibt die Gesamtdauer in Sekunden aus
	cout << "\nTask Duration In Seconds: "
		<< TaskDurationInSeconds(ReadTaskDuration());

	system("pause>0");

	return 0;
}
