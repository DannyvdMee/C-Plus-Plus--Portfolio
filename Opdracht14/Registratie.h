//
// Created by Danny on 02-Mar-18.
//
#include <iostream>

using namespace std;

// Declaratie
struct registratie {
    int registratiePunt;
    int registratieTijd;
    int jaartal;
};

registratie rgstrt;

// Prototype
void invoerenRegistratie();

void weergevenRegistratie();

// Implentatie

void invoerenRegistratie() {
    cout << "Registratie van de deelnemer voor de NYCM";
    cout << "Voer het registratiepunt in: (In KM) \n";
    cin >> rgstrt.registratiePunt;
    cout << "Voer de registratietijd in: \n";
    cin >> rgstrt.registratieTijd;
    cout << "Voer het jaartal in: \n";
    cin >> rgstrt.jaartal;
};

void weergevenRegistratie() {
    cout << " registreert voor NYCM in het jaartal " << rgstrt.jaartal << " bij het registratiepunt "
         << rgstrt.registratiePunt << " met de registratietijd " << rgstrt.registratieTijd;
};