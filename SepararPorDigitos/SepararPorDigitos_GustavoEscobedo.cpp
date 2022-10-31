#include <iostream>
#include <stdlib.h>
#include <vector>

void checarPrimo(int numRev, int numNor);

using namespace std;

int main()
{
    
    vector<int> Elementos;
    int numero, change, total=0;
    
    cout<<"Ingresa un numero: ";
    cin>>numero;
    
    while(numero > 0)
    {
        
        int mod = numero % 10;
        Elementos.push_back(mod);
        change = numero / 10;
        
    }
    
    for (int i = 0; i <  Elementos.size(); i++)
    {
    
        total = total + Elementos[i];
        
    }
    
    checarPrimo(total, numero);
    
    return 0;
    
}

void checarPrimo(int numRev, int numNor)
{
    
    int divisor, residuo;
    bool esPrimo = false;
    
    for (divisor = 2; divisor <= 9; divisor++)
    {
        if(numRev != divisor)
        {
            residuo = numRev%divisor;
        }
        
        if(residuo == 0 or numRev == 1)
        {
            
            break;
            
        }
        else
        {
         
            esPrimo = true;
            
        }
        
    }
    
    if(esPrimo)
    {
        cout<<"\nEl numero "<<numNor<<" es primo"<<endl;
    }
    else
    {
        cout<<"\nEl numero"<<numNor<<"no es primo"<<endl;
    }
    
}






