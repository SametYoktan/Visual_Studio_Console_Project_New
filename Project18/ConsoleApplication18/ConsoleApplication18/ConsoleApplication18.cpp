#include <iostream>

using namespace std;

//C++ Kodlar� :  Klavyeden girilen fiyat de�erine % 18 kdv ekleyip kdvli fiyat�n� bulan ve ekrana yazan program
int main()
{
	setlocale(LC_ALL, "Turkish");
	float fiyat=0,kdvfiyat;
	cout << "Bir F�yat Giriniz: ";
	cin >> fiyat;
	kdvfiyat =fiyat+(fiyat*18/100);
	cout << "Girdi�iniz Fiyat�n Kdv'li Fiyat� " << kdvfiyat;
}