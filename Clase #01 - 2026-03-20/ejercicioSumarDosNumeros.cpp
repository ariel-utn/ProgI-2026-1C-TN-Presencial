// NOMBRE Y APELLIDO:
// EJERCICIO:
// ENUNCIADO:

#include <iostream>

using namespace std;

int main(){

    /// DECLARACION DE VARIABLES

    int num1, num2, resultado;

    /// INGRESAR DATOS
    cout << "Ingrese un numero: ";
    cin >> num1;

    cout << "Ingrese otro numero: ";
    cin >> num2;

    /// PROCESAR LOS DATOS
    /// Sumo los valores y guardo el resultado
    resultado = num1 + num2;

    /// MOSTRAR DATOS -> INFORMACION
    cout << "El resultado es: " << resultado;

    return 0;
}