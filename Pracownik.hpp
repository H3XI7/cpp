#pragma once
#include <iostream>
#include <string>

class Pracownik {
private:
    std::string imie;
    std::string nazwisko;
public:
    Pracownik();
    Pracownik(const std::string& i, const std::string& n);
    Pracownik(const Pracownik& p);
    virtual ~Pracownik();

    std::string getImie() const;
    std::string getNazwisko() const;
    void setImie(const std::string& i);
    void setNazwisko(const std::string& n);

    virtual void wypisz() const;
    virtual void specOperacja() const = 0; // czysto wirtualna
};