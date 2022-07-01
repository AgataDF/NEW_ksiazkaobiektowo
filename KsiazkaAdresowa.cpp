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
    idUzytkownika = uzytkownikMenedzer.ustawIdZalogowanegoUzytkownika(uzytkownikMenedzer.logowanieUzytkownika());
    adresatMenedzer->wczytajAdresatowZalogowanegoUzytkownikaZPliku(idUzytkownika);
}

void KsiazkaAdresowa::wylogowanieUzytkownika()
{
    adresatMenedzer->czyszczenieWektora();
    idUzytkownika = 0;
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
    adresatMenedzer->dodajAdresata(idUzytkownika);
}

void KsiazkaAdresowa::ustawIdZalogowanegoUzytkownika()
{
    uzytkownikMenedzer.ustawIdZalogowanegoUzytkownika(idUzytkownika);
}

int KsiazkaAdresowa::wczytajIdZalogowanegoUzytkownika()
{
    return idUzytkownika;
}

void KsiazkaAdresowa::wypiszWszystkichAdresatowZalogowanegoUzytkownika()
{
    adresatMenedzer->wyswietlWszystkichAdresatow();
}
