#include <iostream>
using namespace std;

/**
14 Una empresa con varias sucursales, dispone de
un primer lote de registros con la siguiente
información:
     - Número de artículo (1 a 25)
     - Precio Unitario
Este lote se encuentra desordenado.
Dispone de un segundo lote con la información de
las ventas que se efectuaron en cada una de las
sucursales, con la siguiente información:
     - Número de artículo (1 a 25)
     - Número de sucursal (1 a 10)
     - Cantidad vendida

Se pide determinar e informar:
    a) Cantidad total Vendida por cada artículo.
    b) Monto total recaudado por la empresa.
    c) Número de sucursal que más artículos
    vendió en total. (sin discriminar por
    artículo)
*/

int buscarIndice(float v[], int art, int tam);

int main()
{
    /// LOTE 2
    int art, suc, cant;

    /// PTO A: Acumular cantidad vendida
    /// por cada articulo (IMPORTANTE: inicializado
    /// en 0)
    int vPTOA[25] {};

    /// PTO B: Acumular la
    /// recaudacion total de la empresa
    float recTotal = 0;

    /// PTO C: Acumular el total de articulos
    /// vendidos por cada sucursal (IMPORTANTE:
    /// inicializado en 0)
    int vPTOC[10] {};

    /// LOTE 1
    /// Guardar el articulo y el precio unitario de cada articulo tal como viene
    int vArt[25];
    float vPre[25];

    cout << "LOTE 1: CARGA DE PRECIOS" << endl;
    for(int i = 0; i <= 25; i++ )
    {
        cout << "Ingrese art: ";
        cin >> vArt[i];
        cout << "Ingrese art: ";
        cin >> vPre[i];

    }

    cout << endl;
    /// LOTE 2
    cout << "LOTE 2: PROCESAMOS VENTAS" << endl;
    cout << "Ingrese articulo: ";
    cin >> art;

    while (art != 0)
    {
        cout << "Ingrese sucursal: ";
        cin >> suc;

        cout << "Ingrese cantidad: ";
        cin >> cant;

        /// PTO A: acumulamos la cantidad por articulo
        vPTOA[art-1] += cant;

        /// PTO B: culculamos el monto y lo acumulamos
        int ind;
        ind = buscarIndice(vPre,art,25);
        recTotal += cant * vPre[ind];

        /// PTO C: acumulamos la cantidad por sucursal
        vPTOC[suc-1] += cant;

        ///
        cout << "Ingrese articulo: ";
        cin >> art;
    }

    /// SALIDAS POR PANTALLA
    cout << endl;
    cout << "REPORTES" << endl;
    cout << "PTO A: " << endl;
    cout << "ART    " << "CANTIDAD" << endl;
    for(int i = 0; i < 25; i++ )
    {
        cout << i + 1<< "     " << vPTOA[i] << endl;
    }
    cout << endl;
    cout << "PTO B: " << endl;
    cout << "Se recaudaron $: " << recTotal << endl;

    cout << endl;
    cout << "PTO C: " << endl;
    int maximo = vPTOC[0];
    int sucursal = 1;
    for(int i = 1; i < 10; i++ )
    {
        if(vPTOC[i] > maximo)
        {
            maximo = vPTOC[i];
            sucursal = i+1;
        }
    }
    cout << "La sucursal de mayor cant vend: " << sucursal << endl;

    return 0;
}

int buscarIndice(float v[], int art, int tam)
{
    int indice;
    for(int i = 0; i < tam; i++ ){
        if(v[i] == art)
        {
            indice = i;
            break;
        }
    }
    return indice;
}
