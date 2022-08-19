#ifndef PLIKZADRESATAMI_H
#define PLIKZADRESATAMI_H

#include <iostream>
#include <vector>
#include <fstream>
#include <cstdlib>

#include "Adresat.h"
#include "MetodyPomocnicze.h"
#include "PlikTekstowy.h"

using namespace std;

class PlikZAdresatami : public PlikTekstowy
 {
    string nazwaTymczasowegoPlikuZAdresatami = "Adresaci_tymczasowo.txt";
    int idOstatniegoAdresata;

    int pobierzIdUzytkownikaZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
    Adresat pobierzDaneAdresata(string daneAdresataOddzielonePionowymiKreskami);
    int pobierzIdAdresataZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
    string zamienDaneAdresataNaLinieZDanymiOddzielonymiPionowymiKreskami(Adresat adresat);
    void usunPlik(string nazwaPlikuZRozszerzeniem);
    void zmienNazwePliku(string staraNazwa, string nowaNazwa);

 public:
    PlikZAdresatami(string nazwaPliku) : PlikTekstowy(nazwaPliku)
    {
    idOstatniegoAdresata = 0;
    }
    vector <Adresat> wczytajAdresatowZalogowanegoUzytkownikaZPliku( int idUzytkownika);
    bool dopiszAdresataDoPliku(Adresat adresat);

    int pobierzIdOstatniegoAdresata();
    void usunWybranaLinieWPliku(int idUsunietegoAdresata);
    void pobierzZPlikuIdOstatniegoAdresata();
    void zaktualizujDaneWybranegoAdresata(Adresat adresat);
    void edytujWybranaLinieWPliku(Adresat adresat, int idEdytowanegoAdresata);
 };

#endif
