// Programm zur erweiterten PIN-Code-Überprüfung mit Sicherheitsfrage
// Der Benutzer hat 3 Versuche, den PIN einzugeben
// Bei zu vielen Fehlversuchen kann die Lieblingsfarbe zur zusätzlichen Chance genutzt werden
// Bei erfolgreichem Login wird der Kontostand angezeigt
// Bei falscher Sicherheitsantwort wird die Karte gesperrt

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

// Liest den PIN-Code vom Benutzer ein
string ReadPinCode()
{
    string PinCode;
    cout << "Please enter Pin code: ";
    cin >> PinCode;
    return PinCode;
}

// Führt den Login mit PIN und optionaler Sicherheitsfrage durch
// Gibt true zurück, wenn Login erfolgreich ist
bool Login()
{
    string Pincode;
    int counter = 3;
    string Farbe;
    const string correctPin = "5678";
    const string correctFarbe = "blau";

    do
    {
        // Verringert die verbleibenden Versuche
        counter--;

        // PIN-Code einlesen
        Pincode = ReadPinCode();

        // Prüfen, ob der PIN korrekt ist
        if (Pincode == correctPin)
            return true;

        // Bildschirm rot bei falschem PIN
        system("color 4F");

        // Meldung mit verbleibender Anzahl an Versuchen
        cout << "\nWrong PIN, you have " << counter << " more tries!\n";

        // Sicherheitsfrage nach letzten Versuch
        if (counter == 0)
        {
            cout << "What is your Lieblingsfarbe? ";
            cin >> Farbe;

            // Prüfen, ob die Sicherheitsfrage korrekt beantwortet wurde
            if (Farbe == correctFarbe)
            {
                cout << "Correct answer! You have 1 more chance to enter PIN.\n";
                counter = 1;
            }
            else
            {
                // Falsche Sicherheitsantwort, Karte gesperrt
                return false;
            }
        }

    } while (counter >= 1);

    // Rückgabe false bei fehlgeschlagenem Login
    return false;
}

int main()
{
    // Prüft Login-Status
    if (Login())
    {
        // Bildschirm grün bei erfolgreichem Login
        system("color 2F");

        // Anzeige Kontostand
        cout << "\nYour account balance is 5000\n";
    }
    else
    {
        // Meldung bei gesperrter Karte
        cout << "\nYour card is blocked. Call the bank for help.\n";
    }

    system("pause>0");
    return 0;
}
