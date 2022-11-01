#include <iostream>

using namespace std;

int main()
{
    int numero, total=0, n1=0, n2=1;
    bool esFibonacci=false;
    
    cout<<"Ingresa un numero: ";
    cin>>numero;
    
    do
    {
        
        total = n1 + n2;
        n1 = n2;
        n2 = total;
        
        cout<<"T: "<<total<<" Num:"<<numero<<endl;
        
        if(total == numero)
        {
            esFibonacci = true;
        }
        if(total > numero)
        {
            break;
        }
        
    }while(!esFibonacci);
    
    if(esFibonacci)
    {
        cout<<"\nEl numero "<<numero<<" es parte de la serie de Fibonacci"<<endl;
    }
    else
    {
        cout<<"\nEl numero "<<numero<<" no es parte de la serie de Fibonacci"<<endl;
    }

    return 0;
}


