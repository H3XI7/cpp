#pragma once
#include "Kierownik.hpp"

/*
 * Klasa pochodna reprezentująca dyrektora firmy.
 * Dziedziczy po Kierownik, dodatkowe pole: budżet.
 */
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
    // Metoda specyficzna dla dyrektora
    void podejmijDecyzje() const;
};