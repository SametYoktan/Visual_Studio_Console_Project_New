#include <iostream>

using namespace std;

//C++ Kodlarý :  Klavyeden girilen fiyat deðerine % 18 kdv ekleyip kdvli fiyatýný bulan ve ekrana yazan program
int main()
{
	setlocale(LC_ALL, "Turkish");
	float fiyat=0,kdvfiyat;
	cout << "Bir FÝyat Giriniz: ";
	cin >> fiyat;
	kdvfiyat =fiyat+(fiyat*18/100);
	cout << "Girdiðiniz Fiyatýn Kdv'li Fiyatý " << kdvfiyat;
}