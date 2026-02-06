// Programm zur PIN-Code-Überprüfung mit Login-Funktion
// Der Benutzer wird so lange zur Eingabe eines PIN-Codes aufgefordert,
// bis der richtige Code eingegeben wird. Danach wird der Kontostand angezeigt.

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

// Liest den PIN-Code vom Benutzer ein
string ReadPinCode()
{
	string PinCode;
	cout << "Please enter Pin code \n";
	cin >> PinCode;

	return PinCode;
}

// Führt den Login-Vorgang aus
// Gibt true zurück, wenn der PIN-Code korrekt ist
// Bei falscher Eingabe wird eine Fehlermeldung angezeigt
bool Login()
{
	string PinCode;

	do
	{
		// PIN-Code vom Benutzer einlesen
		PinCode = ReadPinCode();

		// Prüfen, ob der eingegebene PIN-Code korrekt ist
		if (PinCode == "1234")
		{
			return 1;
		}
		else
		{
			// Fehlermeldung bei falschem PIN-Code
			cout << "\nWrong PIN\n";
			system("color 4F");
		}

	} while (PinCode != "1234");

	return 0;
}

int main()
{
	// Prüft den Login-Status
	if (Login())
	{
		// Grüner Bildschirm bei erfolgreichem Login
		system("color 2F");

		// Anzeige des Kontostands
		cout << "\nYour account balance is " << 7500 << "\n";
	}

	system("pause>0");

	return 0;
}
