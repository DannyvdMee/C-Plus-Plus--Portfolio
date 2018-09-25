//Moduleheader
//Opdracht:       <Toets Periode 7 Herkansing>
//Auteur:         <Danny van der Mee>
//Aanmaakdatum:   <18-04-2018>
//Bestandsnaam:   Gemeente.h

#include <iostream>
#include <string>

using namespace std;

//Declaratie
class Gemeente{
private:

public:
    string gemeenteNaam;

    //Prototype
    void InvoerenGemeenteNaam();
};

//Implementatie
void Gemeente::InvoerenGemeenteNaam() {
    //Initialiseren
    cout << "Voer uw gemeente naam in: ";
    cin >> gemeenteNaam;
}