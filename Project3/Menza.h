#pragma once
#include "Student.h"
#include "Obrok.h"
#include <vector>
#include <queue>

using namespace std;
class Menza
{
public:
    Menza();
    ~Menza();

    // Upravljanje studentima
    void dodajStudenta(Student* student);
    void prikaziStudente() const;

    // Upravljanje obrocima
    void dodajObrok(Obrok* obrok);
    void prikaziObroke() const;
    void sortirajObrokePoCeni();

    // Red čekanja
    void staviStudentaURed(int brojKartice);
    void usluziStudenta(int redniBrojObroka);

    // Kartice
    void dopuniKarticu(int brojKartice, double iznos);

    // Pretraga
    Student* pronadjiStudenta(int brojKartice);
    Obrok* pronadjiObrok(int redniBroj);

    // Izveštaj
    void izvestaj() const;

    // Statistika
    static int getBrojProdatihObroka();
    static double getUkupanPrihod();
private:
	vector<Student*> studenti;
	vector<Obrok*> obroci;

	queue<Student*> redCekanja;
	static int brojProdatihObroka;
	static int ukupanPrihod;

};

