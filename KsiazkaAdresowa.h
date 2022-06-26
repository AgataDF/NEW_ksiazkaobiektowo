#ifndef KSIAZKAADRESOWA_H
#define KSIAZKAADRESOWA_H

#include <iostream>

#include "UzytkownikMenedzer.h"

using namespace std;

class KsiazkaAdresowa
 {
     UzytkownikMenedzer uzytkownikMenedzer;

 public:
     KsiazkaAdresowa();
     void rejestracjaUzytkownika();
     void wypiszWszystkichUzytkownikow();
     void logowanieUzytkownika();
     void wylogowanieUzytkownika();
     void zmianaHasla();
     char wybierzOpcjeZMenuUzytkownika();
     char wybierzOpcjeZMenuGlownego();
     int wczytajIdZalogowanegoUzytkownika();
     void nadajIdZalogowanegoUzytkownika(int noweId);

 };
#endif
