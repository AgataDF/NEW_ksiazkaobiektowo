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
    int idZalogowanegoUzytkownika = 0;

    Uzytkownik podajDaneNowegoUzytkownika();
    int pobierzIdNowegoUzytkownika();
    bool czyIstniejeLogin(string login);

 public:
    UzytkownikMenedzer(string nazwaPlikuZUzytkownikami):plikZUzytkownikami(nazwaPlikuZUzytkownikami)
    {
    uzytkownicy = plikZUzytkownikami.wczytajUzytkownikowZPliku();
    };
    void rejestracjaUzytkownika();
    void wypiszWszystkichUzytkownikow();

    int logowanieUzytkownika();
    void wylogowanieUzytkownika();
    void zmianaHaslaZalogowanegoUzytkownika();
    int pobierzIdZalogowanegoUzytkownika();
    int ustawIdZalogowanegoUzytkownika (int noweId);
 };
#endif

