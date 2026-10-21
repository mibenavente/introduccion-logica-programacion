
// Creado por Miguel

#ifndef IACD_INTRODUCCION_LOGICA_PROGRAMACION_EJERCICIOS_H
#define IACD_INTRODUCCION_LOGICA_PROGRAMACION_EJERCICIOS_H

#include <iostream>
using namespace std;

class ejercicios {
    int static Ejercicio1()
    {
        for (int i = 1; i <= 5; i++)
        {
            for (int j = 1; j <= 5; j++)
            {
                if (i == j || i + j == 6 || i == 1 || i == 5 || j == 3)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }
            cout << endl;
        }
        return 0;
    }
};


#endif //IACD_INTRODUCCION_LOGICA_PROGRAMACION_EJERCICIOS_H
