#include "Menza.h"
int Menza::brojProdatihObroka = 0;
int Menza::ukupanPrihod = 0;

Menza::Menza()
{
}

Menza::~Menza()
{
}


void Menza::pauza() const
{
	
		cout << "Unesite 0 za nazad";
		int komanda = 1;
		while (komanda != 0) {
			cin >> komanda;
		};
	
}

void Menza::dodajStudenta()
{
	string ime, prezime;
	int brojKartice, indeks;
	cout << "Unesite ime studenta: ";
	cin >> ime;
	cout << "Unesite prezime studenta: ";
	cin >> prezime;
	cout << "Unesite broj kartice studenta: ";
	cin >> brojKartice;
	cout << "Unesite indeks studenta: ";
	cin >> indeks;
	Student student(ime, prezime, indeks, brojKartice);
	studenti.push_back(student);

}

void Menza::prikaziStudente() const
{
	for (int i = 0;i < studenti.size();i++) {
		studenti[i].prikazi();
	}
	pauza();
}

void Menza::dodajObrok()
{
	string naziv;
	cout << "Unesite naziv obroka: ";
	cin.ignore();
	getline(cin, naziv);
	int cena, kolicina;
	cout << "Unestie cenu obroka: ";
	cin >> cena;
	cout << "Unesite kolicinu obroka: ";
	cin >> kolicina;
	Obrok obrok(naziv, cena, kolicina);
	obroci.push_back(obrok);
}

void Menza::prikaziObroke() const
{
	for(int i=0;i<obroci.size();i++) {
		obroci[i].prikaziObrok();
	}
	pauza();
}

void Menza::sortirajObrokePoCeni()
{
	Obrok pomObrok;


	for (int i = 0;i < obroci.size()-1;i++) {
		for (int j = i+1;j < obroci.size();j++) {
			int PoredjenjeCena = obroci[j].getCena();
			int trenutnaCena = obroci[i].getCena();
			if (trenutnaCena > PoredjenjeCena) {
				pomObrok = obroci[i];
				obroci[i] = obroci[j];
				obroci[j] = pomObrok;
			}
		}
	}
}

void Menza::dopuniKarticu()
{
	cout << endl;
	cout << "Unesite broj kartice studenta kome zelite da dopunite karticu!" << endl << "Student: ";
	int kartica;
	cin >> kartica;
	cout << "Unestie iznos za koji zelite da studentu povecate kredit:";
	int kredit;
	cin >> kredit;
	
	for (int i = 0; i < studenti.size();i++)
	{
		if (studenti[i].getBrojKartice() == kartica) {
			studenti[i].dopuniKarticu(kredit);
			break;
		}
	}
}

