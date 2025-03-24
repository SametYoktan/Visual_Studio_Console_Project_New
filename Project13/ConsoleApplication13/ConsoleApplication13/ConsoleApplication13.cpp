#include <iostream>

using namespace std;

//C++ Kodlarý : For Döngüsü kullanrak Faktoriyel Hesaplama Örneði
int main()
{
	int a;
	int i;
	int	toplam = 1;
	cout << "****FAKTORIYEL PROGRAMI****" << endl;
	cout << endl;
baslat:
	cout << "Faktoriyeli Alinacak Sayiyi Giriniz: ";
	cin >> a;
	cout << endl;
	if (a >= 0)
		for (i = 1; i <= a; i++)
		{
			toplam = toplam * i;
		}
	else
	{
		cout << "Negatif sayi girdiniz. Lutfen pozitif sayi giriniz." << endl;
		cout << endl;
		cout << endl;
		goto baslat;
	}
	cout << endl;
	cout << a << "!=" << toplam << endl;
	cout << endl;
}