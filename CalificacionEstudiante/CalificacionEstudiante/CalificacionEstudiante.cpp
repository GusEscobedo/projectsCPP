#include <iostream>
#include <vector>
#include <stdio.h>

using namespace std;

int main()
{
    vector<int> Tabla;

    int nAlumnos, calif, califGeneral=0, promedio;

    cout << "Numero de alumnos: ";
    cin >> nAlumnos;
    cout << endl;

    for (int i = 0; i < nAlumnos; i++)
    {
        cout << "Calificacion Alumno" << i+1 << ": ";
        cin >> calif;
        cout << endl;

        califGeneral = califGeneral + calif;

        Tabla.push_back(calif);
    }

    promedio = califGeneral / nAlumnos;

    for (int i = 0; i < nAlumnos; i++)
    {
        cout << "Calificacion Alumno" << i+1 << ": "<<Tabla[i]<<endl;
    }

    cout << "Promedio grupal: " << promedio << endl;

}