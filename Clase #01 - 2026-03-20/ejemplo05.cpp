// NOMBRE Y APELLIDO:
// EJERCICIO:
// ENUNCIADO:

#include <iostream>

using namespace std;

int main(){

    /// OPERADORES MATEMATICOS

    /**
        * -> MULTIPLICACION
        / -> DIVISION
        + -> SUMA
        - -> RESTA
        % -> MODULO: me da el resto de la división entera
    */

    /// OPERADOR DE ASIGNACION

    /**
        = -> asigna un valor a una variable
    */

    /// Declaro varias variables de una sola línea
    int numero, a, b;
    float c;

    // Otra forma sería declarar cada una por separado:
    // int numero;
    // int a;
    // int b;

    /// Acá se evalúa primero la multiplicación y luego la suma
    numero = a + b * 5;

    /// El 5 es un literal numérico, porque no tiene tipo definido como variable

    /*
    // Esto lo dejo comentado por si después quiero pedir datos al usuario
    cout << "Ingrese un valor: ";
    cin >> a;
    cout << a;
    */

    // Algunos ejemplos para ver cómo funcionan los operadores
    cout << "5 * 3 = " << 5 * 3 << endl;
    cout << "5 / 3 = " << 5 / 3 << endl;        // Aca da 1 porque es división entera
    cout << "5.0 / 3 = " << 5.0 / 3 << endl;    // Me da 1.66667, pues es la división real
    cout << "5 + 3 = " << 5 + 3 << endl;
    cout << "5 - 3 = " << 5 - 3 << endl;
    cout << "5 % 3 = " << 5 % 3 << endl;        // El resto de 5 dividido 3 es 2

    return 0;
}
