#include <iostream>

using namespace std;

//C++Kodlar� :  While D�ng�s� kullanarak Faktoriyel Hesaplama
int main()
{
	setlocale(LC_ALL, "Turkish");
	int value, endvalue, toplam;
	cout << "Faktoriyel Hesaplama"<<endl;
	cout << endl;
	cout << "Faktoriyeli Al�nacak Say�y� Giriniz: ";
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