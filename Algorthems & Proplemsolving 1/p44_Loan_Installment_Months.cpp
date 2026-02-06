// Programm zur Berechnung der benötigten Monate zur Rückzahlung eines Kredits
// Der Benutzer gibt den Kreditbetrag und die monatliche Rate ein

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

// Liest eine positive Zahl vom Benutzer ein
// Überprüft zusätzlich, ob die Eingabe gültig ist (kein Buchstabe oder ungültiger Wert)
int ReadPositiveNumber_vlid_R(string Message)
{
	int Number = 0;

	do
	{
		cout << Message;
		cin >> Number;

		// Überprüfung auf ungültige Eingaben (z. B. Buchstaben)
		while (cin.fail())
		{
			cin.clear();
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			cout << "Invalid Number, Enter a valid one !!" << endl;

			cin >> Number;
		}

	} while (Number <= 0);

	return Number;
}

// Berechnet die Anzahl der Monate zur Rückzahlung des Kredits
// Formel: Kreditbetrag / monatliche Rate
float TotalMonths(float LoanAmount, float MonthlyInstallment)
{
	return (float)LoanAmount / MonthlyInstallment;
}

int main()
{
	// Einlesen des Kreditbetrags
	float LoanAmount = ReadPositiveNumber_vlid_R("Please enter loan Amount ?");

	// Einlesen der monatlichen Rate
	float MonthlyInStallment = ReadPositiveNumber_vlid_R("Please enter Monthly Installment ? ");

	// Ausgabe der benötigten Monate zur vollständigen Rückzahlung
	cout << "\nTotal Months to pay = " << TotalMonths(LoanAmount, MonthlyInStallment);
	cout << endl;

	system("pause>0");

	return 0;
}
