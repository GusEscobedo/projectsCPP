// ConsoleApplication1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

int main()
{
    bool llena;
    int num;
    string bebida;
    int opc;
    

    do 
    {

        cout << "------------------Elige una bebida\n";
        cout << "--------------1- Agua\n";
        cout << "--------------2-Refresco\n";
        cout << "--------------3-Jugo\n";
        cout << "--------------4-Cerveza\n";
        cin >> opc;


        switch (opc)
                {
                    case 1:
                        bebida = "AGUA";
        
                        break;
                    case 2:
                        bebida = "REFRESCO";
                        break;
                    case 3:
                        bebida = "JUGO";
                        break;
                    case 4:
                        bebida = "CERVEZA";
                        break;
                    default:
                        cout<< "\n\n\nError\n\n\n";
                        
                }
    } while (opc>4);
        

       
    cout << "-----------------La bebida esta llena?";
    cout << "-----------------\n0 = si";
    cout << "-----------------\n1 = no\n";
    cin >> num;

        do
        {
           
             switch (num)
                    {
                    case 0:
                        cout << "-----------------------\nUsted esta tomando " + bebida + "\n";
                        llena = true;
                        break;
                    case 1:
                        cout << "-----------------------\nRellena la bebida\n";
                        llena = false;
                        num = 0;
                        break;
                    default:
                        cout << "-----------------------\nNumero no existente vuelva a elegir";
                    }
        } while (llena == false);
       

}

