#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> Numeros;
    int x, n=0, cont; 
    
    for(int i = 0; i < 7; i++)
    {
        cout<<"Ingresa un numero: ";
        cin>> x;
        cout<<endl;
        Numeros.push_back(x);
    }
    
    for(int i = 0; i < Numeros.size(); i++)
    {
        if (Numeros[n] < Numeros[i])
        {
            n=i;
            //cout<<Numeros[n]<<"<"<<Numeros[i]<<endl;
        }
    }
    
    //cout<<Numeros[n]<<endl;
    
    while(Numeros[n] > 0)
    {
        Numeros[n] = Numeros[n]/10;
        cont = cont + 1;
        //cout<<cont<<" "<<Numeros[n]<<endl;
    }
    
    cout<<"El numero mayo tiene un total de "<<cont<<" digitos"<<endl;

    return 0;
}
