// NOMBRE Y APELLIDO:
// EJERCICIO:
// ENUNCIADO:

#include <iostream>

using namespace std;

int main()
{
    /// DECLARACION DE VARIABLES
    int num1;
    int num2;

    /// ENTRADA: se solicitan dos números al usuario
    cout << "Ingrese primer numero: ";
    cin >> num1;
    cout << "Ingrese segundo numero: ";
    cin >> num2;

    /// LAS CONDICIONES DEL IF PUEDEN SER SIMPLES O MÁS COMPLEJAS, SEGÚN EL CASO

    /// Aquí se evalúa una condición que combina una comparación y una operación aritmética

    /// Se pregunta si num1 es mayor que (num2 + 10)

    if (num1 > (num2 + 10))
    {
        /// SALIDA POR VERDADERO
        /// Este bloque se ejecuta SOLO si num1 > (num2 + 10)
        cout << "El " << num1 << " es mayor que " << num2 << " + 10 " << endl;
    }

    /// Nota: No hay bloque ELSE, por lo que si la condición es falsa,
    /// el programa simplemente no muestra nada y finaliza

    return 0;
}
