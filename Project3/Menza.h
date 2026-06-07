#pragma once
#include "Student.h"
#include "Obrok.h"
#include <vector>
#include <queue>
#include <iostream>
#include <string>

using namespace std;
class Menza
{
private:
    vector<Student> studenti;
    vector<Obrok> obroci;

    queue<Student*> redCekanja;

    static int brojProdatihObroka;
    static int ukupanPrihod;

public:
    Menza();
    ~Menza();

    // Upravljanje studentima
    void dodajStudenta();
    void prikaziStudente() const;

    // Upravljanje obrocima
    void dodajObrok();
    void prikaziObroke() const;
    void sortirajObrokePoCeni();

    // Red čekanja
    void staviStudentaURed(int brojKartice);
    void staviStudentaURed();
    void prikaziRed() const; //Komplikovano mnogo.. ne moze da se prolazi kor red

    void usluziStudenta(int redniBrojObroka);

    // Kartice
    void dopuniKarticu();

    // Pretraga
    Student* pronadjiStudenta(int brojKartice);
    Obrok* pronadjiObrok(int redniBroj);

    // Izveštaj
    void izvestaj() const;


    void pauza() const;
};
