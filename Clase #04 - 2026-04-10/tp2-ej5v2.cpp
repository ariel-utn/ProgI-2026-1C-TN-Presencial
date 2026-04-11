#include <iostream>

using namespace std;

    /// Esta version es mas clara que tp2-ej5.cpp porque:
    /// - Usa nombres descriptivos de variables
    /// - Separa el calculo del descuento del importe original
    /// - Permite conservar el valor original si hiciera falta

int main(){

    float importeVenta, importeFinal, descuento;

    cout << "Ingrese importe venta: ";
    cin >> importeVenta;

    if ( (100 <= imp) && (imp <= 500 ) ) {
        descuento = importeVenta*0.10;  /// 10% de descuento
    }
    else{
        if( imp > 500){
            descuento = importeVenta*0.15;  /// 15% de descuento
        }
        else{
            descuento = importeVenta*0.05;  /// 5% de descuento
        }
    }

    importeFinal = importeVenta - descuento;

    cout << "Importe final: " << importeFinal;

	return 0;
}
