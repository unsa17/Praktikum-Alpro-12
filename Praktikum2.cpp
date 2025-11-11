#include <iostream> //librari
#include <iomanip>
using namespace std;
//prosedur input matriks
void inputMatriks(int matriks[][100], int &baris, int &kolom)
{
    cout << "Masukkan jumlah baris (maks 100): ";
    cin >> baris;
    cout << "Masukkan jumlah kolom (maks 100): ";
    cin >> kolom;
    cout << "\nMasukkan elemen matriks:" << endl;
    for (int i = 0; i < baris; i++)
    {for (int j = 0; j < kolom; j++)
        {cout << "Baris " << i + 1 << ", Kolom " << j + 1 << ": ";
        cin >> matriks[i][j];}}
}
//prosedur cetak format matriks
void cetakMatriksFormat(int matriks[][100], int baris, int kolom)
{
    cout << "\nMatriks " << baris << "x" << kolom << ":" << endl;
    cout << "+";
    for (int j = 0; j < kolom; j++)
    {cout << "-------";}
    cout << "+" << endl;
    for (int i = 0; i < baris; i++)
    {
        cout << "|";
        for (int j = 0; j < kolom; j++)
        {cout << setw(6) << matriks[i][j] << " |";}
        cout << endl;
        cout << "+";
        for (int j = 0; j < kolom; j++)
        {cout << "-------";}
        cout << "+" << endl;
    }
}
int main()
{
    int matriks[100][100];
    int baris, kolom;

    cout << "=== PROGRAM INPUT/OUTPUT MATRIKS ===" << endl
         << endl;
    inputMatriks(matriks, baris, kolom);
    cetakMatriksFormat(matriks, baris, kolom);
    // Menampilkan statistik
    int total = 0, maks = matriks[0][0], min = matriks[0][0];
    for (int i = 0; i < baris; i++)
    {
        for (int j = 0; j < kolom; j++)
        {
            total += matriks[i][j];
            if (matriks[i][j] > maks)
                maks = matriks[i][j];
            if (matriks[i][j] < min)
                min = matriks[i][j];
        }
    }
    cout << "\nStatistik Matriks:" << endl;
    cout << "Total semua elemen: " << total << endl;
    cout << "Nilai maksimum: " << maks << endl;
    cout << "Nilai minimum: " << min << endl;
    cout << "Rata-rata: " << (double)total / (baris * kolom) << endl;
    return 0;
}