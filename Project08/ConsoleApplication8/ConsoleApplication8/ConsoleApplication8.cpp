#include <iostream>

using namespace std;

//C++ For d�ng�s� ile 1-100 aras� say�lar� ekranda yazd�ran C++ Kodlar�
int main()
{
	setlocale(LC_ALL, "Turkish");
	for (size_t i = 0; i <=100; i++)
	{
		cout << i << ". Sayi"<<endl;
	}
}