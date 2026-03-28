// NOMBRE Y APELLIDO:
// EJERCICIO:
// ENUNCIADO:

#include <iostream>

using namespace std;

int main()
{
    /// DEMOSTRACIÓN DE DIVISIÓN ENTRE DIFERENTES TIPOS DE DATOS

    /// En C++, el tipo de resultado depende de los tipos de los operandos

    /// int / int = int (división entera, se truncan los decimales)
    /// 5/3 = 1 (se pierde el 0.666...)

    cout << "int/int = int Ejemplo 5/3 = " << 5 / 3 << endl;

    /// float / int = float (si al menos un operando es float, el resultado es float)
    /// 5.0/3 = 1.666...

    cout << "float/int = float Ejemplo 5.0/3 = " << 5.0 / 3 << endl;

    cout << "int/float = float Ejemplo 5/3.0 = " << 5 / 3.0 << endl;

    /// float / float = float (ambos operandos son float)
    /// 5.0/3.0 = 1.666...

    cout << "float/float = float Ejemplo 5.0/3.0 = " << 5.0 / 3.0 << endl;

    return 0;
}
