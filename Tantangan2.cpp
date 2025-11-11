// Rifqi Al Fikri
// 125140039
// Praktikum 12 Alpro

#include <iostream> 
using namespace std;
int main()
{
    int baris, kolom;
    int matriks[10][10];
    cout << "=== PROGRAM MATRIKS SEDERHANA ===" << endl;
    cout << "Masukkan jumlah baris: ";
    cin >> baris;
    cout << "Masukkan jumlah kolom: ";
    cin >> kolom;
    // Input elemen matriks
    cout << "\nMasukkan elemen-elemen matriks:" << endl;
    for (int i = 0; i < baris; i++)
    {
        for (int j = 0; j < kolom; j++)
        {
            cout << "Elemen [" << i + 1 << "][" << j + 1 << "] = ";
            cin >> matriks[i][j];
        }
    }
    //menampilkan matriks serta jumlah tiap baris
    cout << "\nIsi Matriks dan Jumlah Tiap Baris:" << endl;
    for (int i = 0; i < baris; i++)
    {
        int jumlahBaris = 0;
        for (int j = 0; j < kolom; j++)
        {
            cout << matriks[i][j] << "\t";
            jumlahBaris += matriks[i][j];
        }
        cout << "| Jumlah baris ke-" << i + 1 << " = " << jumlahBaris << endl;
    }
    return 0;
}