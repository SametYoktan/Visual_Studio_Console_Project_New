#include <iostream>
using namespace std;

//Girilen sayýnýn Tek yada Çift olduðunu gösteren C++ kodlarý
int main()
{
	setlocale(LC_ALL, "Turkish");
	int sayi;
	cout << "Sayý Girinizi: ";
	cin >> sayi;
	if (sayi % 2 == 0)
		cout << "Bu Bir Çift Sayýdýr";
	else
		cout << "Bu Bir Tek Sayýdýr";
}