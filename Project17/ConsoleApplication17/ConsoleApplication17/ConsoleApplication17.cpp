#include <iostream>

using namespace std;

//0-100 aras� girilen puan� 0-5 aras� nota �eviren C++ Kodlar�
int main()
{
    setlocale(LC_ALL, "Turkish"); //T�rk�e karakter
    int puan;
    cout << "Puan� Girin : ";
    cin >> puan;
    if (puan > 100)
        cout << "Ge�ersiz.";
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
        cout << "Ge�ersiz.";
}