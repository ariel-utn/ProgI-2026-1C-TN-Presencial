// NOMBRE Y APELLIDO:
// EJERCICIO:
// ENUNCIADO:

#include <iostream>

using namespace std;

int main(){

    // Aca declaro varios tipos de datos para ver como se comportan
    int entero = 23;
    float flotante = 5.8;
    char caracter = 'Y';
    bool booleano = false;   // false se muestra como 0 en pantalla
    string palabra = "Bienvenidos a PR1";

    // Muestro los valores que contiene cada variable
    cout << "Entero: " << entero << endl;
    cout << "Flotante: " << flotante << endl;
    cout << "Caracter: " << caracter << endl;
    cout << "Booleano: " << booleano << endl;
    cout << "Palabra: " << palabra << endl;

    cout << endl; // Espacio para separar
    cout << endl;

    // Con sizeof puedo ver cuanta memoria ocupa cada tipo
    cout << "Entero: " << sizeof (int) << endl;
    cout << "Flotante: " << sizeof (float) << endl;
    cout << "Caracter: " << sizeof (char) << endl;
    cout << "Booleano: " << sizeof (bool) << endl;
    cout << "Palabra: " << sizeof palabra << endl;

    return 0;
}
