#include "Stazysta.hpp"
#include <iostream>

// Konstruktor domyślny
Stazysta::Stazysta() : Programista(), dlugoscStazu(0) {}

// Konstruktor z parametrami
Stazysta::Stazysta(const std::string& i, const std::string& n, const std::string& j, int liczba, int dlugosc)
    : Programista(i, n, j, liczba), dlugoscStazu(dlugosc) {}

// Konstruktor kopiujący
Stazysta::Stazysta(const Stazysta& s)
    : Programista(s), dlugoscStazu(s.dlugoscStazu) {}

// Destruktor
Stazysta::~Stazysta() {}

int Stazysta::getDlugoscStazu() const { return dlugoscStazu; }
void Stazysta::setDlugoscStazu(int d) { dlugoscStazu = d; }

// Wypisuje dane stażysty
void Stazysta::wypisz() const {
    std::cout << "Stażysta: " << getImie() << " " << getNazwisko()
              << ", język: " << getJezyk()
              << ", liczba projektów: " << getLiczbaProjektow()
              << ", długość stażu: " << dlugoscStazu << " miesięcy" << std::endl;
}

// Przykładowa operacja specyficzna
void Stazysta::specOperacja() const {
    std::cout << "Stażysta uczy się nowych technologii.\n";
}

void Stazysta::uczSie() const {
    std::cout << "Uczę się! Długość stażu: " << dlugoscStazu << " miesięcy\n";
}