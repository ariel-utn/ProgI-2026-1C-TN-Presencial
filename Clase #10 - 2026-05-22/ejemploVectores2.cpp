#include <iostream>

using namespace std;

int main()
{
    /// 1. Declara un vector de 5 enteros e inicialízalo con los números del 1 al 5.

    int vec1[5] = {1,2,3,4,5};

    for (int i = 0; i < 5; i++)
    {
        cout << vec1[i] << endl;
    }

    /// 2. Muestra en pantalla el primer y el último elemento del vector anterior.

    cout << "Primer elemento: " << vec1[0] << endl;
    cout << "Ultimo elemento: " << vec1[4] << endl;


    /// 3. Declara un vector de 10 flotantes, inicialízalos todos en 0.0 y luego asigna el valor 7.5 al cuarto elemento.

    float vec2[10] = {};
    vec2[3] = 7.5;
    cout << "El valor del 4to elemento: " << vec2[3] << endl;

    /// 4. Crea un vector de 8 enteros, pide al usuario que ingrese valores para cada posición y luego muestra la suma total.

    /// DECLARACION DEL VECTOR
    int vec3[8];
    /// ACUMULADOR EN CERO
    int sumaVector=0;
    /// EL INGRESO DE LOS VALORES POR EL USUARIO
    for(int i = 0;  i < 8; i++){
        cin >> vec3[i];
        /// ACUMULO LOS VALORES INGRESADOS
        sumaVector += vec3[i];
    }
    /// MUESTRO LA SUMA DE LOS VALORES
    cout << "La suma es: " << sumaVector << endl;

    /// 5.Declara una constante TAM = 6, crea un vector de ese tamaño y llena sus posiciones con los primeros 6 números pares mayores a cero.

    int const TAM = 6;
    int vec4[TAM];
    for(int i = 0; i < TAM; i++){
        vec4[i] = (i+1)*2;
    }
    for(int i = 0; i < TAM; i++){
        cout << vec4[i] << endl;

    }







    return 0;
}
