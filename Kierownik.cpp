#include "Kierownik.hpp"
#include <iostream>

Kierownik::Kierownik() : Pracownik(), liczbaPodwladnych(0) {}
Kierownik::Kierownik(const std::string& i, const std::string& n, int liczba)
    : Pracownik(i, n), liczbaPodwladnych(liczba) {}
Kierownik::Kierownik(const Kierownik& k)
    : Pracownik(k), liczbaPodwladnych(k.liczbaPodwladnych) {}
Kierownik::~Kierownik() {}

int Kierownik::getLiczbaPodwladnych() const { return liczbaPodwladnych; }
void Kierownik::setLiczbaPodwladnych(int l) { liczbaPodwladnych = l; }

void Kierownik::wypisz() const {
    std::cout << "Kierownik: " << getImie() << " " << getNazwisko()
              << ", liczba podwładnych: " << liczbaPodwladnych << std::endl;
}
void Kierownik::specOperacja() const {
    std::cout << "Kierownik może prowadzić spotkania zespołu.\n";
}
void Kierownik::zarzadzaj() const {
    std::cout << "Zarządzam " << liczbaPodwladnych << " osobami.\n";
}