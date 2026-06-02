#pragma once
#include <iostream>
#include <string>
using namespace std;
class Student
{
private:
    string ime;
    string prezime;
    int indeks;
    int brojKartice;
    double stanjeNaKartici;

public:
    Student();
    Student(string ime, string prezime, int indeks,
        int brojKartice);

    // Getteri
    string getIme() const;
    string getPrezime() const;
    int getBrojKartice() const;
    int getIndeks() const;
    double getStanjeNaKartici() const;

    // Setteri
    void setIme(string ime);
    void setPrezime(string prezime);

    // Ostalo
    void dopuniKarticu(double iznos);

    void prikazi() const;
    void prikazi(bool detaljno) const;
};
