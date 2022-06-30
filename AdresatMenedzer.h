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

    Adresat podajDaneNowegoAdresata(int idUzytkownika);

public:
    AdresatMenedzer(string nazwaPlikuZAdresatami):plikZAdresatami(nazwaPlikuZAdresatami){};

    int pobierzIdOstatniegoAdresata();
    void ustawIdOstatniegoAdresata (int noweId);
    int dodajAdresata(int idUzytkownika);
    void wczytajAdresatowZalogowanegoUzytkownikaZPliku(int idUzytkownika);
    void wyswietlWszystkichAdresatow();
    void czyszczenieWektora();


 };
#endif

