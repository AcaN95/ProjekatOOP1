#include <iostream>
#include "Menza.h"
#include "Obrok.h"
#include "Student.h"
#include <string>
using namespace std;



int main() {
	cout << "Hello World!" << endl;

    Menza menza;

    int izbor;

    do {
		system("cls"); // ocisti ekran
        cout << "\n===== STUDENTSKA MENZA =====\n";
        cout << "1. Dodaj studenta\n";
        cout << "2. Dodaj obrok\n";
        cout << "3. Prikazi studente\n";
        cout << "4. Prikazi obroke\n";
        cout << "5. Stavi studenta u red\n";
        cout << "6. Usluzi sledeceg studenta\n";
        cout << "7. Dopuni stanje kartice\n";
        cout << "8. Izvestaj na kraju smene\n";
        cout << "9. Sortiraj obroke po ceni\n";
        cout << "10. Kraj\n";

        cout << "\nIzbor: ";
        cin >> izbor;

        switch (izbor) {
        case 1: {
            system("cls");

            
            menza.dodajStudenta();
            // dodaj studenta
            break;
        }
        case 2:
			system("cls");
            menza.dodajObrok();
            break;

        case 3:
            // prikazi studente
            system("cls");
			menza.prikaziStudente();
            break;

        case 4:
            system("cls");
            menza.prikaziObroke();
            // prikazi obroke
            break;


        case 5:
            system("cls");
            menza.staviStudentaURed();
            

            // stavi u red

            break;

        case 6:
            system("cls");
            menza.prikaziObroke();
            int rbObroka;
			cout << endl << "Unesite redni broj obroka koji student zeli" << endl << "Obrok: ";
			cin >> rbObroka;
			menza.usluziStudenta(rbObroka);
            // usluzi studenta
            break;

        case 7:
            system("cls");
            menza.prikaziStudente();
            menza.dopuniKarticu();
            break;

        case 8:
			system("cls");
            // izvestaj
            break;
        case 9:
			system("cls");
            menza.sortirajObrokePoCeni();
            break;
        case 10:
            cout << "Kraj programa.\n";
            break;

        default:
            
            cout << "Nepostojeca opcija!\n";
        }

    } while (izbor != 10);



	return 0;
}