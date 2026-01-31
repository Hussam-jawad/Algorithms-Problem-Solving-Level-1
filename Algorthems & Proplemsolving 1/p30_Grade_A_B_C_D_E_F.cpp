// Programm zur Umwandlung einer numerischen Note in eine Buchstabennote
// Liest eine Note zwischen 0 und 100 ein und gibt die entsprechende Bewertung (A–F) zurück

#include <iostream>
#include <string>

using namespace std;

// Liest eine Zahl (Note) innerhalb eines bestimmten Bereichs ein
// From: untere Grenze
// To: obere Grenze
int ReadNumberInReange(int From, int To)
{
	int Grade;
	do
	{
		cout << "Please enter a Grade between 0 and 100? " << endl;
		cin >> Grade;

	} while (Grade <= From || Grade >= To); // Wiederholen, bis die Note im erlaubten Bereich liegt

	return Grade;
}

// Gibt den Buchstaben zurück, der der Note entspricht
// Grade: numerische Note (0–100)
char GetGradeLetter(int Grade)
{
	if (Grade >= 90)
		return 'A';
	else if (Grade >= 80)
		return 'B';
	else if (Grade >= 70)
		return 'C';
	else if (Grade >= 60)
		return 'D';
	else if (Grade >= 50)
		return 'E';
	else
		return 'F';
}

int main()
{
	// Liest die Note ein und gibt den entsprechenden Buchstaben aus
	cout << GetGradeLetter(ReadNumberInReange(0, 100)) << endl;

	return 0;
}
