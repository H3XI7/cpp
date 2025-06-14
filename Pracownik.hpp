#pragma once
#include <iostream>
#include <string>

/*
 * Klasa abstrakcyjna bazowa dla wszystkich pracowników firmy.
 * Zawiera pola imię i nazwisko oraz metody wirtualne.
 */
class Pracownik {
private:
    std::string imie;
    std::string nazwisko;
public:
    // Konstruktor domyślny
    Pracownik();
    // Konstruktor z parametrami
    Pracownik(const std::string& i, const std::string& n);
    // Konstruktor kopiujący
    Pracownik(const Pracownik& p);
    // Wirtualny destruktor
    virtual ~Pracownik();

    // Metody dostępowe do pól prywatnych
    std::string getImie() const;
    std::string getNazwisko() const;
    void setImie(const std::string& i);
    void setNazwisko(const std::string& n);

    // Wirtualna metoda do wypisywania danych pracownika
    virtual void wypisz() const;
    // Czysto wirtualna metoda – wymusza nadpisanie w klasach pochodnych
    virtual void specOperacja() const = 0;
};