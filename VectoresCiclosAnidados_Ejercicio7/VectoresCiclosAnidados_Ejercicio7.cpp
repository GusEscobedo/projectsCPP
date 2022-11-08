#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> Numeros;
    vector<int> Factores;
    vector<int> Factorial;
    
    int x, factor, total;
    
    for (int i = 0; i < 10; i++)
    {
        cout<<"Ingresa un numero: ";
        cin>>x;
        cout<<endl;
        Numeros.push_back(x);
    }
    
    for (int i = 0; i < Numeros.size(); i++)
    {
        if(Numeros[i] != 1)
        {
            factor=Numeros[i];
            total = factor * (factor - 1);
            cout<<"t: "<<total<<" f: "<<factor<<endl;
            factor = factor - 1;
            while(factor > 1)
            {
               factor = factor - 1;
               total = total * factor;
               cout<<"t: "<<total<<" f: "<<factor<<endl;
            }
            
            Factorial.push_back(total);
        }
        else
        {
            Factorial.push_back(1);
        }
    }
    
    for(int i = 0; i<Numeros.size(); i++)
    {
        cout<<"Numero: "<<Numeros[i]<<"  Factorial: "<<Factorial[i]<<endl;
    }

    return 0;
}
