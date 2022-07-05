#ifndef UZYTKOWNIKMENEDZER_H
#define UZYTKOWNIKMENEDZER_H

#include <iostream>
#include <vector>
#include <windows.h>
#include <fstream>
#include <sstream>

#include "PlikZUzytkownikami.h"

using namespace std;

class UzytkownikMenedzer
 {
    PlikZUzytkownikami plikZUzytkownikami;
    vector <Uzytkownik> uzytkownicy;
    int idZalogowanegoUzytkownika;

    Uzytkownik podajDaneNowegoUzytkownika();
    int pobierzIdNowegoUzytkownika();
    bool czyIstniejeLogin(string login);


 public:
    UzytkownikMenedzer(string nazwaPlikuZUzytkownikami):plikZUzytkownikami(nazwaPlikuZUzytkownikami)
    {
        idZalogowanegoUzytkownika = 0;
        uzytkownicy = plikZUzytkownikami.wczytajUzytkownikowZPliku();
    };
    void rejestracjaUzytkownika();
    void wypiszWszystkichUzytkownikow();

    void logowanieUzytkownika();
    void wylogowanieUzytkownika();
    void zmianaHaslaZalogowanegoUzytkownika();
    int pobierzIdZalogowanegoUzytkownika();
    void ustawIdZalogowanegoUzytkownika (int noweId);
    bool czyUzytkownikJestZalogowany();
 };
#endif

