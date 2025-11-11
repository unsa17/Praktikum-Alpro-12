// Rifqi Al Fikri
// 125140039
// Praktikum 12 Alpro

#include <iostream> //librari
using namespace std;

int main() {
    //deklarasi variabel
    int n;
    cout << "Masukkan ukuran matriks: ";
    cin >> n;

    //deklarasi array
    int a[n][n];

    //menghitung array dengan pola
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int atas = i;
            int kiri = j;
            int bawah = n - 1 - i;
            int kanan = n - 1 - j;

            //menentukan jarak minimum dari tepi menggunakan fungsi min()
            int jarakmin = min(min(atas, bawah), min(kiri, kanan));

            a[i][j] = jarakmin + 1;
        }
    }
    //menampilkan hasil
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
