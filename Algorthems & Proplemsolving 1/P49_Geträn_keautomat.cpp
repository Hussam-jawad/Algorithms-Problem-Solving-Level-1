// Programm für einen Getränkeautomaten
// Der Benutzer wählt ein Getränk, gibt Geld ein und bekommt ggf. Wechselgeld
// Nach jedem Kauf wird gefragt, ob der Benutzer ein weiteres Getränk kaufen möchte

#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Struktur zur Darstellung eines Getränks
struct Drink {
    string name;   // Name des Getränks
    double price;  // Preis des Getränks
};

// Funktion zur Auswahl eines Getränks durch den Benutzer
Drink GetDrinkChoice() {
    string input;
    // Menü mit verfügbaren Getränken und Preisen
    vector<Drink> menu = { {"Cola", 2.0}, {"Fanta", 1.5}, {"Water", 1.0} };

    while (true) {
        cout << "Please choose a drink (Cola/Fanta/Water): ";
        cin >> input;

        // Überprüft, ob das eingegebene Getränk im Menü ist
        for (auto g : menu) {
            if (g.name == input)
                return g;
        }
        cout << "Unknown drink! Please try again.\n";
    }
}

// Funktion zur Eingabe des Geldbetrags durch den Benutzer
double GetMoney() {
    double money;
    cout << "Please enter the money: ";
    cin >> money;
    return money;
}

// Funktion zur Überprüfung, ob genügend Geld eingegeben wurde
bool CheckPayment(Drink g, double money) {
    if (money >= g.price) {
        // Erfolgreiche Zahlung, Wechselgeld ausgeben
        cout << "Thank you for your purchase! Change: " << (money - g.price) << " Euro\n";
        return true;
    }
    else {
        // Nicht genügend Geld eingegeben
        cout << "Not enough money! You need " << (g.price - money) << " more Euro.\n";
        return false;
    }
}

// Funktion, um zu fragen, ob der Benutzer weitermachen möchte
bool AskContinue() {
    char again;
    cout << "Do you want to buy another drink? (y/n): ";
    cin >> again;
    return (again == 'y' || again == 'Y');
}

int main() {
    bool running = true;

    // Hauptschleife des Automaten
    while (running) {
        Drink drink = GetDrinkChoice();  // Getränk auswählen
        double money = GetMoney();       // Geld eingeben
        CheckPayment(drink, money);      // Zahlung prüfen
        running = AskContinue();         // Prüfen, ob Benutzer weitermachen möchte
    }

    // Beendet den Automaten
    cout << "Machine stopped. Goodbye!\n";
    system("pause>0");
    return 0;
}
