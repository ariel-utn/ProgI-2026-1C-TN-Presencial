// NOMBRE Y APELLIDO:
// EJERCICIO:
// ENUNCIADO:
/**
Dada una lista de 10 n�meros, cargarlos en un vector. Luego detectar si en el vector hay alg�n elemento repetido y, en caso de haberlo, indicarlo con un cartel �Hay Repetidos�.
*/

/// DECLARACION DE FUNCIONES .h
void mostrarVector(int v[], int tam);
void cargarVector(int v[], int tam);
int obtenerNumero();
int contarRepeticiones(int v[], int tam, int numeroBuscado);
void mostrarNumero(int num);
/// EJERCICIO 9
bool hayRepetidos(int v[], int tam);


#include <iostream>

using namespace std;

int main()
{

    /// EJERCICIO 9
    /// 1. DECLARAR EL VECTOR Y TAMA�O
    /// int vec[10];
    int const TAM = 10;
    int vec[TAM];

    /// 2. CARGAR EL VECTOR
    cout << "CARGAR" << endl;
    cargarVector(vec, TAM);

    /// 3. VERIFICO SI HAY REPETIDOS
    if(hayRepetidos(vec,TAM)==true){
        cout << "HAY REPETIDOS" << endl;
    }


    return 0;
}

/// IMPLEMENTACION DE FUNCIONES .cpp
void mostrarVector(int v[], int tam)
{
    for(int i = 0; i < tam; i++)
    {
        cout << v[i] << endl;
    }
}

void cargarVector(int v[], int tam)
{
//    int num;
//    for(int i = 0; i < tam; i++){
//        cin >> num;
//        v[i] = num;
//    }

    for(int i = 0; i < tam; i++)
    {
        cin >> v[i];
    }
}

int obtenerNumero()
{
    int num;
    cout << "Ingrese un numero: ";
    cin >> num;
    return num;
}

int contarRepeticiones(int v[], int tam, int numeroBuscado)
{
    int cont = 0;
    for(int i = 0; i < tam; i++)
    {
        if(v[i] == numeroBuscado)
        {
            cont++;
        }
    }
    return cont;
}

void mostrarNumero(int num)
{
    cout << num << endl;
}

bool hayRepetidos(int v[], int tam){
    int rep;
    for(int i = 0; i < tam; i++){
        rep = contarRepeticiones(v,tam,v[i]);
        if(rep>=2){
            return true;
        }
    }
    return false;
}
