#ifndef PLIKZADRESATAMI_H
#define PLIKZADRESATAMI_H

#include <iostream>
#include <vector>
#include <fstream>
#include <cstdlib>

#include "Adresat.h"
#include "MetodyPomocnicze.h"
#include "UzytkownikMenedzer.h"

using namespace std;

class PlikZAdresatami
 {
     string nazwaPlikuZAdresatami = "Adresaci.txt";
     string nazwaTymczasowegoPlikuZAdresatami = "Adresaci_tymczasowo.txt";
     UzytkownikMenedzer uzytkownikMenedzer;
     int idZalogowanegoUzytkownika = uzytkownikMenedzer.pobierzIdZalogowanegoUzytkownika();

     int pobierzIdUzytkownikaZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
     Adresat pobierzDaneAdresata(string daneAdresataOddzielonePionowymiKreskami);
     int pobierzIdAdresataZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
     bool czyPlikJestPusty(fstream &plikTekstowy);
     string zamienDaneAdresataNaLinieZDanymiOddzielonymiPionowymiKreskami(Adresat adresat);

 public:
    // PlikZAdresatami(string NAZWAPLIKUZADRESATAMI):nazwaPlikuZAdresatami(NAZWAPLIKUZADRESATAMI){};
     int wczytajAdresatowZalogowanegoUzytkownikaZPliku(vector <Adresat> &adresaci);
     void dopiszAdresataDoPliku(Adresat adresat);

 };

#endif
