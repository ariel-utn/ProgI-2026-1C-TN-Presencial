#include <iostream>

using namespace std;

int main()
{
    /// EJEMPLO DE CICLO COMBINADO - SIN INGRESO DE DATOS
    /// REALIZAR LAS TABLAS DEL A AL 10

    /// GRUPO: PARA RECORRER CADA TABLA DEL 1 AL 10
    for(int grupo = 1; grupo <= 10; grupo++)
    {
        /// CANTIDAD DE ELEMENTOS PARA RECORRER DEL 1 AL 10 POR CADA GRUPO [TABLA]
        for(int elementos = 1; elementos <= 10; elementos++)
        {
            cout << grupo << " * " << elementos << " = " << grupo * elementos << endl;
        }
        cout << endl;
    }

    return 0;
}

