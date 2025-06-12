#include "Programista.hpp"
#include <iostream>

Programista::Programista() : Pracownik(), jezyk("C++"), liczbaProjektow(new int(0)) {}
Programista::Programista(const std::string& i, const std::string& n, const std::string& j, int liczba)
    : Pracownik(i, n), jezyk(j), liczbaProjektow(new int(liczba)) {}
Programista::Programista(const Programista& p)
    : Pracownik(p), jezyk(p.jezyk), liczbaProjektow(new int(*(p.liczbaProjektow))) {}
Programista::~Programista() { delete liczbaProjektow; }

std::string Programista::getJezyk() const { return jezyk; }
int Programista::getLiczbaProjektow() const { return *liczbaProjektow; }
void Programista::setJezyk(const std::string& j) { jezyk = j; }
void Programista::setLiczbaProjektow(int liczba) { *liczbaProjektow = liczba; }

void Programista::wypisz() const {
    std::cout << "Programista: " << getImie() << " " << getNazwisko()
              << ", język: " << jezyk
              << ", liczba projektów: " << *liczbaProjektow << std::endl;
}

void Programista::specOperacja() const {
    std::cout << "Programista może debugować kod.\n";
}

void Programista::koduj() const {
    std::cout << "Programuję w " << jezyk << std::endl;
}