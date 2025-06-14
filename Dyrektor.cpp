#include "Dyrektor.hpp"
#include <iostream>

// Konstruktor domyślny
Dyrektor::Dyrektor() : Kierownik(), budzet(0.0) {}

// Konstruktor z parametrami
Dyrektor::Dyrektor(const std::string& i, const std::string& n, int liczba, double b)
    : Kierownik(i, n, liczba), budzet(b) {}

// Konstruktor kopiujący
Dyrektor::Dyrektor(const Dyrektor& d)
    : Kierownik(d), budzet(d.budzet) {}

// Destruktor
Dyrektor::~Dyrektor() {}

double Dyrektor::getBudzet() const { return budzet; }
void Dyrektor::setBudzet(double b) { budzet = b; }

// Wypisuje dane dyrektora
void Dyrektor::wypisz() const {
    std::cout << "Dyrektor: " << getImie() << " " << getNazwisko()
              << ", liczba podwładnych: " << getLiczbaPodwladnych()
              << ", budżet: " << budzet << std::endl;
}

// Przykładowa operacja specyficzna
void Dyrektor::specOperacja() const {
    std::cout << "Dyrektor decyduje o strategii firmy.\n";
}

void Dyrektor::podejmijDecyzje() const {
    std::cout << "Podejmuję decyzję o budżecie: " << budzet << std::endl;
}