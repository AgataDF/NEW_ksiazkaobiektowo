#include "KsiazkaAdresowa.h"

void KsiazkaAdresowa::rejestracjaUzytkownika()
{
    uzytkownikMenedzer.rejestracjaUzytkownika();
}

void KsiazkaAdresowa::wypiszWszystkichUzytkownikow()
{
    uzytkownikMenedzer.wypiszWszystkichUzytkownikow();
}

void KsiazkaAdresowa::logowanieUzytkownika()
{
    uzytkownikMenedzer.logowanieUzytkownika();
    if (uzytkownikMenedzer.czyUzytkownikJestZalogowany())
    {
        adresatMenedzer = new AdresatMenedzer(NAZWA_PLIKU_Z_ADRESATAMI, uzytkownikMenedzer.pobierzIdZalogowanegoUzytkownika());
    }
}

void KsiazkaAdresowa::wylogowanieUzytkownika()
{
    uzytkownikMenedzer.wylogowanieUzytkownika();
    delete adresatMenedzer;
    adresatMenedzer = NULL;
    cout << "Wylogowano poprawnie" << endl << endl;
    system("pause");
}

void KsiazkaAdresowa::zmianaHasla()
{
    uzytkownikMenedzer.zmianaHaslaZalogowanegoUzytkownika();
}

char KsiazkaAdresowa::wybierzOpcjeZMenuGlownego()
{
    char wybor;

    system("cls");
    cout << "    >>> MENU  GLOWNE <<<" << endl;
    cout << "---------------------------" << endl;
    cout << "1. Rejestracja" << endl;
    cout << "2. Logowanie" << endl;
    cout << "9. Koniec programu" << endl;
    cout << "---------------------------" << endl;
    cout << "Twoj wybor: ";
    wybor = MetodyPomocnicze::wczytajZnak();

    return wybor;
}

char KsiazkaAdresowa::wybierzOpcjeZMenuUzytkownika()
{

    char wybor;

    system("cls");
    cout << " >>> MENU UZYTKOWNIKA <<<" << endl;
    cout << "---------------------------" << endl;
    cout << "1. Dodaj adresata" << endl;
    cout << "2. Wyszukaj po imieniu" << endl;
    cout << "3. Wyszukaj po nazwisku" << endl;
    cout << "4. Wyswietl adresatow" << endl;
    cout << "5. Usun adresata" << endl;
    cout << "6. Edytuj adresata" << endl;
    cout << "---------------------------" << endl;
    cout << "7. Zmien haslo" << endl;
    cout << "8. Wyloguj sie" << endl;
    cout << "---------------------------" << endl;
    cout << "Twoj wybor: ";
    wybor = MetodyPomocnicze::wczytajZnak();

    return wybor;
}

void KsiazkaAdresowa::dodajAdresata()
{
    if (uzytkownikMenedzer.czyUzytkownikJestZalogowany())
    {
    adresatMenedzer->dodajAdresata();
    }
    else
    {
        cout << "Aby dodac adresata, nalezy sie najpierw zalogowac." << endl;
        system("pause");
    }
}

void KsiazkaAdresowa::wypiszWszystkichAdresatowZalogowanegoUzytkownika()
{
    if (uzytkownikMenedzer.czyUzytkownikJestZalogowany())
    {
    adresatMenedzer->wyswietlWszystkichAdresatow();
    }
    else
    {
        cout << "Aby wyswietlic adresatow, nalezy sie najpierw zalogowac." << endl;
        system("pause");
    }
}

bool KsiazkaAdresowa::czyUzytkownikJestZalogowany()
{
    uzytkownikMenedzer.czyUzytkownikJestZalogowany();
}

void KsiazkaAdresowa::wyszukajAdresatowPoImieniu()
{
    if (uzytkownikMenedzer.czyUzytkownikJestZalogowany())
    {
    adresatMenedzer->wyszukajAdresatowPoImieniu();
    }
    else
    {
        cout << "Aby wyswietlic adresatow, nalezy sie najpierw zalogowac." << endl;
        system("pause");
    }
}

void KsiazkaAdresowa::wyszukajAdresatowPoNazwisku()
{
    if (uzytkownikMenedzer.czyUzytkownikJestZalogowany())
    {
    adresatMenedzer->wyszukajAdresatowPoNazwisku();
    }
    else
    {
        cout << "Aby wyswietlic adresatow, nalezy sie najpierw zalogowac." << endl;
        system("pause");
    }
}

void KsiazkaAdresowa::usunAdresata()
{
    if (uzytkownikMenedzer.czyUzytkownikJestZalogowany())
    {
    adresatMenedzer->usunAdresata();
    }
    else
    {
        cout << "Aby usunac adresata, nalezy sie najpierw zalogowac." << endl;
        system("pause");
    }
}

void KsiazkaAdresowa::edytujAdresata()
{
    if (uzytkownikMenedzer.czyUzytkownikJestZalogowany())
    {
    adresatMenedzer->edytujAdresata();
    }
    else
    {
        cout << "Aby edytowac adresata, nalezy sie najpierw zalogowac." << endl;
        system("pause");
    }
}
