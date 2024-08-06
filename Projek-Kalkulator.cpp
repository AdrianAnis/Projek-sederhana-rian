#include <iostream>
using namespace std;

int main(){
    int angka1, angka2;
    int menu, hasil;
    
    system("cls");
    cout << "\t\t\t ===========================" << endl;
    cout << "\t\t\t\t--KALKULATOR--" << endl;
    cout << "\t\t\t ===========================" << endl << endl;
    cout << "PILIH OPERASI ARITMATIKA : " << endl;
    cout << "1. Penjumlahan" << endl;
    cout << "2. Pengurangan" << endl;
    cout << "3. Pembagian" << endl;
    cout << "4. Perkalian" << endl << endl;

   
    cout << "Masukkan Pilihan : ";
    cin >> menu; 

    system("cls");
    cout << "Masukkan Angka Pertama : ";
    cin >> angka1;
    cout << "Masukkan Angka Kedua : ";
    cin >> angka2;

    if (menu==1) {
        hasil = angka1 + angka2;
        cout << "Hasil penjumlahan = " << hasil;
    }

    else if (menu==2) {
        hasil = angka1 - angka2;
        cout << "Hasil Pengurangan = " << hasil;
    }

    else if (menu==3) {
        hasil = angka1 / angka2;
        cout << "Hasil Pembagian = " << hasil;
    }

    else if (menu==4) {
        hasil = angka1 * angka2;
        cout << "Hasil Perkalian = " << hasil;
    }

    return 0;
}
