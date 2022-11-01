#include <iostream>
#include <stdlib.h>
#include <vector>

using namespace std;

int main()
{
    int numero, total=0;
    vector<int> numIgual5;
    
    do
    {
        
        cout<<"\nIngresa un numero: ";
        cin>>numero;
        
        int mod = numero % 10;
        if(mod==5)
        {
            //cout<<"El numero termina en 5";
            numIgual5.push_back(numero);
        }
        
    }while(numero != 0);
    
    for(int i=0; i < numIgual5.size(); i++)
    {
        total = total + numIgual5[i];
    }
    
    total = total / numIgual5.size();
    
    cout<<"El promedio de los numeros que terminan con 5 es: "<<total<<endl;

    return 0;
}



