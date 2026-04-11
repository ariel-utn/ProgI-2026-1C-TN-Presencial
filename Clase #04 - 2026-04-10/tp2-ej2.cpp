#include <iostream>

using namespace std;

    /// NOTA: Vimos diferentes formas de buscar numeros impares

int main(){

    int num;

    cout << "Ingrese #: ";
    cin >> num;

    /**
    if( (num%2 == 1) || (num%2 == -1) ){
        cout << "Es IMPAR";
    }
    */

    /**
    if( num%2 != 0){
        cout << "Es IMPAR";
    }
    */

    /**
    if( !( num%2 == 0)){
        cout << "Es IMPAR";
    }
    */

    if( num%2 != 0 ){
        cout << "Es IMPAR";
    }

	return 0;
}
