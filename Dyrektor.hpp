#pragma once
#include "Kierownik.hpp"

class Dyrektor : public Kierownik {
private:
    double budzet;
public:
    Dyrektor();
    Dyrektor(const std::string& i, const std::string& n, int liczba, double b);
    Dyrektor(const Dyrektor& d);
    ~Dyrektor() override;

    double getBudzet() const;
    void setBudzet(double b);

    void wypisz() const override;
    void specOperacja() const override;
    void podejmijDecyzje() const;
};