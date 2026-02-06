// Programm zur Ausgabe der Buchstaben von A bis Z
// Verwendet ASCII-Codes, um die Groﬂbuchstaben darzustellen

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

// Gibt alle Buchstaben von A bis Z aus
// ASCII-Code 65 entspricht 'A'
// ASCII-Code 90 entspricht 'Z'
void PrintLettersAtoZ()
{
	for (int i = 65; i <= 90; i++)
	{
		// Umwandlung des ASCII-Werts in ein Zeichen
		cout << (char)i << endl;
	}
}

int main()
{
	// Aufruf der Funktion zur Ausgabe der Buchstaben
	PrintLettersAtoZ();

	system("pause>0");

	return 0;
}
