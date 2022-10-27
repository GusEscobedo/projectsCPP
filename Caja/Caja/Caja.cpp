#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int i, j, x, y, z;
    //Vector Minas

    cout << "Valor de X: ";
    cin >> x;
    cout << "Valor de Y: ";
    cin >> y;
    
    //For posicion Minas

    for (i = 0; i < x; i++)
    {
        for (j = 0; j < y; j++)
        {
            
            z = rand() % y - 1;
            
            if (i == 0 || i == x - 1 || j == 0 || j == y - 1 || j == z)
            {
            
                cout << "1 ";

            }
            else
            {
                cout << "* ";
            }

        }

        cout << "\n";
    }

}

