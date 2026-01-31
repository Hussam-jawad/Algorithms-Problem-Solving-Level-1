// Programm zur Berechnung des Gesamtbetrags nach Servicegebühr und Steuer
// Der Benutzer gibt den ursprünglichen Rechnungsbetrag ein
// Das Programm berechnet den Endbetrag inklusive Servicegebühr und Verkaufssteuer

#include <iostream>
#include <string>

using namespace std;

// Liest eine positive Zahl vom Benutzer ein
// Die Eingabe wird so lange wiederholt, bis eine Zahl größer als 0 eingegeben wird
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

// Berechnet den Gesamtbetrag nach Hinzufügen der Servicegebühr und der Steuer
// Zuerst wird eine Servicegebühr von 10% hinzugefügt
// Anschließend wird eine Verkaufssteuer von 16% berechnet
float TotalBillAfterServiceAndTax(float TotalBill)
{
	TotalBill = TotalBill * 1.1;
	TotalBill = TotalBill * 1.16;

	return TotalBill;
}

int main()
{
	// Liest den ursprünglichen Rechnungsbetrag vom Benutzer ein
	float TotalBill = ReadPositiveNumber("Please enter Total Bill?");

	cout << endl;

	// Gibt den ursprünglichen Rechnungsbetrag aus
	cout << "Total Bill = " << TotalBill << endl;

	// Berechnet und gibt den Endbetrag nach Servicegebühr und Steuer aus
	cout << "Total Bill After Service Fee and Sales Tax = "
		<< TotalBillAfterServiceAndTax(TotalBill) << endl;

	return 0;
}
