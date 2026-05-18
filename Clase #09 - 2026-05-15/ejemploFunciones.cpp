// NOMBRE Y APELLIDO:
// EJERCICIO:
// ENUNCIADO:


#include <iostream>
/// FUNCIONES

/// Una función es un conjunto de instrucciones que realizan una tarea específica de manera independiente del resto del programa.

/// PROTOTIPO DE UNA FUNCION

/// tipo_dato_devuelto: todos los tipos de datos que conocemos (int, float, char, string, etc,) y void cuando la funcion no devuelve nada

/// nombre: es un identificar que usamos para nombrar la funcion, donde se aplican las mismas reglas que en la declaracion de variables. Tiene que ser una accion descriptiva.

/// parámetros: son valores o datos que la funcion necesita. Van entre parentesis. Si la funcion no tiene parametros van parentesis vacios.

using namespace std;

/// DECLARACION DE FUNCIONES
void saludar();
void saludar(string nombre);
int pedirNumero();
int sumar(int n1, int n2);
void mostrarValor(int numero);



int main(){

    int num1;
    int num2;
    int suma;

    num1 = pedirNumero();
    num2 = pedirNumero();
    suma = sumar(num1, num2);
    mostrarValor(suma);

    return 0;
}

/// IMPLEMENTACION
/// FUNCION VOID SIN PARAMETROS
void saludar(){
    cout << "Hola" << endl;
}

/// FUNCION DE TIPO VOID CON UN PARAMETRO
void saludar(string nombre){
    cout << "Hola, " << nombre << endl;
}

/// FUNCION DE TIPO NO VOID SIN PARAMETROS
int pedirNumero(){
    int n;
    cout << "Ingrese un numero: ";
    cin >> n;
    return n;
}

/// FUNCION DE TIPO NO VOID CON DOS PARAMETROS
int sumar(int n1, int n2){
    return n1 + n2;
}

void mostrarValor(int numero){
    cout << "El Valor es: " << numero;
}

