//Moduleheader
//Opdracht:       <Toets Periode 7 Herkansing>
//Auteur:         <Danny van der Mee>
//Aanmaakdatum:   <18-04-2018>
//Bestandsnaam:   Smartfarming.h

#include <iostream>
#include <string>

using namespace std;

//Declaratie
class Smartfarming{
private:
    int bsn;
    int droneNummer;
    string datum;

public:

    void InvoerenSmartfarming();
    void WeergevenSmartfarming(Boer boer, Drone drone);
};

//Implementatie
void Smartfarming::InvoerenSmartfarming() {
    //Initialiseren
    cout << "Voer de datum in waarop de boer heeft gewerkt: ";
    cin >> datum;
}

void Smartfarming::WeergevenSmartfarming(Boer Boer, Drone Drone) {

    // Toekenning
    bsn = Boer.bsn;
    droneNummer = Drone.droneNummer;

    cout << "Boer " << bsn << " werkt op de datum " << datum << " met drone " << droneNummer;

}