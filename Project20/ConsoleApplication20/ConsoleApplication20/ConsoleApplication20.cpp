#include <iostream>
#define MAX_SIZE 100 

using namespace std;

//C++ ile kullan�c�n�n girdi�i bir kelimenin karakter say�s�n� bulan ve ekranda g�steren program
int main()
{
    setlocale(LC_ALL, "Turkish"); //T�rk�e karakter
    char text[MAX_SIZE];
    char* str = text;
    int sayac = 0;

    cout << "Metni Gir: ";
    cin >> text;

    while (*(str++) != '\0') sayac++;

    cout << text << " uzunlu�u: " << sayac;
    return 0;
}