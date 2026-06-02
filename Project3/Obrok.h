#pragma once
#include <iostream>
#include <string>
using namespace std;
class Obrok
{

private:
    string naziv;
    int cena;
    int kolicina;

    static int brojObroka;

public:
    Obrok();
    Obrok(string naziv, int cena, int kolicina);

    // Getteri
    string getNaziv() const;
    int getCena() const;
    int getKolicina() const;

    //Setteri
 
    void setNaziv(string naziv);
    void setCena(int cena);
    void setKolicina(int kolicina);
    
    // Ostalo
	void prikaziObrok() const;
    void umanjiKolicinu();

    //void prikazi(bool detaljno) const;

    static int getBrojObroka();
};