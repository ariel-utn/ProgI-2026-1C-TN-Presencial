#include <iostream>

using namespace std;

/// DECLARACION DE FUNCIONES
void porValor(int n);
void porReferencia(int &n);

int main(){

    int numero1 = 5;

    cout << "Por valor" << endl;
    /// HAGO UNA COPIA DEL VALOR DE LA VARIABLE, DUPLICO EL CONSUMO DE MEMORIA
    porValor(numero1);
    cout << "El numero es: " << numero1 << endl;

    cout << "Por referencia" << endl;
    /// LE MANDO LA VARIABLE A LA FUNCION, ES LA MISMA VRIABLE, POR ESO SI LA FUNCION
    /// MODIFICA EL VALOR, AFECTA A LA VARIBLE ORIGINAL
    porReferencia(numero1);
    cout << "El numero es: " << numero1 << endl;

    return 0;
}

/// IMPLEMENTACION
void porValor(int n){
    cout << "El valor es: " << n << endl;
    n = -1;
}

void porReferencia(int &n){
    cout << "El valor es: " << n << endl;
    n = -1;
}

