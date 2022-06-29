#ifndef ADRESATMENEDZER_H
#define ADRESATMENEDZER_H

#include <iostream>
#include <vector>
#include <windows.h>
#include <fstream>
#include <sstream>

#include "PlikZAdresatami.h"

using namespace std;

class AdresatMenedzer
 {
    int idOstatniegoAdresata = 0;
    vector <Adresat> adresaci;
    PlikZAdresatami plikZAdresatami;
    UzytkownikMenedzer uzytkownikMenedzer;
    //int idZalogowanegoUzytkownika = uzytkownikMenedzer.pobierzIdZalogowanegoUzytkownika();

    Adresat podajDaneNowegoAdresata();



public:
    //AdresatMenedzer(string nazwaPlikuZAdresatami):plikZAdresatami(nazwaPlikuZAdresatami){};
    AdresatMenedzer();
    int pobierzIdOstatniegoAdresata();
    void ustawIdOstatniegoAdresata (int noweId);
    int dodajAdresata();
    void wczytajAdresatowZalogowanegoUzytkownikaZPliku();
    void wyswietlWszystkichAdresatow();
    void czyszczenieWektora();


 };
#endif

