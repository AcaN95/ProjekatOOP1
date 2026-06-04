#include "Student.h"
#include <iostream>
#include <string>
using namespace std;

Student::Student(string Ime, string Prezime, int Indeks, int BrojKartice)
{
	ime = Ime;
	prezime = Prezime;
	indeks = Indeks;
	brojKartice = BrojKartice;
	stanjeNaKartici = 1000;
}

string Student::getIme() const
{
	return ime;
}

string Student::getPrezime() const
{
	return prezime;
}

int Student::getBrojKartice() const
{
	return brojKartice;
}

int Student::getIndeks() const
{
	return indeks;
}

double Student::getStanjeNaKartici() const
{
	return stanjeNaKartici;
}

void Student::setIme(string Ime)
{
	ime = Ime;
}

void Student::setPrezime(string Prezime)
{
	prezime = Prezime;
}


void Student::dopuniKarticu(double iznos)
{
	stanjeNaKartici = stanjeNaKartici + iznos;
}

void Student::prikazi() const
{
	cout << ime << " " << prezime << " Broj kartice:" << brojKartice << " Stanje na kartici:" << stanjeNaKartici << endl;
}

void Student::prikazi(bool detaljno) const
{
	cout << ime << " " << prezime << " " << indeks << " " << brojKartice << " " << stanjeNaKartici << endl;

}
