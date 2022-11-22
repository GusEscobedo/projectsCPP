#include <iostream>
#include <vector>

using namespace std;

int main()
{
    
    int x;
    vector<int> Numeros;
    
    for(int i = 0; i < 10; i++)
    {
        
        cout<<"Ingresa un numero: ";
        cin>>x;
        cout<<endl;
        Numeros.push_back(x);
        
    }
    
    for (int i = 0; i < Numeros.size(); i++)
    {
        
        if(Numeros[i] != Numeros[i+1])
        {
            if(i < Numeros.size()-1)
            {
                cout<<Numeros[i]<<", ";
            }
            else
            {
                cout<<Numeros[i];
            }
            
        }
        
    }

    return 0;
}
