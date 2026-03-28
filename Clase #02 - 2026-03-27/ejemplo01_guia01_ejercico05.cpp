// NOMBRE Y APELLIDO:
// EJERCICIO: GUIA 1 EJERCICO 5
// ENUNCIADO:
/**
Un comercio vende tres marcas de alfajores distintas A, B y C. Hacer un
programa para ingresar por teclado la cantidad de alfajores vendidos de cada
una de las tres marcas y luego se informe el porcentaje de ventas para cada
una de ellas.
Ejemplo. Si se ingresa 100, 25 y 75 como cantidades vendidas entonces el
programa calculará e informará A: 50%, B: 12,50% y C: 37,50%.
*/
#include <iostream>

using namespace std;

int main()

{
    /**
    TAREAS A REALIZAR
    - PEDIR DATOS.
    - CALCULAR PORCENTAJES:
        - CALCULAR EL TOTAL VENDIDO.
        - CALCULAR CADA UNO DE LOS PORCENTAJES (REGLA DE TRES SIMPLE)
    - MOSTRAR CADA UNO DE LOS PORCENTAJES.

    */

    /**
    DATOS. EXISTEN TRES TIPOS DE DATOS
    DE: DATOS DE ENTRADA. SON NECESARIOS PARA RESOLVER EL PROBLEMA. NO LOS CONOZCO, PERO EL USUARIO LOS VA A INGRESAR.
    DS: ES LA INFORMACION A MOSTRAR, EL OBJETIVO DEL PROBLEMA O EL RESULTADO.
    DO: DATOS DE OPERACIONES. LOS CONOZCO A PRIORI (EL USUARIO DEL PROGRAMA NO LOS VA A INGRESAR) O LOS PUEDO CALCULAR; PUEDEN SER RESULTADO DE OPERACIONES PREVIAS.

    */
    /// DECLARACION DE VARIABLES
    int marcaA, marcaB, marcaC;     // Cantidades vendidas de cada marca (números enteros)
    int totalVendido;                // Suma total de alfajores vendidos
    float porcMarcaA, porcMarcaB, porcMarcaC;  // Porcentajes de venta (con decimales)

    /// ENTRADA DE DATOS
    /// Se solicitan al usuario las cantidades vendidas de cada marca
    cout << "Ingrese cantidad Marca A: ";
    cin >> marcaA;

    cout << "Ingrese cantidad Marca B: ";
    cin >> marcaB;

    cout << "Ingrese cantidad Marca C: ";
    cin >> marcaC;

    /// PROCESAMIENTO DE DATOS

    /// Calcular el total vendido (suma de las tres marcas)
    totalVendido = marcaA + marcaB + marcaC;

    /// Calcular el porcentaje de cada marca
    /// Fórmula: (cantidad_marca * 100) / total
    /// IMPORTANTE: Se usa CASTEO (float) para evitar la división entera
    /// Si no se castea, la división entre enteros da como resultado un numero entero
    porcMarcaA = (float)(marcaA * 100) / totalVendido;   // Casteo explícito
    porcMarcaB = (float)(marcaB * 100) / totalVendido;   // Casteo explícito
    porcMarcaC = (marcaC * 100.0) / totalVendido;        // Se usa 100.0 (literal float) para forzar división decimal

    /// SALIDA DE RESULTADOS
    /// Se muestran los porcentajes de venta de cada marca
    cout << "La marca A vendio " << porcMarcaA << "%" << endl;
    cout << "La marca B vendio " << porcMarcaB << "%" << endl;
    cout << "La marca C vendio " << porcMarcaC << "%" << endl;

    return 0;
}
