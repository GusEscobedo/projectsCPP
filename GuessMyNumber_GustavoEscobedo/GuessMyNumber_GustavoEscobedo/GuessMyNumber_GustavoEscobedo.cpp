#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    srand(static_cast<unsigned>(time(NULL)));
    int rNumber = rand() % 101;
    int selected, calc, counter=0;
    bool cicle=true;

    cout << "Bienvenido al Guess my Number las reglas son las siguientes. \t \n1.- Si la respuesta es Muy Alto estas a 10 numeros o mas \t\n2.-Si estas Cerca estas a 10 numeros mas o menos \t\n3.-Si la respuesa es Muy bajo estas a 10 numeros o menos"<<endl;

    do {
        
        calc = 0;
        counter = counter+1;
        cin >> selected;

        if (selected == 50)
        {
            cicle = false;
            cout << "Felicidades has ganado en " << counter<<" intentos.";
            break;
        }

        calc = selected - 50;
        if (calc > 10)
        {
            cout << "Muy alto" << endl;
        }
        else if (calc < -10)
        {
            cout << "Muy bajo" << endl;
        }
        else if (calc <= 10 or calc >= -10)
        {
            cout << "Cerca" << endl;
        }

    } while (cicle);
}
