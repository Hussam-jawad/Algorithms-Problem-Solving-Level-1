// Programm zur Berechnung der monatlichen Kreditrate
// Der Benutzer gibt den Kreditbetrag und die Anzahl der Monate ein

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

// Liest eine positive Zahl vom Benutzer ein
// Überprüft zusätzlich, ob die Eingabe gültig ist (z. B. keine Buchstaben)
int ReadPositiveNumber_vlid_R(string Message)
{
	int Number = 0;

	do
	{
		cout << Message;
		cin >> Number;

		// Prüfung auf ungültige Eingaben (Input-Fehler)
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

// Berechnet die monatliche Rate
// Formel: Kreditbetrag / Anzahl der Monate
float MonathlyInStallment(float LoanAmount, float MonthlyInstallment)
{
	return (float)LoanAmount / MonthlyInstallment;
}

int main()
{
	// Einlesen des Kreditbetrags
	float LoanAmount = ReadPositiveNumber_vlid_R("Please enter loan Amount ?");

	// Einlesen der Anzahl der Monate
	float HowManyMonths = ReadPositiveNumber_vlid_R("How Many Monaths ? ");

	// Ausgabe der monatlichen Rate
	cout << "\nMonathly Installment = "
		<< MonathlyInStallment(LoanAmount, HowManyMonths);
	cout << endl;

	system("pause>0");

	return 0;
}
