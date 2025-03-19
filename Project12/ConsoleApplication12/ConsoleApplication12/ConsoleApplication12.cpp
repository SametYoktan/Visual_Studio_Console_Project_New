#include <iostream>

using namespace std;

//C++Kodlarý :  While Döngüsü kullanarak Faktoriyel Hesaplama
int main()
{
	setlocale(LC_ALL, "Turkish");
	int value, endvalue, toplam;
	cout << "Faktoriyel Hesaplama"<<endl;
	cout << endl;
	cout << "Faktoriyeli Alýnacak Sayýyý Giriniz: ";
	cin >> value;
	endvalue = 1;
	toplam = 1;
	while (endvalue <value)
	{
		endvalue++;
		toplam = toplam * endvalue;
	}
	cout << endl;
	cout << value << "!= " << toplam << endl;
	cout << endl;
}