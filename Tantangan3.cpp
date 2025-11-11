// Rifqi Al Fikri
// 125140039
// Praktikum 12 Alpro

#include <iostream> //librari
using namespace std;

int main()
{
    //deklarasi variabel dan array
    int baris, kolom;
    int matriks[10][10];
    //minta input pengguna
    cout << "=== PROGRAM MATRIKS SEDERHANA ===" << endl;
    cout << "Masukkan jumlah baris: ";
    cin >> baris;
    cout << "Masukkan jumlah kolom: ";
    cin >> kolom;

    //minta input elemen matriks
    cout << "\nMasukkan elemen-elemen matriks:" << endl;
    for (int i = 0; i < baris; i++)
    {
        for (int j = 0; j < kolom; j++)
        {
            cout << "Elemen [" << i + 1 << "][" << j + 1 << "] = ";
            cin >> matriks[i][j];
        }
    }

    //deklarasi array untuk menyimpan jumlah tiap kolom
    int jumlahKolom[10] = {0};

    //menampilkan matriks lalu menghitung jumlah baris dan menghitung jumlah kolom
    cout << "\nIsi Matriks dan Jumlah Tiap Baris:" << endl;
    for (int i = 0; i < baris; i++)
    {
        int jumlahBaris = 0;
        for (int j = 0; j < kolom; j++)
        {
            cout << matriks[i][j] << "\t";
            jumlahBaris += matriks[i][j];
            jumlahKolom[j] += matriks[i][j]; //menambahkan ke jumlah kolom
        }
        cout << "| Jumlah baris ke-" << i + 1 << " = " << jumlahBaris << endl;
    }

    //tampilkan jumlah kolom
    cout << "--------------------------------------------------------------\n";
    cout << "Jumlah kolom:\t";
    for (int j = 0; j < kolom; j++)
    {
        cout << jumlahKolom[j] << "\t";
    }
    cout << endl;

    //tampilkan matriks asli (sebelum ditranspose)
    cout << "\nMatriks asli:\n";
    for (int i = 0; i < baris; i++)
    {
        for (int j = 0; j < kolom; j++)
        {
            cout << matriks[i][j];
            if (j < kolom - 1)
                cout << " "; //kasi jarak tiap elemen
        }
        cout << endl;
    }

    //tampilkan matriks transpose
    cout << "\nTranspose matriks:\n";
    for (int j = 0; j < kolom; j++)
    {
        for (int i = 0; i < baris; i++)
        {cout << matriks[i][j] << " ";}
        cout << endl;
    }

    return 0;
}
