#include "Kierownik.hpp"
#include <iostream>

// Konstruktor domyślny
Kierownik::Kierownik() : Pracownik(), liczbaPodwladnych(0) {}

// Konstruktor z parametrami
Kierownik::Kierownik(const std::string& i, const std::string& n, int liczba)
    : Pracownik(i, n), liczbaPodwladnych(liczba) {}

// Konstruktor kopiujący
Kierownik::Kierownik(const Kierownik& k)
    : Pracownik(k), liczbaPodwladnych(k.liczbaPodwladnych) {}

// Destruktor
Kierownik::~Kierownik() {}

int Kierownik::getLiczbaPodwladnych() const { return liczbaPodwladnych; }
void Kierownik::setLiczbaPodwladnych(int l) { liczbaPodwladnych = l; }

// Wypisuje dane kierownika
void Kierownik::wypisz() const {
    std::cout << "Kierownik: " << getImie() << " " << getNazwisko()
              << ", liczba podwładnych: " << liczbaPodwladnych << std::endl;
}

// Przykładowa operacja specyficzna
void Kierownik::specOperacja() const {
    std::cout << "Kierownik może prowadzić spotkania zespołu.\n";
}

// Metoda specyficzna
void Kierownik::zarzadzaj() const {
    std::cout << "Zarządzam " << liczbaPodwladnych << " osobami.\n";
}