#include <iostream>

using namespace std;

    /**
        CONTADORES:  VARIABLES QUE SE USAN PARA CONTAR LA OCURRENCIA DE UN FENOMENO

        - DARLE VALOR INICIAL
        - SE ACTIVA SI OCURRE LA SITUACION BUSCADA
        - SE INCREMENTA/DECREMENTA DE FORMA CONSTANTE. GENERALMENTE DE 1 EN 1.

    */

    /// INICIALIZAR EL CONTADOR EN CERO
    int contador = 0;

    /// MOSTRAMOS la diferencia entre pos-incremento (i++) y pre-incremento (++i)

    //    cout << "Contiene: " << contador++ << endl;
    //    cout << "Contiene: " << contador << endl;
    //    cout << "Contiene: " << contador + 1 << endl;
    //    cout << "Contiene: " << contador << endl;
    //
    //    cout << "Contiene: " << contador-- << endl;
    //    cout << "Contiene: " << contador << endl;

    //    cout << "Contiene: " << --contador << endl;
    //    cout << "Contiene: " << contador << endl;

    //    contador++;
    //    contador = contador + 1;
    //    contador += 1;

    /// EJEMPLO: Hacer un programa para ingresar tres numeros y luego 
    /// determine y muestre cuantos numeros positivos se ingresaron.

int main()
{

    int num;

    cout << "Ingrese #: ";
    cin >> num;

    if(num > 0){
        contador++;
    }

    cout << "Ingrese #: ";
    cin >> num;

    if(num > 0){
        contador++;
    }

    cout << "Ingrese #: ";
    cin >> num;

    if(num > 0){
        contador++;
    }

    cout << "Total positivos: " << contador;

    return 0;
}
