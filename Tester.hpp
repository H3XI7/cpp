#pragma once
#include "Pracownik.hpp"

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
    void testuj() const;
};