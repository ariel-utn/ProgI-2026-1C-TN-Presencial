#include <iostream>

using namespace std;

int main(){

    float imp;

    cout << "Ingrese importe venta: ";
    cin >> imp;

    if ( (100 <= imp) && (imp <= 500 ) ) {
        imp = imp *0.9;   /// descuento 10%
    }
    else{
        if( imp > 500){
            imp = imp * 0.85;  /// descuento 15%
        }
        else{
            imp = imp*0.95;  /// descuento 5% (para imp < 100)
        }
    }

    /// Se reutiliza la variable "imp" para el resultado final 

    cout << "Importe final: " << imp;

	return 0;
}
