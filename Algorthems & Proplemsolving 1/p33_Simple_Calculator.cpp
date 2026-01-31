// Einfacher Taschenrechner
// Liest zwei Zahlen und einen Rechenoperator ein
// Führt die gewünschte Rechenoperation aus und gibt das Ergebnis aus

#include <iostream>
#include <string>

using namespace std;

// Enum zur Definition der möglichen Rechenoperationen
enum enOperationType
{
	Add = '+', Subtract = '-', Multiply = '*', Divide = '/'
};

// Liest eine Zahl vom Benutzer ein
float ReadNumber(string Message)
{
	float Number = 0;

	cout << Message << endl;
	cin >> Number;

	return Number;
}

// Liest den gewünschten Rechenoperator vom Benutzer ein
enOperationType ReadOpType()
{
	char Ot = '+';

	cout << "Please enter Opeeration Type (+,-,*,/)?\n";
	cin >> Ot;

	return (enOperationType)Ot;
}

// Führt die Berechnung basierend auf dem gewählten Operator aus
float CalCulate(float Number1, float Number2, enOperationType OpType)
{
	switch (OpType)
	{
	case enOperationType::Add:
		return Number1 + Number2;
	case enOperationType::Subtract:
		return Number1 - Number2;
	case enOperationType::Multiply:
		return Number1 * Number2;
	case enOperationType::Divide:
		return Number1 / Number2;
	default:
		return Number1 + Number2;
	}
}

int main()
{
	// Einlesen der beiden Zahlen
	float Number1 = ReadNumber("Please enter The first Number?");
	float Number2 = ReadNumber("Please enter The second Number?");

	// Einlesen der Rechenoperation
	enOperationType OpType = ReadOpType();

	// Berechnung und Ausgabe des Ergebnisses
	cout << endl << "Result = " << CalCulate(Number1, Number2, OpType) << endl;

	return 0;
}
