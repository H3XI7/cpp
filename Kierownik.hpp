#pragma once
#include "Pracownik.hpp"

class Kierownik : public Pracownik {
private:
    int liczbaPodwladnych;
public:
    Kierownik();
    Kierownik(const std::string& i, const std::string& n, int liczba);
    Kierownik(const Kierownik& k);
    ~Kierownik() override;

    int getLiczbaPodwladnych() const;
    void setLiczbaPodwladnych(int l);

    void wypisz() const override;
    void specOperacja() const override;
    void zarzadzaj() const;
};