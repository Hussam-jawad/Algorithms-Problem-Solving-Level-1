// Programm zur Berechnung der Provision basierend auf dem Gesamtumsatz
// Liest den Gesamtumsatz ein, bestimmt den Provisionssatz
// und berechnet anschlieﬂend die gesamte Provision

#include <iostream>
#include <string>

using namespace std;

// Liest den Gesamtumsatz vom Benutzer ein
int ReadTotalSale()
{
	int TotalSale = 0;

	cout << "Please enter a Total Sale ? " << endl;
	cin >> TotalSale;

	return TotalSale; // R¸ckgabe des eingegebenen Gesamtumsatzes
}

// Bestimmt den Provisionsprozentsatz basierend auf dem Gesamtumsatz
// TotalSales: Gesamtumsatz
float GetComissionPercentage(float TotalSales)
{
	if (TotalSales >= 1000000)
		return 0.01;   // 1% Provision
	else if (TotalSales >= 500000)
		return 0.02;   // 2% Provision
	else if (TotalSales >= 100000)
		return 0.03;   // 3% Provision
	else if (TotalSales >= 50000)
		return 0.05;   // 5% Provision
	else
		return 0.00;   // Keine Provision
}

// Berechnet die gesamte Provision
// TotalSales: Gesamtumsatz
float CalculateTotalComission(float TotalSales)
{
	// Provision = Gesamtumsatz * Provisionsprozentsatz
	return GetComissionPercentage(TotalSales) * TotalSales;
}

int main()
{
	// Einlesen des Gesamtumsatzes
	float TotaleSale = ReadTotalSale();

	// Ausgabe des Provisionsprozentsatzes
	cout << "Comission Percentage = "
		<< GetComissionPercentage(TotaleSale) << endl;

	// Ausgabe der gesamten Provision
	cout << "Total Comission = " << CalculateTotalComission(TotaleSale);

	return 0;
}
