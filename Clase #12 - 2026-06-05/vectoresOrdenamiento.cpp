#include <iostream>

using namespace std;

void cargarVector(int v[], int tam);
void mostrarVector(int v[], int tam);
void ordenarVector(int v[], int tam);



int main()
{
    int v[5]={ 8, 4, 6, 7, 1};
    ordenarVector(v, 5);
    mostrarVector(v, 5);


    return 0;
}

void cargarVector(int v[], int tam)
{
    for(int i = 0; i < tam; i++)
    {
        cout << "Ingrese #: ";
        cin >> v[i];
    }
}
void mostrarVector(int v[], int tam)
{
    for(int i = 0;  i < tam; i++)
    {
        cout << v[i] << endl;
    }
}
void ordenarVector(int v[], int tam)
{
    for(int i = 0;  i < tam-1; i++)
    {
        int aux;
        for(int j = i + 1;  j < tam; j++)
        {
            if(v[j] < v[i])
            {
                aux = v[j];
                v[j] = v[i];
                v[i] = aux;
            }
        }
    }
}
