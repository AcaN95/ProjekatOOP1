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
		
	cout << endl << "Unesite 0 za nazad" << endl;
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
		cout << "Obrok " << i + 1 << endl;
		obroci[i].prikaziObrok();
	}
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

void Menza::staviStudentaURed(int brojKartice)
{
	cout << endl << endl;

	Student* pronadjen = pronadjiStudenta(brojKartice);
	if (pronadjen != nullptr) {
		redCekanja.push(pronadjen);
	}
}

void Menza::staviStudentaURed()
{
	prikaziStudente();
	cout << "Unesite broj kartice studenta: ";
	int brojKartice;
	cin >> brojKartice;

	staviStudentaURed(brojKartice);
}

void Menza::prikaziRed() const
{
	//Komplikovano mnogo.. ne moze da se prolazi kor red
}

void Menza::usluziStudenta(int redniBrojObroka)
{
	if (redCekanja.empty()) {
		cout << "Nema nikog u redu!" << endl;
		return;
	}
	Student* student = redCekanja.front();

	Obrok* obrok = pronadjiObrok(redniBrojObroka);
	if (obrok == nullptr) {
		cout << "nema obroka sa tim brojem!";
		cout << "Da li student napusta red";
		int komanda;
			cout << "1. Da" << endl << "2. Ne" << endl;
			cin >> komanda;
			if (komanda == 1) {
				redCekanja.pop();
			}
		return;
	}
	if (student->getStanjeNaKartici()- obrok->getCena()< 0) {
		cout << "Student nema dovoljno sredstava!" << endl;
		cout << "Da li student napusta red";
			int komanda;
			cout << "1. Da" << endl << "2. Ne" << endl;
			cin >> komanda;
			if (komanda == 1) {
				redCekanja.pop();
			}
		return;
	}

	brojProdatihObroka++;
	ukupanPrihod += obrok->getCena();
	cout << "Usluzili ste studenta: " << student->getIme() << " " << student->getPrezime() << endl;
	student->dopuniKarticu(obrok->getCena() * -1);
	//umanjiKolicinu vraca signal. 1 ako je stanje 0
	obrok->umanjiKolicinu();
	for (int i = 0; i < obroci.size(); i++) {
		if (obroci[i].getKolicina() == 0) {
			obroci.erase(obroci.begin() + i);
			break;
		}
	}
	redCekanja.pop();

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
	Student* pronadjen = pronadjiStudenta(kartica);
	if (pronadjen != nullptr) {
		pronadjen->dopuniKarticu(kredit); //imam istu metodu u klasi Student, tako da zovem nju!
	}
}

Student* Menza::pronadjiStudenta(int brojKartice)
{
	
	for (int i = 0; i < studenti.size();i++)
	{
		if (studenti[i].getBrojKartice() == brojKartice) {
			return &studenti[i];
		}
	}
	cout << "Ne postoji student sa unetim brojem kartice!" << endl;
	return nullptr;
}

Obrok* Menza::pronadjiObrok(int redniBroj)
{
	for (int i = 0; i < obroci.size();i++)
	{
		if (i == redniBroj - 1) {
			return &obroci[i];
		}
	}
	cout << "Ne postoji obrok sa unetim rednim brojem!" << endl;
	return nullptr;
}

void Menza::izvestaj() const
{
	cout << "Izvestaj!" << endl << "Ukupno je prodato i usluzeno " << brojProdatihObroka << " .Ukupan prihod je " << ukupanPrihod << endl;
}

