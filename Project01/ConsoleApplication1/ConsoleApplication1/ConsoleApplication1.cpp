#include <iostream>
using namespace std; //bunu burda tanýmlamassak aþaðýda her seferinde std yazmamýz gerekir
//Klavyeden girilen iki sayýyý toplayan ve gösteren C++ kodlarý
int main()
{
	setlocale(LC_ALL, "Turkish"); //Türkçe karakter girmemiz için bunu yazmamýz lazým
	int sayi1, sayi2, toplam;
	cout << "1.Sayýyý Giriniz: " << endl;
	cin >> sayi1;
	cout << "2.Sayýyý Giriniz: " << '\n';
	cin >> sayi2;
	toplam = sayi1 + sayi2;
	cout << "Girdiðiniz Sayýlarýn Toplamý: " << toplam;
}