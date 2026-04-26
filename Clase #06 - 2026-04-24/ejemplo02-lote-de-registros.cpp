#include <iostream>

using namespace std;

int main()
{

    /**
    EJEMPLO LOTE DE REGISTROS:

    UN COMERCIO DISPONE DE UN LOTE DE REGISTROS DE VENTAS.
    POR CADA VENTA REALIZADA SE INGRESAN LOS SIGUIENTES DATOS:
        - NUMERO DE ARTICULO
        - CANTIDAD VENDIDA
        - PRECIO UNITARIO

    EL LOTE FINALIZA CUANDO SE INGRESA UN NUMERO DE ARTICULO
    IGUAL A CERO.

    SE SOLICITA CALCULAR Y MOSTRAR LA RECAUDACIÛN TOTAL.
    */

    int nroArticulo;
    int cantidad;
    float precio;

    /// INICIALIZO EL ACUMULADOR DE LA RECAUDACION EN CERO
    float recaudacionTotal =0;

    cout << "Ingrese Nro Articulo: ";
    cin >> nroArticulo;

    while( nroArticulo != 0 )
    {
        cout << "Cantidad: ";
        cin >> cantidad;

        cout << "Precio: ";
        cin >> precio;

        /// MULTIPLICO PRECIO POR CANTIDAD Y LO SUMO AL TOTAL ACUMULADO
        recaudacionTotal += precio * cantidad;
        /// recaudacionTotal = recaudacionTotal + precio * cantidad;


        /// JUSTO ANTES DE SALIR DEL WHILE
        cout << "Ingrese Nro Articulo: ";
        cin >> nroArticulo;
    }

    cout << "Recaudacion: " << recaudacionTotal << endl;

    return 0;
}

