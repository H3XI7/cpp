#pragma once
#include "Pracownik.hpp"

class Programista : public Pracownik {
private:
    std::string jezyk;
    int* liczbaProjektow;
public:
    Programista();
    Programista(const std::string& i, const std::string& n, const std::string& j, int liczba);
    Programista(const Programista& p);
    ~Programista() override;

    std::string getJezyk() const;
    int getLiczbaProjektow() const;
    void setJezyk(const std::string& j);
    void setLiczbaProjektow(int liczba);

    void wypisz() const override;
    void specOperacja() const override;
    void koduj() const;
};