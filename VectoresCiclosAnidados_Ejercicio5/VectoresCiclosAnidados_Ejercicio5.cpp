#include <iostream>
#include <vector>

using namespace std;

int main()
{
    
    vector<int> Numeros;
    vector<int> Indices4;
    int x;
    
    for (int i = 0; i < 8; i++)
    {
        cout<<"Ingresa un numero: ";
        cin>>x;
        cout<<endl;
        Numeros.push_back(x);
        
        int mod = x % 10;
        
        if (mod == 4)
        {
            Indices4.push_back(i);
        }
    }
    
    cout<<"Lista completa de numeros: ";
    
    for (int i = 0; i < Numeros.size(); i++)
    {
        cout<<Numeros[i]<<", ";
    }
    
    cout<<"\nNumeros que terminan en 4: ";
    
    for (int i = 0; i < Indices4.size(); i++)
    {
        cout<<Numeros[Indices4[i]]<<", ";
    }

    return 0;
}
