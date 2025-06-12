#include "Pracownik.hpp"

Pracownik::Pracownik() : imie("Anonim"), nazwisko("Anonim") {}
Pracownik::Pracownik(const std::string& i, const std::string& n) : imie(i), nazwisko(n) {}
Pracownik::Pracownik(const Pracownik& p) : imie(p.imie), nazwisko(p.nazwisko) {}
Pracownik::~Pracownik() {}

std::string Pracownik::getImie() const { return imie; }
std::string Pracownik::getNazwisko() const { return nazwisko; }
void Pracownik::setImie(const std::string& i) { imie = i; }
void Pracownik::setNazwisko(const std::string& n) { nazwisko = n; }

void Pracownik::wypisz() const {
    std::cout << "Pracownik: " << imie << " " << nazwisko << std::endl;
}