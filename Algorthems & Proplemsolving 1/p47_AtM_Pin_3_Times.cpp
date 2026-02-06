// Programm zur PIN-Code-Überprüfung mit maximalen Versuchen
// Der Benutzer hat nur 3 Versuche, den richtigen PIN einzugeben
// Bei erfolgreichem Login wird der Kontostand angezeigt
// Bei zu vielen Fehlversuchen wird die Karte als gesperrt angezeigt

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

// Führt den Login-Vorgang mit maximal 3 Versuchen durch
// Gibt true zurück, wenn der PIN-Code korrekt ist
bool Login()
{
	string Pincode;
	int counter = 3;

	do
	{
		// Verringert die Anzahl der verbleibenden Versuche
		counter--;

		// PIN-Code einlesen
		Pincode = ReadPinCode();

		// Prüfen, ob der PIN korrekt ist
		if (Pincode == "1234")
			return 1;
		else
		{
			// Bildschirm rot bei falschem PIN
			system("color 4F");

			// Fehlermeldung mit verbleibender Anzahl der Versuche
			cout << "\nWrong PIN, you have " << counter << " More tries!\n";
		}

	} while (counter >= 1 && Pincode != "1234");

	// Rückgabe false bei zu vielen Fehlversuchen
	return 0;
}

int main()
{
	// Prüft den Login-Status
	if (Login())
	{
		// Bildschirm grün bei erfolgreichem Login
		system("color 2F");

		// Anzeige des Kontostands
		cout << "\nYour account balance is " << 7500 << "\n";
	}
	else
	{
		// Meldung bei gesperrter Karte
		cout << "\nYour card blocked, call the bank for help.\n";
	}

	system("pause>0");

	return 0;
}
