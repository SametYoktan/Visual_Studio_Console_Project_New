#include <iostream>
using namespace std;

//C++ Kullan�c�n�n girdi�i say� 0-100 aras�ndaysa ge�erli, 0-100 aras�nda de�ilse Ge�ersiz say� yazd�ran C++ Kodlar�
int main()
{
	setlocale(LC_ALL, "Turkish");
	int sayi;
	cout << "Bir Say� Giriniz: ";
	cin >> sayi;
	if (sayi >=0 && sayi<=100)
		cout << "Say� 0 �le 100 Aras�ndad�r";
	else
		cout << "Say� 0 �le 100 Aras�nda De�ildir";
}