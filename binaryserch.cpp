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

    