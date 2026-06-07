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
    int brojObroka;

public:
    Obrok();
    Obrok(string naziv, int cena, int kolicina);

    // Getteri
    //string getNaziv() const;
    int getCena() const;
    int getKolicina() const;

    //Setteri
 
    //void setNaziv(string naziv);
    //void setCena(int cena);
    //void setKolicina(int kolicina);
    
    // Ostalo
	void prikaziObrok() const;
    void umanjiKolicinu();

    //void prikazi(bool detaljno) const;

	//Ovo ne moram da proveravam, ako ima obroka, onda je broj obroka veci od 0, a ako nema onda je broj obroka 0
    //static int getBrojObroka();
};