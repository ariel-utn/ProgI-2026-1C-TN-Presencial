#include <iostream>
using namespace std;

int main()
{
    /// TP3-EJ05
    /// HACER UN PROGRAMA PARA INGRESAR UN N VALOR QUE INDICA LA CANTIDAD DE NUMEROS
    /// QUE COMPONEN UNA LISTA Y LUEGO SOLICITAR SE INGRESEN ESOS N NUMEROS.
    /// SE PIDE INFORMAR CUANTOS SON POSITIVOS.

    /// EN ESTE CASO EN TIEMPO DE EJECUCION CONECEMOS LA CANTIDAD EXACTA DE NUMEROS
    /// A INGRESAR

    int num;
    int cantidad;
    cout << "Cuantos numeros vas a ingresar: ";
    cin >> cantidad;

    int i;
    for( i = 1; i <= cantidad; i++)
    {
        cout << "Ingrese numero: ";
        cin >> num;
        if( num > 0)
        {
            cout << "Es positivo" << endl;
        }
    }


    /// ¿ PERO QUE PASA SI NO CONOCEMOS LA CANTIDAD DE DATOS DE ENTRADA?

    /// USAMOS UN CICLO INEXACTO O WHILE

    /// TP3-EJ01
    /// HACER UN PROGRAMA PARA MOSTRAR POR PANTALLA LOS NUMEROS DEL 1 AL 10.


    int i = 1; /// INICIALIZACION
    while( i <= 10) /// CONDICION
    {

        /// CUERPO: REPITO EL CODIGO
        cout << i << endl;

        i++;    /// ACTUALIZO PARA NO QUEDAR ATRAPADO EN UN BUCLE INFINITO
    }

    /// OTRO EJEMPLO:
    /// REALIZAR UN PROGRAMA QUE PERMITA INGRESAR UNA LISTA DE NUMEROS Y CUENTE
    /// CUANTOS DE ELLOS SON POSITIVOS, FINALIZANDO LA CARGA DE NUMEROS CUANDO
    /// SE INGRESE EL NUMERO -10.

    int num;
    int contPos = 0;    /// CONTADOR DE POSITIVOS EN CERO

    /// LECTURA INICIAL
    cout << "Ingrese numero: ";
    cin >> num;

    /// MIENTRAS EL NUMERO NO SEA -10 (NUESTRO VALOR DE CORTE O CENTINELA)
    while( num != -10 )
    {

        /// INCREMENTA EL CONTADOR SI ES POSITIVO
        if(num > 0)
        {
            contPos++;
        }

        /// AL FINAL, JUSTO ANTES DE SALIR DEL WHILE
        /// PEDIMOS EL SIGUIENTE NUMERO PARA QUE EL BUCLE PUEDA CONTINUAR O
        /// TERMINAR
        cout << "Ingrese numero: ";
        cin >> num;
    }

    /// INFORMAMOS EL TOTAL DE NUMEROS POSITIVOS
    cout << "Positivos: " << contPos;

    return 0;
}

