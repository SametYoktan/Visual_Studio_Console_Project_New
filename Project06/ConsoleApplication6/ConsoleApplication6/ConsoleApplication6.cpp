#include <iostream>
using namespace std;

//C++ Girilen sayının 3′ e ve 5′ e tam bölünüp bülünmediğini gösteren C++ kodları
int main()
{
	setlocale(LC_ALL, "Turkish");
	int sayi;
	cout << "Bir Sayı Giriniz: ";
	cin >> sayi;
	if (sayi % 3 == 0 && sayi % 5 == 0)
		cout << "Sayı 3'e Ve 5'e Tam Bölünüyor";
	else
		cout << "Sayı 3'e Ve 5'e Tam Bölünmüyor";
}