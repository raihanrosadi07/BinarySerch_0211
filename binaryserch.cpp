#include <iostream>
using namespace std;

int element[10];
int nPanjang;
int x;

void input()
{
    while(true)
    {
        cout << "Masukkan banyak elemen pada array: ";
        cin >> nPanjang;

        if (nPanjang <= 10)
        {
            break;
        }
        else
        {
            cout << "\n[!] Jumlah element tidak boleh lebih dari 10. Silahkan coba lagi.\n";
        }
    }

cout << "\n=============================\n";
    cout << "\n====Masukkan Elemen Array====\n";
    cout << "\n=============================\n";

    for (int i = 0; i < nPanjang; i++)
    {
        cout << "Data ke-" << i + 1 << ": ";
        cin >> element[i];
    }
}

