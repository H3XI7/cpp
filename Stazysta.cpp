#include "Stazysta.hpp"
#include <iostream>

Stazysta::Stazysta() : Programista(), dlugoscStazu(0) {}
Stazysta::Stazysta(const std::string& i, const std::string& n, const std::string& j, int liczba, int dlugosc)
    : Programista(i, n, j, liczba), dlugoscStazu(dlugosc) {}
Stazysta::Stazysta(const Stazysta& s)
    : Programista(s), dlugoscStazu(s.dlugoscStazu) {}
Stazysta::~Stazysta() {}

int Stazysta::getDlugoscStazu() const { return dlugoscStazu; }
void Stazysta::setDlugoscStazu(int d) { dlugoscStazu = d; }

void Stazysta::wypisz() const {
    std::cout << "Stażysta: " << getImie() << " " << getNazwisko()
              << ", język: " << getJezyk()
              << ", liczba projektów: " << getLiczbaProjektow()
              << ", długość stażu: " << dlugoscStazu << " miesięcy" << std::endl;
}
void Stazysta::specOperacja() const {
    std::cout << "Stażysta uczy się nowych technologii.\n";
}
void Stazysta::uczSie() const {
    std::cout << "Uczę się! Długość stażu: " << dlugoscStazu << " miesięcy\n";
}