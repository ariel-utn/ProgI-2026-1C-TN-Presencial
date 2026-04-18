#include <iostream>
using namespace std;

int main()
{
    /// DECLARACION DE VARIABLES
    int nota;

    /// INICIALIZACION DE CONTADORES EN CERO
    int contPromociona = 0;
    int contRindeFinal = 0;
    int contRecursa = 0;

    /// EL CICLO SE REPITE 4 VECES
    for(int i = 1; i <= 4 ; i++)
    {
        /// INGRESO DE NOTAS
        cout << "Ingrese Nota: ";
        cin >> nota;

        /// NOTAS MAYORES O IGUALES A 7
        if( nota >= 7)
        {
            contPromociona++;
        }

        /// NOTAS MAYORES O IGUALES A 4
        if ( nota >= 4)
        {
            contRindeFinal++;
        }

        /// NOTAS MENORES A 4
        if ( nota < 4)
        {
            contRecursa++;
        }

    }

    /// DECISION FINAL BASADA EN LOS TOTALES ACUMULADOS
    if(contPromociona == 4)
    {
        cout << "Promociona";
    }
    else
    {
        if(contRindeFinal >= 3)
        {
            cout << "Rinde final";
        }
        else
        {
            if( contRecursa == 4)
            {
                cout << "Recursa";
            }
            else
            {
                cout << "Recupera";
            }
        }
    }

    return 0;
}

