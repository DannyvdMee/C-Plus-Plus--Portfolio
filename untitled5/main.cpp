//Moduleheader
//Opdracht:       <Toets Periode 7 Herkansing>
//Auteur:         <Danny van der Mee>
//Aanmaakdatum:   <18-04-2018>
//Bestandsnaam:   main.cpp


// NOTE: CLion heeft geen stdafx.h nodig om te kunnen builden
// Ik heb het, omdat het niet nodig is niet toegevoegd om ervoor te zorgen dat alles soepel blijft draaien en preformace
// Wel weet ik dat het bij Visual Studio wel toegevoegd moet worden

#include "Gemeente.h"
#include "Drone.h"
#include "Boer.h"
#include "Smartfarming.h"

// UI
int main() {
    // Constructie
    Gemeente gemeente;
    Drone drone;
    Boer boer;
    Smartfarming smartfarming;

    // Functieaanroep
    gemeente.InvoerenGemeenteNaam();
    drone.InvoerenDroneNummer();
    boer.InvoerenBoer();
    smartfarming.InvoerenSmartfarming();

    boer.WeergevenBoer(gemeente);
    smartfarming.WeergevenSmartfarming(boer, drone);

// System pause heb ik toegevoegd maar wel gecomment, omdat CLion hier niet mee om kan gaan omdat het out-dated is!
// Zie: https://stackoverflow.com/questions/1107705/systempause-why-is-it-wrong
// Ik weet dat je dit wel bij Visual Studio kan toevoegen, maar hier heeft het een error en ziet het resultaat er niet zoals gewenst uit.
//
//    system("pause");
//    return 0;
}