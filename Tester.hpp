#pragma once
#include "Pracownik.hpp"

/*
 * Klasa pochodna reprezentująca testera oprogramowania.
 * Dodatkowe pole: narzędzie testowe.
 */
class Tester : public Pracownik {
private:
    std::string narzedzie;
public:
    Tester();
    Tester(const std::string& i, const std::string& n, const std::string& narz);
    Tester(const Tester& t);
    ~Tester() override;

    std::string getNarzedzie() const;
    void setNarzedzie(const std::string& n);

    void wypisz() const override;
    void specOperacja() const override;
    // Metoda specyficzna dla testera
    void testuj() const;
};