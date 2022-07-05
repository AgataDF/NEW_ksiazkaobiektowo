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

     int pobierzIdUzytkownikaZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
     Adresat pobierzDaneAdresata(string daneAdresataOddzielonePionowymiKreskami);
     int pobierzIdAdresataZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
     bool czyPlikJestPusty(fstream &plikTekstowy);
     string zamienDaneAdresataNaLinieZDanymiOddzielonymiPionowymiKreskami(Adresat adresat);

 public:
     PlikZAdresatami(string nazwaPlikuZAdresatami):NAZWA_PLIKU_Z_ADRESATAMI(nazwaPlikuZAdresatami)
     {
     idOstatniegoAdresata = 0;
     };
     vector <Adresat> wczytajAdresatowZalogowanegoUzytkownikaZPliku( int idUzytkownika);
     bool dopiszAdresataDoPliku(Adresat adresat);
     int pobierzIdOstatniegoAdresata();

 };

#endif
