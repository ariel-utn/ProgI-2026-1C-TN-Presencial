// NOMBRE Y APELLIDO:
// EJERCICIO:
// ENUNCIADO:

#include <iostream>

using namespace std;

int main(){

    /// DECLARACION DE VARIABLES
    int numero1;
    /// int numero1; = 23; // Le asigno un valor inicial para tener algo por defecto
    /// numero1 = 23;  // Esto sería otra forma.

    // Pido al usuario que ingrese un número
    cin >> numero1;

    // Muestro el valor que ahora tiene la variable
    cout << "La variable contiene: " << numero1 << endl;

    // Muestro la direccion de memoria, solo a modo de ejemplo. Los detalles de esto los vemos en PR2
    //cout << "La variable contiene: " << &numero1 << endl;

    /// Si quiero saber cuanta memoria ocupa, uso sizeof
    // cout << "Un entero ocupa en bytes: " << sizeof numero1 << endl;

    /**
        Comentario de varias líneas
        útil para explicar algo más extenso
        o para dejar notas pendientes
    */

    return 0;
}
