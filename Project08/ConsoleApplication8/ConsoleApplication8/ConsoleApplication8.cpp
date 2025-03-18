#include <iostream>

using namespace std;

//C++ For döngüsü ile 1-100 arasý sayýlarý ekranda yazdýran C++ Kodlarý
int main()
{
	setlocale(LC_ALL, "Turkish");
	for (size_t i = 0; i <=100; i++)
	{
		cout << i << ". Sayi"<<endl;
	}
}