#include <iostream>

// Declaratie
int leerlingNummer;
char voornaam[20] = "";
char opleidingsNaam[100] = "";
char klasNaam[10] = "";

//Prototype
void invoerenLeerling();

void weergevenLeerling();

// Implentatie

void invoerenLeerling() {
    // Cout stands for output, so in this case: "Voer je... in" will be shown to the user
    std::cout << "Voer je leerlingnummer in: \n";

    // Cin stands for input, now the system waits until the user has given text or numbers
    std::cin >> leerlingNummer;

    std::cout << "Voer je voornaam in: \n";

    std::cin >> voornaam;

    std::cout << "Voer je opleidingsnaam in: \n";

    std::cin >> opleidingsNaam;

    std::cout << "Voer je klas naam in: \n";

    std::cin >> klasNaam;
}

void weergevenLeerling() {
    // Everything is combined and displayed back to the user.
    std::cout << "\n" << "Jouw ingevoerde leerlinggevens bestaan uit:" << "\n"
              << "Leerling " << voornaam << " met leerlingnummer " << leerlingNummer
              << " staat ingeschreven bij opleiding" << "\n"
              << opleidingsNaam << "\n"
              << "Leerlingnumer " << leerlingNummer << " zit in klas " << klasNaam;
}

int main() {
    // Functie aanroepen
    invoerenLeerling();

    weergevenLeerling();
}

