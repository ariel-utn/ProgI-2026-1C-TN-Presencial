#include <iostream>

using namespace std;

    /// EJEMPLO: Hacer un programa para ingresar tres numeros y luego 
    /// determine y muestre cuantos numeros positivos se ingresaron.

int main(){


    /// DECLARACION DE VARIABLES
    int contadorPositivos;
    int num;

    /// IMPORTANTE PONER EL CONTADOR EN CERO
    contadorPositivos = 0;

    /// PEDIR NUMEROS -> FOR
    for(int i = 1; i<= 3; i++){
        cout << "Ingrese #: ";
        cin >> num;
        /// SABER SI ES POSITIVO -> IF
        if(num > 0){
            /// CONTAR POSITIVOS -> CONTADOR
            contadorPositivos++;
        }
    }
    cout << "Total positivos: " << contadorPositivos;


	return 0;
}
