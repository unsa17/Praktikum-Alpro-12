#include <iostream> //librari
#include <iomanip>
using namespace std;
const int BARIS = 3; //deklarasi variabel
const int KOLOM = 4;
//prosedur untuk mencetak matriks
void cetakMatriks(int matriks[][KOLOM], int baris, int kolom, string judul)
{
    cout << judul << endl;
    cout << "-------------------" << endl;
    for (int i = 0; i < baris; i++)
    {for (int j = 0; j < kolom; j++)
        {cout << setw(4) << matriks[i][j];}
        cout << endl;}
    cout << endl;
}
int main()
{
    // 1. Deklarasi dan inisialisasi langsung
    int matriks1[BARIS][KOLOM] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}};
    // 2. Deklarasi kemudian inisialisasi dengan loop
    int matriks2[BARIS][KOLOM];
    int counter = 1;
    for (int i = 0; i < BARIS; i++)
    {for (int j = 0; j < KOLOM; j++)
        {
        matriks2[i][j] = counter * 10;
        counter++;}
    }
    // 3. Matriks dengan inisialisasi nilai nol
    int matriks3[BARIS][KOLOM] = {0};
    // 4. Matriks identitas (modifikasi untuk persegi)
    int matriks4[4][4] = {0};
    for (int i = 0; i < 4; i++)
    {matriks4[i][i] = 1;}
    // Cetak semua matriks
    cetakMatriks(matriks1, BARIS, KOLOM, "Matriks 1 (Inisialisasi Langsung)");
    cetakMatriks(matriks2, BARIS, KOLOM, "Matriks 2 (Inisialisasi Loop)");
    cetakMatriks(matriks3, BARIS, KOLOM, "Matriks 3 (Nol Matrix)");
    cetakMatriks(matriks4, 4, 4, "Matriks 4 (Identitas 4x4)");
    return 0;
}