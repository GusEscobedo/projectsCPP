#include <iostream>
#include <vector>

using namespace std;

int main()
{
    
    int x, r;
    
    vector<int> Vector1, Vector2, Resultado;
    
    for (int i = 0; i < 5; i++)
    {
        cout<<"Ingresa un numero para el Vector1: ";
        cin>>x;
        Vector1.push_back(x);
        cout<<"\nIngresa un numero para el Vector2: ";
        cin>>x;
        Vector2.push_back(x);
        
        r = Vector1[i] * Vector2[i];
        Resultado.push_back(r);
    }
    
    for(int i = 0; i < Resultado.size(); i++)
    {
        cout<<"\n"<<Vector1[i]<<" * "<<Vector2[i]<<" = "<<Resultado[i];
    }

    return 0;
}
