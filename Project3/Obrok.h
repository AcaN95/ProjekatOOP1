#pragma once
#include <iostream>
#include <string>
using namespace std;
class Obrok
{

private:
    string naziv;
    double cena;
    int kolicina;

    static int brojObroka;

public:
    Obrok();
    Obrok(string naziv, double cena, int kolicina);

    // Getteri
    string getNaziv() const;
    double getCena() const;
    int getKolicina() const;

    //Setteri
 
    void setNaziv(string naziv);
    void setCena(double cena);
    void setKolicina(int kolicina);
    
    // Ostalo
    void umanjiKolicinu();

    void prikaziObroke() const;
    //void prikazi(bool detaljno) const;

    static int getBrojObroka();
};