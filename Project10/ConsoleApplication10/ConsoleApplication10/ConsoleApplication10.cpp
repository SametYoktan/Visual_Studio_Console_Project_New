#include <iostream>

using namespace std;

//For Döngüsü kullanarak kullanýcýdan 5 sayý isteyen ve girilen bu sayýlarýn toplamýný ekranda gösteren C++ Kodlarý
int main()
{
	int toplam = 0;
	int sayi;
	setlocale(LC_ALL, "Turkish"); //Türkçe karakter
	for (size_t i = 1; i <= 5; i++)
	{
		cout << i << ". Sayýyý Giriniz: ";
		cin >> sayi;
		toplam = toplam + sayi;
	}
	cout << "Girilen 5 Sayýnýn Toplamý: "<<toplam;
}