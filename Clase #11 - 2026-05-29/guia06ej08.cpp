// NOMBRE Y APELLIDO:
// EJERCICIO:
// ENUNCIADO:
/**
Dada una lista de 10 números, cargarlos en un vector. Luego ingresar un número e informar la cantidad de veces que ese número aparece en el vector.
*/

/// DECLARACION DE FUNCIONES .h
void mostrarVector(int v[], int tam);
void cargarVector(int v[], int tam);
int obtenerNumero();
int contarRepeticiones(int v[], int tam, int numeroBuscado);
void mostrarNumero(int num);

#include <iostream>

using namespace std;

int main(){

    /// EJERCICIO 8
    /// 1. DECLARAR EL VECTOR Y TAMAÑO
    /// int vec[10];
    int const TAM = 10;
    int vec[TAM];

    /// 2. CARGAR EL VECTOR
    cout << "CARGAR" << endl;
    cargarVector(vec, TAM);
//    cout << "MOSTRAR" << endl;
//    mostrarVector(vec,TAM);

    /// 3. INGRESAR UN NUMERO
    int valor;
    valor = obtenerNumero();

    /// 4. BUSCAR EN EL VECTOR CUANTAS VECES PARECE ESE NUMERO
    int cantRep;
    cantRep = contarRepeticiones(vec,TAM,valor);

    cout << "CANTIDAD REPETICIONES"<< endl;
    /// 5. MOSTRAR LA CANTIDAD DE VECES QUE APARECE
    mostrarNumero(cantRep);

    return 0;
}

/// IMPLEMENTACION DE FUNCIONES .cpp
void mostrarVector(int v[], int tam){
    for(int i = 0; i < tam; i++){
        cout << v[i] << endl;
    }
}

void cargarVector(int v[], int tam){
//    int num;
//    for(int i = 0; i < tam; i++){
//        cin >> num;
//        v[i] = num;
//    }

    for(int i = 0; i < tam; i++){
        cin >> v[i];
    }
}

int obtenerNumero(){
    int num;
    cout << "Ingrese un numero: ";
    cin >> num;
    return num;
}

int contarRepeticiones(int v[], int tam, int numeroBuscado){
    int cont = 0;
     for(int i = 0; i < tam; i++){
        if(v[i] == numeroBuscado){
            cont++;
        }
    }
    return cont;
}

void mostrarNumero(int num){
    cout << num << endl;
}
