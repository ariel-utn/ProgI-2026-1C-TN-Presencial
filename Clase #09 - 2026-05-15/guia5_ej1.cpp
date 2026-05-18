/**
Hacer una función llamada EsPar que determine si un número es par o no. La
función debe recibir un número entero por valor y devolver true si es par o false
si no lo es. La función no debe mostrar nada por pantalla.

Hacer un programa para ingresar un número y, utilizando EsPar, emita luego un
cartel indicando si el número ingresado es par o no es par.
*/

#include <iostream>

using namespace std;

/// DECLARACIÓN / PROTOTIPO DE LA FUNCIÓN
bool esPar(int n);

/// PROGRAMA PRINCIPAL
int main()
{
    int numero;

    /// SOLICITAMOS AL USUARIO QUE INGRESE UN NUMERO
    cout << "Ingrese un numero: ";
    cin >> numero;

    /// LOGICA Y EMISION DEL CARTEL: EVALUAMOS EL NUMERO USANDO LA FUNCION ESPAR
    /// LA FUNCION 'ESPAR(NUMERO)' DEVUELVE TRUE O FALSE.
    if (esPar(numero))
    {
        cout << "El numero ingresado ES PAR." << endl;
    }
    else
    {
        cout << "El numero ingresado NO ES PAR." << endl;
    }

    /**
       VARIANTE; Dada una lista de 5 numeros, hacer un programa que cuente
       y muestre por pantalla cuanto numeros son pares, usando la funcion esPar


       int totalPares = 0;
       for(int i = 1; i <= 5; i++)
       {
           cout << "Ingrese un numero: ";
           cin >> numero;

           if(esPar(numero) == true)
           {
               totalPares++;
           }
       }
       cout << "El total de pares es: " << totalPares << endl;
        */

    return 0;
}

/// IMPLEMENTACIÓN DE LA FUNCIÓN
bool esPar(int n)
{
    if (n % 2 == 0)
    {
        return true;  /// Si es numero es par corta la ejecución aquí y retorna TRUE
    }

    return false;     /// Si no entró al 'if', por descarte el número es impar y retorna FALSE
}

/** VARIANTE
bool esPar(int n)
{
    /*
    bool r;
    if(n%2 == 0){
        r= true;
    }
    else{
        r= false;
    }
    return r;
}
    */

