#include <iostream>

using namespace std;

int main(){

    const int TAM = 6;
    int vec[TAM];   /// basura
/*
    /// ACCEDO AL CONTENIDO
    cout << vec[0] << endl;

    /// CARGO UN VALOR EN EL VECTOR
    vec[0] = 1;
    vec[1] = 1;
    vec[2] = 1;
    vec[3] = 1;
    vec[4] = 1;
    vec[5] = 1;

    /// cargar vector
    for(int i = 0; i <TAM; i++ ){
        vec[i] = 2;
    }

    /// muestro vector
    for(int i = 0; i <TAM; i++ ){
        cout << vec[i] << endl;
    }

    /// declaracion e inicializacion
    int vec2[4] = {10, 20, 30, 40};
    cout << vec2[3] << endl;
 */

    int vec3[5]={2,0,-6};

//    for (int i = 0; i < 5; i++)
//        vec3[i]= 0;

    for (int i = 0; i < 5; i++)
        cout << vec3[i] << endl;





    return 0;
}
