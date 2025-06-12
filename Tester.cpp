#include "Tester.hpp"
#include <iostream>

Tester::Tester() : Pracownik(), narzedzie("Selenium") {}
Tester::Tester(const std::string& i, const std::string& n, const std::string& narz)
    : Pracownik(i, n), narzedzie(narz) {}
Tester::Tester(const Tester& t) : Pracownik(t), narzedzie(t.narzedzie) {}
Tester::~Tester() {}

std::string Tester::getNarzedzie() const { return narzedzie; }
void Tester::setNarzedzie(const std::string& n) { narzedzie = n; }

void Tester::wypisz() const {
    std::cout << "Tester: " << getImie() << " " << getNazwisko()
              << ", narzędzie: " << narzedzie << std::endl;
}

void Tester::specOperacja() const {
    std::cout << "Tester może pisać testy automatyczne.\n";
}
void Tester::testuj() const {
    std::cout << "Testuję przy użyciu: " << narzedzie << std::endl;
}