#include <iostream>

int main() {
    int leerlingNummer;
    char voornaam[20] = "";
    char opleidingsNaam[100] = "";
    char klasNaam[10] = "";

    std::cout << "Voer je leerlingnummer in: \n";

    std::cin >> leerlingNummer;

    std::cout << "Voer je voornaam in: \n";

    std::cin >> voornaam;

    std::cout << "Voer je opleidingsnaam in: \n";

    std::cin >> opleidingsNaam;

    std::cout << "Voer je klas naam in: \n";

    std::cin >> klasNaam;

    std::cout << "\n" << "Jouw ingevoerde leerlinggevens bestaan uit:" << "\n"
              << "Leerling " << voornaam << " met leerlingnummer " << leerlingNummer
              << " staat ingeschreven bij opleiding" << "\n"
              << opleidingsNaam << "\n"
              << "Leerlingnumer " << leerlingNummer << " zit in klas " << klasNaam;

}