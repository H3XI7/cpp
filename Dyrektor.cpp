#include "Dyrektor.hpp"
#include <iostream>

Dyrektor::Dyrektor() : Kierownik(), budzet(0.0) {}
Dyrektor::Dyrektor(const std::string& i, const std::string& n, int liczba, double b)
    : Kierownik(i, n, liczba), budzet(b) {}
Dyrektor::Dyrektor(const Dyrektor& d)
    : Kierownik(d), budzet(d.budzet) {}
Dyrektor::~Dyrektor() {}

double Dyrektor::getBudzet() const { return budzet; }
void Dyrektor::setBudzet(double b) { budzet = b; }

void Dyrektor::wypisz() const {
    std::cout << "Dyrektor: " << getImie() << " " << getNazwisko()
              << ", liczba podwładnych: " << getLiczbaPodwladnych()
              << ", budżet: " << budzet << std::endl;
}
void Dyrektor::specOperacja() const {
    std::cout << "Dyrektor decyduje o strategii firmy.\n";
}
void Dyrektor::podejmijDecyzje() const {
    std::cout << "Podejmuję decyzję o budżecie: " << budzet << std::endl;
}