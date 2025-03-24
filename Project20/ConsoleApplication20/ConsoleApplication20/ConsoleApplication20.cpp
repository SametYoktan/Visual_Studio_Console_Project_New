#include <iostream>
#define MAX_SIZE 100 

using namespace std;

//C++ ile kullanýcýnýn girdiði bir kelimenin karakter sayýsýný bulan ve ekranda gösteren program
int main()
{
    setlocale(LC_ALL, "Turkish"); //Türkçe karakter
    char text[MAX_SIZE];
    char* str = text;
    int sayac = 0;

    cout << "Metni Gir: ";
    cin >> text;

    while (*(str++) != '\0') sayac++;

    cout << text << " uzunluðu: " << sayac;
    return 0;
}