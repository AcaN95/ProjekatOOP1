#include "Obrok.h"

void Obrok::prikaziObrok() const
{
	cout << "Naziv: " << naziv << endl << "Cena: " << cena << endl << "Kolicina: " << kolicina << endl << endl;

}

void Obrok::umanjiKolicinu()
{
	//mozda nisam ni morao ovo da radim.. jer cim je kolicina 0, objekat nestaje ali ok
	if (kolicina > 0)
		kolicina--;
	else
		cout << "Obrok je prodat!";
	//U finalnoj verziji obrisi ovaj out
	
}






Obrok::Obrok()
{
	naziv = "";
	cena = 0;
	kolicina = 0;
}

Obrok::Obrok(string Naziv, int Cena, int Kolicina)
{
	naziv = Naziv;
	cena = Cena;
	kolicina = Kolicina;
}

int Obrok::getCena() const
{
	return cena;
}
