#include <iostream>
#include <vector>

using namespace std;

int main()
{
    
    vector<int> Numeros;
    int x, n=0;
    
    for (int i = 0; i < 12; i++)
    {
        cout<<"Ingresa un numero: ";
        cin>>x;
        cout<<endl;
        Numeros.push_back(x);
    }
    
    for (int i = 0; i<Numeros.size(); i++)
    {
        
        if (Numeros[n] < Numeros[i])
        {
            n=i;
            //cout<<Numeros[n]<<"<"<<Numeros[i]<<endl;
        }
        
    }
    
    cout<<"El numero mas grande es: "<<Numeros[n]<<endl;

    return 0;
}




