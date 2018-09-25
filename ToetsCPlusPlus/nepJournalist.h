/** Module Header **\
Project:        Toets C++
Auteur:         Danny van der Mee
Aanmaakdatum:   04/04/2018
Module naam:    Nepnieuws_Toets.cpp
*/

//Omschrijving:
// Toets C++ Nepnieuws
// NepJournalist header file

// Basis declaratie

#include <iostream>
#include <string>


// Delcaratie van STD zodat ik dit niet opnieuw hoef te gebruiken bij iedere regel van CIN/COUT
using namespace std;

// Declaratie
class nepJournalist {
    // Attributen
private:
    string nepJournalistNaam;
public:
    string nepJouranlistNummer;
private:
    string geslacht;

    // Prototype
public:
    void invoerenNepJournalist();

    void weergevenNepJournalist();
};

// Delcaratie van de class zelf, zodat deze afkorting gebruikt kan worden
nepJournalist npj;

// Implentatie

void nepJournalist::invoerenNepJournalist() {
    cout << "Voer de naam in: \n";
    cin >> npj.nepJournalistNaam;
    cout << "Voer het journalistnummer in: \n";
    cin >> npj.nepJouranlistNummer;
    cout << "Voer het geslacht in: \n";
    cin >> npj.geslacht;
}

void nepJournalist::weergevenNepJournalist() {
    cout << "Nepjournalist " << npj.nepJournalistNaam << " van het geslacht " << npj.geslacht
         << " staat geregistreerd onder het nepjournalistnummer "
         << npj.nepJouranlistNummer
         << "\n";
};