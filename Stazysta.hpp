#pragma once
#include "Programista.hpp"

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
    void uczSie() const;
};