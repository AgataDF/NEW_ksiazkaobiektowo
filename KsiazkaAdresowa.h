#ifndef KSIAZKAADRESOWA_H
#define KSIAZKAADRESOWA_H

#include <iostream>

#include "UzytkownikMenedzer.h"
#include "AdresatMenedzer.h"

using namespace std;

class KsiazkaAdresowa
 {
     UzytkownikMenedzer uzytkownikMenedzer;
     AdresatMenedzer adresatMenedzer;
     //void wczytajAdresatowZalogowanegoUzytkownikaZPliku();
     int idUzytkownika = 0;

 public:

     KsiazkaAdresowa(string nazwaPlikuZUzytkownikami, string nazwaPlikuZAdresatami):uzytkownikMenedzer(nazwaPlikuZUzytkownikami),adresatMenedzer(nazwaPlikuZAdresatami)
    {
        uzytkownikMenedzer.wczytajUzytkownikowZPliku();
    };
     void rejestracjaUzytkownika();
     void wypiszWszystkichUzytkownikow();
     void logowanieUzytkownika();
     void wylogowanieUzytkownika();
     void zmianaHasla();
     char wybierzOpcjeZMenuUzytkownika();
     char wybierzOpcjeZMenuGlownego();
     int wczytajIdZalogowanegoUzytkownika();
     void ustawIdZalogowanegoUzytkownika();
     void dodajAdresata();

     void wypiszWszystkichAdresatowZalogowanegoUzytkownika();

 };
#endif
