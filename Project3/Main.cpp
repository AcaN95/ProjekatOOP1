#include <iostream>
using namespace std;
int main() {
	cout << "Hello World!" << endl;


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
        cout << "9. Kraj\n";

        cout << "\nIzbor: ";
        cin >> izbor;

        switch (izbor) {
        case 1:
            // dodaj studenta
            break;

        case 2:
            // dodaj obrok
            break;

        case 3:
            // prikazi studente
            break;

        case 4:
            // prikazi obroke
            break;

        case 5:
            // stavi u red
            break;

        case 6:
            // usluzi studenta
            break;

        case 7:
            // dopuni karticu
            break;

        case 8:
            // izvestaj
            break;

        case 9:
            cout << "Kraj programa.\n";
            break;

        default:
            
            cout << "Nepostojeca opcija!\n";
        }

    } while (izbor != 9);



	return 0;
}