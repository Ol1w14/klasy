#include <iostream>
#include <fstream>
#include <string>

using namespace std;


// Dane jednej osoby
struct dane
{
    string imie;
    string nazwisko;
    int nr;
};


// Klasa opisujaca jedna osobe
class osoba
{
private:
    dane d;

public:

    // Wczytanie osoby z pliku
    bool wczytaj_z_pliku(ifstream& plik)
    {
        return bool(plik >> d.imie >> d.nazwisko >> d.nr);
    }

    // Wczytanie osoby z klawiatury
    void wczytaj_z_klawiatury(int nowy_nr)
    {
        cout << "Podaj imie: ";
        cin >> d.imie;

        cout << "Podaj nazwisko: ";
        cin >> d.nazwisko;

        d.nr = nowy_nr;
    }

    // Wyswietlenie osoby
    void wypisz()
    {
        cout << d.imie << " " << d.nazwisko << " " << d.nr << endl;
    }

    int get_nr()
    {
        return d.nr;
    }
};


// Klasa przechowujaca ca³a klase
class klasa
{
private:
    string nazwa;
    string wychowawca;
    osoba uczniowie[30];
    int ilosc_uczniow;

public:

    // Wczytanie klasy z pliku
    void wczytaj(ifstream& plik)
    {
        plik >> nazwa;
        plik >> wychowawca;

        ilosc_uczniow = 0;

        // Wczytywanie uczniow
        while (ilosc_uczniow < 30)
        {
            osoba temp;

            if (!temp.wczytaj_z_pliku(plik))
                break;

            uczniowie[ilosc_uczniow] = temp;
            ilosc_uczniow++;
        }
    }

    // Szukanie najwiekszego numeru
    int pobierz_max_nr()
    {
        if (ilosc_uczniow == 0) return 0;

        int max_nr = uczniowie[0].get_nr();

        for (int i = 1; i < ilosc_uczniow; i++)
        {
            if (uczniowie[i].get_nr() > max_nr)
            {
                max_nr = uczniowie[i].get_nr();
            }
        }

        return max_nr;
    }

    // Dodanie nowego ucznia
    void dodaj_z_klawiatury()
    {
        if (ilosc_uczniow >= 30) return;

        int nowy_nr = pobierz_max_nr() + 1;

        uczniowie[ilosc_uczniow].wczytaj_z_klawiatury(nowy_nr);
        ilosc_uczniow++;
    }

    // Wyswietlenie calej klasy
    void wypisz()
    {
        cout << "Klasa: " << nazwa << endl;
        cout << "Wychowawca: " << wychowawca << endl;
        cout << "Uczniowie:" << endl;

        for (int i = 0; i < ilosc_uczniow; i++)
        {
            uczniowie[i].wypisz();
        }
    }
};


int main()
{
    ifstream plik("dane.txt");

    klasa k;

    k.wczytaj(plik);
    plik.close();

    k.dodaj_z_klawiatury();

    k.wypisz();

    return 0;
}
