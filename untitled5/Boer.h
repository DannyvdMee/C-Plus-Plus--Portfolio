//Moduleheader
//Opdracht:       <Toets Periode 7 Herkansing>
//Auteur:         <Danny van der Mee>
//Aanmaakdatum:   <18-04-2018>
//Bestandsnaam:   Boer.h

#include <iostream>
#include <string>

using namespace std;

bool error;

//Declaratie
class Boer {
private:
    string boer_gsch_gnm_email[3];

public:
    int bsn;

    //Prototype
    void InvoerenBoer();

    void WeergevenBoer(Gemeente gemeente);
};

//Implementatie
void Boer::InvoerenBoer() {
    //Initialiseren
    cout << "Voer uw BSN in: ";
    cin >> bsn;

    cout << "Voer uw geslacht in: ";
    cin >> boer_gsch_gnm_email[0];

    // Kijken of geslacht wel M of V is
    if (boer_gsch_gnm_email[0] != "M" || boer_gsch_gnm_email[0] != "V") {
        error = true;
    }

    // Als fout gevonden is blijft hij het zo lang vragen todat fout voorbij is
    if (error) {
        while (error) {
            cout << "Foutief geslacht, voer een nieuw geslacht in: ";
            cin >> boer_gsch_gnm_email[0];
            if (boer_gsch_gnm_email[0] == "M" || boer_gsch_gnm_email[0] == "V") {
                error = false;
            }
        }
    }

    cout << "Voer uw email in: ";
    cin >> boer_gsch_gnm_email[1];
}

void Boer::WeergevenBoer(Gemeente Gemeente) {

    // Toekenning
    boer_gsch_gnm_email[2] = Gemeente.gemeenteNaam;

    cout << "Boer " << bsn << " van het geslacht " << boer_gsch_gnm_email[0] << " en email " << boer_gsch_gnm_email[1]
         << " woont in de gemeente " << boer_gsch_gnm_email[2] << "\n \n";

}