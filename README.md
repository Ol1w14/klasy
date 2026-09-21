System zarządzania klasą w C++
Opis projektu

Program napisany w języku C++, którego zadaniem jest przechowywanie i obsługa danych uczniów należących do jednej klasy.

Program wykorzystuje programowanie obiektowe oraz odczyt danych z pliku tekstowego. Po uruchomieniu wczytuje informacje o klasie i uczniach z pliku dane.txt, umożliwia dodanie nowego ucznia z poziomu klawiatury, a następnie wyświetla aktualną listę uczniów.

Funkcjonalności

wczytywanie danych klasy z pliku dane.txt,

przechowywanie imienia, nazwiska i numeru ucznia,

wyświetlanie informacji o klasie,

wyświetlanie listy uczniów,

dodawanie nowego ucznia z klawiatury,

automatyczne nadawanie nowemu uczniowi kolejnego numeru,

ograniczenie liczby uczniów do 30.

Struktura programu

Program składa się z dwóch głównych klas:

osoba

Reprezentuje pojedynczego ucznia. Przechowuje jego:

imię,

nazwisko,

numer.

Klasa umożliwia wczytanie danych z pliku lub klawiatury oraz wyświetlenie informacji o uczniu.

klasa

Przechowuje informacje dotyczące całej klasy:

nazwę klasy,

imię i nazwisko wychowawcy,

tablicę maksymalnie 30 uczniów,

aktualną liczbę uczniów.

Klasa posiada funkcje odpowiedzialne za wczytywanie danych, wyszukiwanie największego numeru ucznia, dodawanie nowego ucznia oraz wyświetlanie całej klasy.

Plik dane.txt

Program pobiera dane z pliku tekstowego. Dane powinny być zapisane w kolejności:

nazwa_klasy wychowawca
imie nazwisko numer
imie nazwisko numer
...


Przykład:

3A Kowalski
Jan Nowak 1
Anna Kowalska 2
Piotr Wisniewski 3

Przebieg działania

Program otwiera plik dane.txt.

Wczytuje nazwę klasy oraz wychowawcę.

Wczytuje uczniów znajdujących się w pliku.

Wyszukuje największy istniejący numer ucznia.

Prosi użytkownika o podanie danych nowego ucznia.

Automatycznie nadaje mu kolejny numer.

Wyświetla informacje o klasie wraz z aktualną listą uczniów.

Technologie

C++

programowanie obiektowe (OOP)

iostream – obsługa wejścia i wyjścia

fstream – obsługa plików

string – obsługa tekstu

Cel projektu

Projekt ma na celu pokazanie podstaw programowania obiektowego w C++, w szczególności wykorzystania struktur, klas, metod, tablic obiektów oraz obsługi plików tekstowych.
