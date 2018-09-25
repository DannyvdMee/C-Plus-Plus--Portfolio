//
// Created by Danny on 02-Mar-18.
//
using namespace std;

// Declaratie
int sn;
int ij;
int sl;
int st;
int hi;
int w;
int b;
int ha;
int f;
int d;
int lf;
int l;


// Prototype
void weergevenElfstedentocht();

void invoerenTussenTijden();

void WeergevenDuurInUrenEnMinuten();

int optellenTussentijden();

// Implentatie

void weergevenElfstedentocht() {
    cout << "+*+*+*+*+*+*+ 11-Stedentocht +*+*+*+*+*+*+\n";
    cout << "*                                        *\n";
    cout << "+                                    d   +\n";
    cout << "*                                        *\n";
    cout << "+                 f                      +\n";
    cout << "*                                        *\n";
    cout << "+        ha                    l         +\n";
    cout << "*                                        *\n";
    cout << "+                b          sn           +\n";
    cout << "*                                        *\n";
    cout << "+       w                 ij             +\n";
    cout << "*                                        *\n";
    cout << "+     hi                                 +\n";
    cout << "*                                        *\n";
    cout << "+                          sl            +\n";
    cout << "*                                        *\n";
    cout << "+      st                                +\n";
    cout << "*                                        *\n";
    cout << "+*+*+*+*+*+*+*+*+*+**+*+*+*+*+*+*+*+*+*+*+\n\n";

    cout << "Volgorde schaatsroute: \n";

    cout << "Leeuwarden <l>, Sneek <sn>, Ijlst <ij>, Sloten <sl>, Stavoren <st>, \n Hindelopen <hi>, Workum <w>, "
            "Bolsward <b>, Harlingen <ha>, Franeker <f>, Dokkum <d>, Leeuwarden <l>\n\n\n";
}

void invoerenTussenTijden() {
    cout << "Leeuwarden, start: 0\n";
    cout << " \n Sneek:";
    cin >> sn;
    cout << " \n Ijlst:";
    cin >> ij;
    cout << " \n Sloten:";
    cin >> sl;
    cout << " \n Stavoren:";
    cin >> st;
    cout << " \n Hindelopen:";
    cin >> hi;
    cout << " \n Workum:";
    cin >> w;
    cout << " \n Bolsward:";
    cin >> b;
    cout << " \n Harlingen:";
    cin >> ha;
    cout << " \n Franeker:";
    cin >> f;
    cout << " \n Dokkum:";
    cin >> d;
    cout << " \n Leeuwarden, finish:";
    cin >> l;
}

// Variabelen aanmaken voor berekening
int totaalDuurTocht;
int totaalUren;
int totaalOverigeMinuten;
int alleTussenTijden;

int optellenTussentijden() {
    alleTussenTijden = sn + ij + sl + st + hi + w + b + ha + f + d + lf + l;
    return alleTussenTijden;
}

void BerekenenDuurInUrenEnMinuten(){
    totaalDuurTocht = optellenTussentijden();
    totaalUren = totaalDuurTocht / 60;
    totaalOverigeMinuten = totaalDuurTocht % 60;
}

