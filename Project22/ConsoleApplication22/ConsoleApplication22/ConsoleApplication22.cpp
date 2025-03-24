#include <iostream>

using namespace std;

//C++ ile 1-500 arasýndaki mükemmel sayýlarý listeleye
int main()
{
    cout << "\n\n 1-500 Arasý Mükemmel Sayýlarý Bulma:\n";
    cout << "------------------------------------------------\n";
    int i = 1, u = 1, sum = 0;
    cout << "\n 1-500 Arasý Mükemmel Sayý Listesi \n";
    while (i <= 500)
    {
        while (u <= 500)
        {
            if (u < i)
            {
                if (i % u == 0)
                    sum = sum + u;
            }
            u++;
        }
        if (sum == i) {
            cout << i << "  " << "\n";
        }
        i++;
        u = 1;
        sum = 0;
    }
}