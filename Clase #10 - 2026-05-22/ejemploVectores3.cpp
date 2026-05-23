using namespace std;


/// DECLARACION
void cargarVector(int v[], int t);
void mostrarVector(int v[], int t);
int sumarVector(int v[], int t);
void mostrarNumero(int n);

int main()
{
    int r;
    int const TAM = 5;
    int vec[TAM];
	
    /// CARGAR UN VECTOR
    cargarVector(vec,TAM);

    /// MUESTRAR UN VECTOR
    mostrarVector(vec,TAM);

    /// SUMAR LOS VALORES DEL VECTOR
    r = sumarVector(vec,TAM);

    /// MUESTRAR EL VALOR DE LA SUMA
    mostrarNumero(r);


    return 0;
}

///
void cargarVector(int v[], int t)
{
    for (int i = 0; i < t; i++)
    {
        cout << "Ingrese un valor: ";
        cin >> v[i];
    }
}

void mostrarVector(int v[], int t){
    for (int i = 0; i < t; i++)
    {
        cout << v[i] << endl;
    }
}

int sumarVector(int v[], int t){
    int suma = 0;
    for (int i = 0; i < t; i++)
    {
        suma+= v[i];
    }
    return suma;
}

void mostrarNumero(int n){
    cout << "El numero es: " << n << endl;
}