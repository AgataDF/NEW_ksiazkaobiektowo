#ifndef PLIKZADRESATAMI_H
#define PLIKZADRESATAMI_H

#include <iostream>
#include <vector>
#include <fstream>
#include <cstdlib>

#include "Adresat.h"
#include "MetodyPomocnicze.h"

using namespace std;

class PlikZAdresatami
 {
    const string NAZWA_PLIKU_Z_ADRESATAMI;
    string nazwaTymczasowegoPlikuZAdresatami = "Adresaci_tymczasowo.txt";
    int idOstatniegoAdresata;
    int idUsunietegoAdresata;

    int pobierzIdUzytkownikaZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
    Adresat pobierzDaneAdresata(string daneAdresataOddzielonePionowymiKreskami);
    int pobierzIdAdresataZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
    bool czyPlikJestPusty(fstream &plikTekstowy);
    string zamienDaneAdresataNaLinieZDanymiOddzielonymiPionowymiKreskami(Adresat adresat);
    int podajIdWybranegoAdresata();
    int zwrocNumerLiniiSzukanegoAdresata();
    void usunWybranaLinieWPliku(int numerUsuwanejLinii);
    void usunPlik(string nazwaPlikuZRozszerzeniem);
    void zmienNazwePliku(string staraNazwa, string nowaNazwa);
    int pobierzZPlikuIdOstatniegoAdresata();
    void podajIdOstatniegoAdresataPoUsunieciuWybranegoAdresata();

 public:
    PlikZAdresatami(string nazwaPlikuZAdresatami):NAZWA_PLIKU_Z_ADRESATAMI(nazwaPlikuZAdresatami)
    {
    idOstatniegoAdresata = 0;
    idUsunietegoAdresata = 0;
    };
    vector <Adresat> wczytajAdresatowZalogowanegoUzytkownikaZPliku( int idUzytkownika);
    bool dopiszAdresataDoPliku(Adresat adresat);
    int pobierzIdOstatniegoAdresata();
    vector <Adresat> usunAdresata(vector <Adresat> adresaci);

 };

#endif
