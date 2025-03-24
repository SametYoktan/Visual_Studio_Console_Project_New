#include <iostream>

using namespace std;

//Klavyeden girilen sayýya kadar olan sayýlar içinde tek olanlarý yazdýran C++ kodlarý
int main()
{
	setlocale(LC_ALL, "Turkish");
	int sayi;
	cout << "Bir Sayý Giriniz ";
	cin >> sayi;
	for (size_t i = 0; i <=sayi; i++)
	{
	if (i % 2 != 0)
		cout << i<<endl;
	}
}