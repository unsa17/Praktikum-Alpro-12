#include <iostream>
#include <iomanip>
using namespace std;
const int MAX_SIZE = 50;
void inputMatriks(int matriks[][MAX_SIZE], string nama, int &baris, int &kolom)
{
    cout << "Masukkan ukuran matriks " << nama << " (baris kolom): ";
    cin >> baris >> kolom;
    cout << "Masukkan elemen matriks " << nama << ":" << endl;
    for (int i = 0; i < baris; i++)
    {
        cout << "Baris " << i + 1 << ": ";
        for (int j = 0; j < kolom; j++)
        {cin >> matriks[i][j];}
    }
}
void cetakMatriks(int matriks[][MAX_SIZE], int baris, int kolom, string judul)
{
    cout << "\n"
         << judul << endl;
    for (int i = 0; i < baris; i++)
    {
        for (int j = 0; j < kolom; j++)
        {cout << setw(5) << matriks[i][j];}
        cout << endl;}
}
void penjumlahanMatriks(int A[][MAX_SIZE], int B[][MAX_SIZE], int hasil[][MAX_SIZE],
                        int baris, int kolom)
{
    for (int i = 0; i < baris; i++)
    {
        for (int j = 0; j < kolom; j++)
        {hasil[i][j] = A[i][j] + B[i][j];}}
}
void penguranganMatriks(int A[][MAX_SIZE], int B[][MAX_SIZE], int hasil[][MAX_SIZE],
                        int baris, int kolom)
{
    for (int i = 0; i < baris; i++)
    {
        for (int j = 0; j < kolom; j++)
        {hasil[i][j] = A[i][j] - B[i][j];}}
}
int main()
{
    int matriksA[MAX_SIZE][MAX_SIZE], matriksB[MAX_SIZE][MAX_SIZE];
    int hasil[MAX_SIZE][MAX_SIZE];
    int barisA, kolomA, barisB, kolomB;
    cout << "=== OPERASI PENJUMLAHAN & PENGURANGAN MATRIKS ===" << endl<< endl;
    // Input matriks A
    inputMatriks(matriksA, "A", barisA, kolomA);
    // Input matriks B
    inputMatriks(matriksB, "B", barisB, kolomB);
    // Validasi ukuran matriks
    if (barisA != barisB || kolomA != kolomB)
    {
        cout << "\nError: Ukuran matriks tidak sama!" << endl;
        cout << "Operasi tidak dapat dilakukan." << endl;
        return 1;}
    // Cetak matriks input
    cetakMatriks(matriksA, barisA, kolomA, "Matriks A:");
    cetakMatriks(matriksB, barisB, kolomB, "Matriks B:");
    // Operasi penjumlahan
    penjumlahanMatriks(matriksA, matriksB, hasil, barisA, kolomA);
    cetakMatriks(hasil, barisA, kolomA, "Hasil A + B:");
    // Operasi pengurangan
    penguranganMatriks(matriksA, matriksB, hasil, barisA, kolomA);
    cetakMatriks(hasil, barisA, kolomA, "Hasil A - B:");
    return 0;
}