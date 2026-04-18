#include <iostream>
using namespace std;

int main()
{

    /// DECLARACION VARIABLES
    int n1, n2, n3, n4;

    /// INICIALIZACION DE CONTADORES EN CERO
    int contPromociona = 0;
    int contRindeFinal = 0;
    int contRecursa = 0;

    /// INGRESO DE NOTAS

    cout << "Ingrese Nota 1: ";
    cin >> n1;
    cout << "Ingrese Nota 2: ";
    cin >> n2;
    cout << "Ingrese Nota 3: ";
    cin >> n3;
    cout << "Ingrese Nota 4: ";
    cin >> n4;

    /// NOTAS MAYORES O IGUALES A 7
    if( n1 >= 7)
    {
        contPromociona++;
    }
    if( n2 >= 7)
    {
        contPromociona++;
    }
    if( n3 >= 7)
    {
        contPromociona++;
    }
    if( n4 >= 7)
    {
        contPromociona++;
    }

    /// NOTAS MAYORES O IGUALES A 4
    if ( n1 >= 4)
    {
        contRindeFinal++;
    }
    if ( n2 >= 4)
    {
        contRindeFinal++;
    }
    if ( n3 >= 4)
    {
        contRindeFinal++;
    }
    if ( n4 >= 4)
    {
        contRindeFinal++;
    }

    /// NOTAS MENORES A 4
    if ( n1 < 4)
    {
        contRecursa++;
    }
    if ( n2 < 4)
    {
        contRecursa++;
    }
    if ( n3 < 4)
    {
        contRecursa++;
    }
    if ( n4 < 4)
    {
        contRecursa++;
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

