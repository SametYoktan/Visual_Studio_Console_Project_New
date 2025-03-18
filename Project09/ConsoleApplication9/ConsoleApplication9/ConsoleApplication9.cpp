#include <iostream>

using namespace std;

//1-100 arasý çift sayýlarý listeleyen C++ Kodlarý
int main()
{
	setlocale(LC_ALL, "Turkish");
	for (size_t i = 1; i <=100; i++)
	{
		if (i % 2 == 0)
			cout << i<<endl;
	}
}