#include <iostream>
#include <vector>

using namespace std;

int main()
{
    
    int x, r=0;
    vector<int> Numeros;
    
    for(int i = 0; i < 5; i++)
    {
        
        cout<<"Ingresa un numero: ";
        cin>>x;
        cout<<endl;
        Numeros.push_back(x);
        
        r = r + Numeros[i];
        
    }
    
    r = r * r;
    
    for(int i = 0; i < Numeros.size(); i++)
    {
        
        if( i == Numeros.size()-1)
        {
            cout<<Numeros[i];
        }
        else
        {
            cout<<Numeros[i]<<" + ";   
        }
        
    }
    
    cout<<" = "<<r<<endl;

    return 0;
    
}