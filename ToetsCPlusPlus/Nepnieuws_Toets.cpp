/** Module Header **\
Project:        Toets C++
Auteur:         Danny van der Mee
Aanmaakdatum:   04/04/2018
Module naam:    Nepnieuws_Toets.cpp
*/

//Omschrijving:
// Toets C++ Nepnieuws
// Main CPP file

#include <iostream>
#include "nepnieuws.h"

// Delcaratie van STD zodat ik dit niet opnieuw hoef te gebruiken bij iedere regel van CIN/COUT
using namespace std;

int main() {

    npj.invoerenNepJournalist();

    npj.weergevenNepJournalist();

    npw.invoerenNepNieuws();

    npw.weergevenNepNieuws();
}

