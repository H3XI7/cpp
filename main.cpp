#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>
#include <memory>
#include "Pracownik.hpp"
#include "Programista.hpp"
#include "Tester.hpp"
#include "Kierownik.hpp"
#include "Dyrektor.hpp"
#include "Stazysta.hpp"

/*
 * Program główny:
 * - Wczytuje dane pracowników z pliku tekstowego TestInterface.txt
 * - Tworzy dynamicznie obiekty odpowiednich klas pochodnych (Programista, Tester, Kierownik, Dyrektor, Stazysta)
 * - Wypisuje dane każdego pracownika i wywołuje metody specyficzne dla danej klasy (polimorfizm)
 */
int main() {
    std::vector<std::unique_ptr<Pracownik>> pracownicy;

    std::ifstream plik("TestInterface.txt");
    std::string linia;
    // Wczytaj dane z pliku linia po linii
    while (getline(plik, linia)) {
        std::stringstream ss(linia);
        std::string typ, imie, nazwisko, jezyk, liczbaTxt, narzedzie, liczbaPodwTxt, budzetTxt, dlugoscTxt;
        getline(ss, typ, ',');
        getline(ss, imie, ',');
        getline(ss, nazwisko, ',');

        // Rozpoznaj typ pracownika i utwórz odpowiedni obiekt
        if (typ == "Programista") {
            getline(ss, jezyk, ',');
            getline(ss, liczbaTxt, ',');
            int liczba = std::stoi(liczbaTxt);
            pracownicy.push_back(std::make_unique<Programista>(imie, nazwisko, jezyk, liczba));
        } else if (typ == "Tester") {
            getline(ss, narzedzie, ',');
            pracownicy.push_back(std::make_unique<Tester>(imie, nazwisko, narzedzie));
        } else if (typ == "Kierownik") {
            getline(ss, liczbaPodwTxt, ',');
            int liczbaPodw = std::stoi(liczbaPodwTxt);
            pracownicy.push_back(std::make_unique<Kierownik>(imie, nazwisko, liczbaPodw));
        } else if (typ == "Dyrektor") {
            getline(ss, liczbaPodwTxt, ',');
            getline(ss, budzetTxt, ',');
            int liczbaPodw = std::stoi(liczbaPodwTxt);
            double budzet = std::stod(budzetTxt);
            pracownicy.push_back(std::make_unique<Dyrektor>(imie, nazwisko, liczbaPodw, budzet));
        } else if (typ == "Stazysta") {
            getline(ss, jezyk, ',');
            getline(ss, liczbaTxt, ',');
            getline(ss, dlugoscTxt, ',');
            int liczba = std::stoi(liczbaTxt);
            int dlugosc = std::stoi(dlugoscTxt);
            pracownicy.push_back(std::make_unique<Stazysta>(imie, nazwisko, jezyk, liczba, dlugosc));
        }
    }

    // Przetwarzaj wszystkich pracowników
    for (const auto& p : pracownicy) {
        p->wypisz();          // polimorficzne wypisywanie
        p->specOperacja();    // polimorficzna operacja

        // Dynamiczne rzutowanie i wywołanie metod specyficznych dla klas
        if (auto pr = dynamic_cast<Programista*>(p.get())) pr->koduj();
        if (auto te = dynamic_cast<Tester*>(p.get())) te->testuj();
        if (auto ki = dynamic_cast<Kierownik*>(p.get())) ki->zarzadzaj();
        if (auto dy = dynamic_cast<Dyrektor*>(p.get())) dy->podejmijDecyzje();
        if (auto st = dynamic_cast<Stazysta*>(p.get())) st->uczSie();
        std::cout << "-----\n";
    }

    return 0;
}