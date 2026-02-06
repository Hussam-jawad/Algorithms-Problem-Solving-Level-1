// Programm für einen Getränkeautomaten mit Feedback-Funktion
// Der Benutzer wählt ein Getränk, gibt Geld ein, bekommt ggf. Wechselgeld
// und kann angeben, ob ihm das Getränk gefallen hat
// Nach jedem Kauf wird gefragt, ob der Benutzer ein weiteres Getränk kaufen möchte

#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Struktur zur Darstellung eines Getränks
struct Drink
{
    string name;   // Name des Getränks
    double price;  // Preis des Getränks
};

// Funktion zur Auswahl eines Getränks durch den Benutzer
Drink GetDrinkChoice()
{
    string input;
    vector<Drink> menu = { {"Cola", 2.0}, {"Fanta", 1.5}, {"Water", 1.0} };

    while (true)
    {
        cout << "Please choose a drink (Cola / Fanta / Water): ";
        cin >> input;

        // Prüft, ob das Getränk im Menü ist
        for (auto g : menu)
        {
            if (g.name == input)
                return g;
        }

        cout << "Unknown drink! Please try again.\n";
    }
}

// Funktion zur Eingabe des Geldbetrags
double GetMoney()
{
    double money;
    cout << "Please enter the money: ";
    cin >> money;

    return money;
}

// Funktion zur Überprüfung der Zahlung
bool CheckPayment(Drink g, double money)
{
    if (money >= g.price)
    {
        cout << "Thank you for your purchase! Change: "
            << (money - g.price) << " Euro\n";
        return true;
    }
    else
    {
        cout << "Not enough money! You need "
            << (g.price - money) << " more Euro.\n";
        return false;
    }
}

// Funktion, um das Feedback des Benutzers einzuholen
void AskIfLike(Drink g)
{
    char Like;

    cout << "Do you like your " << g.name << "? (y/n): ";
    cin >> Like;

    if (Like == 'y' || Like == 'Y')
        cout << "Great! Enjoy your drink!\n";
    else
        cout << "Oh! Maybe next time you will like it more.\n";
}

// Funktion, um zu prüfen, ob der Benutzer weitermachen möchte
bool AskContinue()
{
    char again;
    cout << "Do you want to buy another drink? (y/n): ";
    cin >> again;

    return (again == 'y' || again == 'Y');
}

// Hauptfunktion des Automaten
void start()
{
    bool running = true;

    while (running)
    {
        Drink drink = GetDrinkChoice();  // Getränk auswählen
        double money = GetMoney();        // Geld eingeben
        if (CheckPayment(drink, money))  // Zahlung prüfen
        {
            AskIfLike(drink);             // Feedback einholen
        }

        running = AskContinue();         // Prüfen, ob Benutzer weitermachen möchte
    }

    cout << "Machine stopped. Goodbye!\n";
}

int main()
{
    start();

    system("pause>0");
    return 0;
}
