#include <iostream>

using namespace std;

//Switch kullanarak 4 iþlem yapan basit bir hesap makinesi C++ Kodlarý
int main()
{
	setlocale(LC_ALL, "Turkish");
	cout << "******************************" << endl;
	cout << "* *" << endl;
	cout << "* HESAP MAKINESI *" << endl;
	cout << "* *" << endl;
	cout << "* Toplama Icin + kullaniniz *" << endl;
	cout << "* Cikarma Icin - kullaniniz *" << endl;
	cout << "* Carpma Icin * kullaniniz *" << endl;
	cout << "* Bolme Icin / kullaniniz. *" << endl;
	cout << "* *" << endl;
	cout << "* *" << endl;
	cout << "******************************" << endl;
	cout << endl;
baslat:
	double sayi1, sayi2, sonuc;
	char islem;

	cout << "Birinci sayiyi giriniz: ";
	cin >> sayi1;
	cout << endl;

	cout << "Islemi giriniz: ";
	cin >> islem;
	cout << endl;

	cout << "Ikinci sayiyi giriniz: ";
	cin >> sayi2;
	cout << endl;

	switch (islem)
	{
	case '+':
		sonuc = (sayi1 + sayi2);
		cout << "Toplamanin sonucu: " << sonuc << endl; break;
	case '-':
		sonuc = (sayi1 - sayi2);
		cout << "Cikarmanin sonucu: " << sonuc << endl; break;
	case '*':
		sonuc = (sayi1 * sayi2);
		cout << "Carpmanin sonucu: " << sonuc << endl; break;
	case '/':
		sonuc = (sayi1 / sayi2);
		cout << "Bolmenin sonucu: " << sonuc << endl; break;
	}
}