#pragma once
#include "Programista.hpp"

/*
 * Klasa pochodna reprezentująca stażystę-programistę.
 * Dziedziczy po Programista, dodatkowe pole: długość stażu.
 */
class Stazysta : public Programista {
private:
    int dlugoscStazu; // w miesiącach
public:
    Stazysta();
    Stazysta(const std::string& i, const std::string& n, const std::string& j, int liczba, int dlugosc);
    Stazysta(const Stazysta& s);
    ~Stazysta() override;

    int getDlugoscStazu() const;
    void setDlugoscStazu(int d);

    void wypisz() const override;
    void specOperacja() const override;
    // Metoda specyficzna dla stażysty
    void uczSie() const;
};