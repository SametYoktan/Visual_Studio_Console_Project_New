#include <iostream>

using namespace std;

//Klavyeden girilen say�ya kadar olan say�lar i�inde tek olanlar� yazd�ran C++ kodlar�
int main()
{
	setlocale(LC_ALL, "Turkish");
	int sayi;
	cout << "Bir Say� Giriniz ";
	cin >> sayi;
	for (size_t i = 0; i <=sayi; i++)
	{
	if (i % 2 != 0)
		cout << i<<endl;
	}
}