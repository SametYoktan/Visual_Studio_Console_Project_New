#include <iostream>
using namespace std;

//Girilen say�n�n Tek yada �ift oldu�unu g�steren C++ kodlar�
int main()
{
	setlocale(LC_ALL, "Turkish");
	int sayi;
	cout << "Say� Girinizi: ";
	cin >> sayi;
	if (sayi % 2 == 0)
		cout << "Bu Bir �ift Say�d�r";
	else
		cout << "Bu Bir Tek Say�d�r";
}