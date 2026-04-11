#include <iostream>

using namespace std;

int main(){

    int num, maximo;

    /// Tomamos el primer numero como maximo inicial.
    cout << "Ingrese numero: ";
    cin >> maximo;

    ///maximo = num;

    cout << "Ingrese numero: ";
    cin >> num;
    if(num > maximo){
        maximo = num;
    }

    cout << "Ingrese numero: ";
    cin >> num;
    if(num > maximo){
        maximo = num;
    }

    cout << "Ingrese numero: ";
    cin >> num;
    if(num > maximo){
        maximo = num;
    }

    cout << "El maximo es: " << maximo<< endl;

	return 0;
}
