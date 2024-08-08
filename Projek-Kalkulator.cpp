#include <iostream>
using namespace std;

int main(){
    int angka1, angka2;
    int menu_awal, hasil, menu_akhir;
    
    menu :
    system("cls");
    cout << "\t\t\t ===========================" << endl;
    cout << "\t\t\t\t--KALKULATOR--" << endl;
    cout << "\t\t\t ===========================" << endl << endl;
    cout << "PILIH OPERASI ARITMATIKA : " << endl;
    cout << "1. Penjumlahan" << endl;
    cout << "2. Pengurangan" << endl;
    cout << "3. Pembagian" << endl;
    cout << "4. Perkalian" << endl << endl;
    
    cout << "Masukkan Angka Pertama : ";
    cin >> angka1;
    cout << "Masukkan Angka Kedua : ";
    cin >> angka2;
   
    cout << "Masukkan Pilihan : ";
    cin >> menu_awal; 

    system("cls");
    if (menu_awal==1) {
        hasil = angka1 + angka2;
        cout << "Hasil penjumlahan = " << hasil;
    }

    else if (menu_awal==2) {
        hasil = angka1 - angka2;
        cout << "Hasil Pengurangan = " << hasil;
    }

    else if (menu_awal==3) {
        hasil = angka1 / angka2;
        cout << "Hasil Pembagian = " << hasil;
    }

    else if (menu_awal==4) {
        hasil = angka1 * angka2;
        cout << "Hasil Perkalian = " << hasil;
    }

    else {
        cout << "ERROR, PILIHAN TIDAK DAPAT DI TEMUKAN";
    }
    
    menu_2 :
    cout << endl << endl;
    cout<< "===========================" << endl;
    cout << "1. Kembali ke menu" << endl;
    cout << "2. Selesai" << endl << endl;
    cout << "Masukkan Pilihan : ";
    cin >> menu_akhir;

    if (menu_akhir==1){
        goto menu;
    }
    
    else if (menu_akhir==2){
        cout << "TERIMAKASIH TELAH MENGGUNAKAN KALKULATOR INI ;)";
    }

    else {
        system("cls");
        cout << "Error, pilihan tidak ditemukan";
        goto menu_2;
    }

    return 0;
}
