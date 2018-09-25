/** Module Header **\
Project:        Toets C++
Auteur:         Danny van der Mee
Aanmaakdatum:   04/04/2018
Module naam:    Nepnieuws_Toets.cpp
*/

//Omschrijving:
// Toets C++ Nepnieuws
// Main CPP file

// Basis declaratie
#include <iostream>
#include <string>
#include "nepJournalist.h"

// Delcaratie van STD zodat ik dit niet opnieuw hoef te gebruiken bij iedere regel van CIN/COUT
using namespace std;

// Declaratie
class nepNieuws {
    // Attributen
private:
    string datum;
private:
    string mediabron;
private:
    string onderwerp;

    // Prototype
public:
    void invoerenNepNieuws();

    void weergevenNepNieuws();
};

// Delcaratie van de class zelf, zodat deze afkorting gebruikt kan worden
nepNieuws npw;

// Implentatie

void nepNieuws::invoerenNepNieuws() {
    cout << "Voer de datum in: \n";
    cin >> npw.datum;
    cout << "Voer de mediabron in: \n";
    cin >> npw.mediabron;
    cout << "Voer het onderwerp in: \n";
    cin >> npw.onderwerp;
}

void nepNieuws::weergevenNepNieuws() {
    cout << "Op de datum " << npw.datum << " publiceerd nepjournalist " << npj.nepJouranlistNummer
         << " in de mediabron " << npw.mediabron << " nepnieuws over het onderwerp "
         << npw.onderwerp
         << "\n";
};