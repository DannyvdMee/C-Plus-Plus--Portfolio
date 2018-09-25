//
// Created by Danny on 02-Mar-18.
//
#include <iostream>
#include <string>

using namespace std;

// Declaratie
struct deelnemerStats {
    string deelnemer;
    int rugnummer;
    int chipnummer;
};

deelnemerStats dlnmr;

// Prototype
void invoerenDeelnemer();

void weergevenDeelnemer();

// Implentatie

void invoerenDeelnemer() {
    cout << "Voer de naam in: \n";
    cin >> dlnmr.deelnemer;
    cout << "Voer het rugnummer in: \n";
    cin >> dlnmr.rugnummer;
    cout << "Voer het chipnummer in: \n";
    cin >> dlnmr.chipnummer;
};

void weergevenDeelnemer() {
    cout << "Deelnemer " << dlnmr.deelnemer << " heeft het rugnummer " << dlnmr.rugnummer << " en het chipnummer " << dlnmr.chipnummer
         << "\n";
    cout << " Chipnummer " << dlnmr.chipnummer;
};