#include "Pracownik.hpp"

// Konstruktor domyślny
Pracownik::Pracownik() : imie("Anonim"), nazwisko("Anonim") {}

// Konstruktor z parametrami
Pracownik::Pracownik(const std::string& i, const std::string& n) : imie(i), nazwisko(n) {}

// Konstruktor kopiujący
Pracownik::Pracownik(const Pracownik& p) : imie(p.imie), nazwisko(p.nazwisko) {}

// Wirtualny destruktor
Pracownik::~Pracownik() {}

std::string Pracownik::getImie() const { return imie; }
std::string Pracownik::getNazwisko() const { return nazwisko; }
void Pracownik::setImie(const std::string& i) { imie = i; }
void Pracownik::setNazwisko(const std::string& n) { nazwisko = n; }

// Wypisuje dane pracownika bazowego (może być nadpisywane)
void Pracownik::wypisz() const {
    std::cout << "Pracownik: " << imie << " " << nazwisko << std::endl;
}