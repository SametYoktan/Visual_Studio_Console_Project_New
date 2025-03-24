#include <iostream>

using namespace std;

//0-100 arasý girilen puaný 0-5 arasý nota çeviren C++ Kodlarý
int main()
{
    setlocale(LC_ALL, "Turkish"); //Türkçe karakter
    int puan;
    cout << "Puaný Girin : ";
    cin >> puan;
    if (puan > 100)
        cout << "Geçersiz.";
    else if (puan > 84)
        cout << "5";
    else if (puan > 69)
        cout << "4";
    else if (puan > 59)
        cout << "3";
    else if (puan > 49)
        cout << "2";
    else if (puan >= 0)
        cout << "1";
    else
        cout << "Geçersiz.";
}