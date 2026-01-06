#include <iostream>
using namespace std;

// Fungsi untuk menukar dua nilai menggunakan pointer
void swap(int *a, int *b)
{
    // isi logic pointer disini
}

int main()
{
    int a, b;

    // Meminta input dari pengguna
    cout << "Masukkan dua bilangan bulat: ";
    cin >> a >> b; // Masukkan nilai ke variabel a dan b

    // Menampilkan nilai sebelum ditukar
    cout << "Sebelum ditukar:\n";
    cout << "a = " << a << " b = " << b << endl;

    // Menukar nilai menggunakan pointer
    swap(&a, &b); // Kirim alamat a dan b ke fungsi swap

    // Menampilkan nilai setelah ditukar
    cout << "Setelah ditukar:\n";
    cout << "a = " << a << " b = " << b << endl;

    return 0;
}