#include "Tester.hpp"
#include <iostream>

// Konstruktor domyślny
Tester::Tester() : Pracownik(), narzedzie("Selenium") {}

// Konstruktor z parametrami
Tester::Tester(const std::string& i, const std::string& n, const std::string& narz)
    : Pracownik(i, n), narzedzie(narz) {}

// Konstruktor kopiujący
Tester::Tester(const Tester& t) : Pracownik(t), narzedzie(t.narzedzie) {}

// Destruktor
Tester::~Tester() {}

std::string Tester::getNarzedzie() const { return narzedzie; }
void Tester::setNarzedzie(const std::string& n) { narzedzie = n; }

// Wypisuje dane testera
void Tester::wypisz() const {
    std::cout << "Tester: " << getImie() << " " << getNazwisko()
              << ", narzędzie: " << narzedzie << std::endl;
}

// Przykładowa operacja specyficzna
void Tester::specOperacja() const {
    std::cout << "Tester może pisać testy automatyczne.\n";
}

void Tester::testuj() const {
    std::cout << "Testuję przy użyciu: " << narzedzie << std::endl;
}