#include <iostream>
using namespace std;

//C++ Kullanýcýnýn girdiði sayý 0-100 arasýndaysa geçerli, 0-100 arasýnda deðilse Geçersiz sayý yazdýran C++ Kodlarý
int main()
{
	setlocale(LC_ALL, "Turkish");
	int sayi;
	cout << "Bir Sayý Giriniz: ";
	cin >> sayi;
	if (sayi >=0 && sayi<=100)
		cout << "Sayý 0 Ýle 100 Arasýndadýr";
	else
		cout << "Sayý 0 Ýle 100 Arasýnda Deðildir";
}