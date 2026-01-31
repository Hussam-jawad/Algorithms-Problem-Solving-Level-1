// Programm zur Berechnung des Rückgeldes (Restbetrag)
// Der Benutzer gibt den Rechnungsbetrag und den bezahlten Betrag ein
// Das Programm berechnet und gibt den verbleibenden Betrag aus

#include <iostream>
#include <string>

using namespace std;

// Liest eine positive Zahl vom Benutzer mit einer übergebenen Meldung ein
// Die Eingabe wird wiederholt, bis eine Zahl größer als 0 eingegeben wird
float ReadPositiveNumber(string Message)
{
	float Number;
	do
	{
		cout << Message << endl;
		cin >> Number;

	} while (Number <= 0);

	return Number;
}

// Berechnet den Restbetrag (Rückgeld)
// Rückgeld = bezahlter Betrag - Rechnungsbetrag
float CalculateRemainder(float TotalBill, float TotalCashPaid)
{
	float Remainder;

	Remainder = TotalCashPaid - TotalBill;

	return Remainder;
}

int main()
{
	// Liest den Gesamtbetrag der Rechnung ein
	float TotalBill = ReadPositiveNumber("Please enter Total Bill ? ");

	// Liest den vom Kunden bezahlten Betrag ein
	float TotalCashPaid = ReadPositiveNumber("Please enter Total Csh Paid ? ");

	cout << endl;

	// Gibt die eingegebenen Werte aus
	cout << "Total bill = " << TotalBill << endl;
	cout << "Total Cash Paid = " << TotalCashPaid << endl;

	cout << "**************************\n";

	// Berechnet und gibt den Restbetrag aus
	cout << "Reaminder = " << CalculateRemainder(TotalBill, TotalCashPaid) << endl;

	return 0;
}
