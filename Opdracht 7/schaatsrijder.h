//
// Created by Danny on 02-Mar-18.
//

#include "11StedenTocht.h"

// prototype

void invoerenSchaatsrijder();
void returnSchaatsrijder();
char schaatsrijder[20];

// Implentatie

void invoerenSchaatsrijder(){
    std::cout << "Voer schaatsrijder naam in: \n";
    std::cin >> schaatsrijder;
}

void weergevenInformatie(){
    cout << "Schaatsrijder: " << schaatsrijder << " heeft de elfstedentocht afgelegd in " << totaalUren << " uur en " << totaalOverigeMinuten << " minuten";
}