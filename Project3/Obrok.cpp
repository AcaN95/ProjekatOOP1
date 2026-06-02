#include "Obrok.h"

void Obrok::umanjiKolicinu()
{
	//mozda nisam ni morao ovo da radim.. jer cim je kolicina 0, objekat nestaje ali ok
	if (kolicina > 0)
		kolicina--;
	else
		cout << "Obrok je prodat!";
	//U finalnoj verziji obrisi ovaj out
	
}

void Obrok::prikaziObroke() const
{
	cout << "Naziv: " << naziv << " Cena: " << cena << " Kolicina: " << kolicina;
	
}

Obrok::Obrok(string Naziv, double Cena, int Kolicina)
{
	naziv = Naziv;
	cena = Cena;
	kolicina = Kolicina;
}
