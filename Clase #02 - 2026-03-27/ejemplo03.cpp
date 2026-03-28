// NOMBRE Y APELLIDO:
// EJERCICIO:
// ENUNCIADO:

/**
    OPERADORES RELACIONALES
    Se utilizan para comparar valores y devuelven un booleano (true/false)

    >   MAYOR QUE
    >=  MAYOR O IGUAL QUE
    <   MENOR QUE
    <=  MENOR O IGUAL QUE
    ==  IGUALDAD
    !=  DISTINTO
*/

#include <iostream>

using namespace std;

int main()
{
    /// DECLARACION DE VARIABLE
    int num1;

    /// ENTRADA: solicitar un número al usuario
    cout << "Ingrese #: ";
    cin >> num1;

    /// ESTRUCTURA CONDICIONAL IF-ELSE
    /// Evalúa si el número es mayor que 0
    if (num1 > 0)
    {
        /// Bloque VERDADERO (se ejecuta si num1 > 0)
        cout << "Positivo" << endl;
    }
    else
    {
        /// Bloque FALSO (se ejecuta si num1 <= 0)
        /// Este bloque es OPTATIVO (se puede omitir si no se necesita)
        cout << "No es positivo" << endl;
    }

    return 0;
}
