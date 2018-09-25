//Moduleheader
//Opdracht:       <Toets Periode 7 Herkansing>
//Auteur:         <Danny van der Mee>
//Aanmaakdatum:   <18-04-2018>
//Bestandsnaam:   Drone.h

#include <iostream>

using namespace std;

//Declaratie
class Drone{
private:

public:
    int droneNummer;

    //Prototype
    void InvoerenDroneNummer();
};

//Implementatie
void Drone::InvoerenDroneNummer() {
    //Initialiseren
    cout << "Voer uw drone nummer in: ";
    cin >> droneNummer;
}