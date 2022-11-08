#include <iostream>
#include <vector>

using namespace std;

int main()
{
    
    vector<int> Numeros;
    int x, n=0, rep=0;
    
    for (int i = 0; i < 8; i++)
    {
        cout<<"Ingresa un numero: ";
        cin>>x;
        cout<<endl;
        
        Numeros.push_back(x);
    }
    
    for (int i = 0; i < Numeros.size(); i++)
    {
        if (Numeros[n] < Numeros[i])
        {
            n=i;
        }
    }
    
    for (int i=0; i < Numeros.size(); i++)
    {
        if(Numeros[n] == Numeros[i])
        {
            rep = rep + 1;
            //cout<<rep<<endl;
        }
    }
    
    cout<<"El numero mayor ("<<Numeros[n]<<") se repitio: "<<rep<<endl;

    return 0;
}
