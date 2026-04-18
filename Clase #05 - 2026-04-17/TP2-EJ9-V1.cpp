#include <iostream>
using namespace std;

int main() {
	/// DECLARACION VARIABLES
	int n1, n2, n3, n4;

	cout << "Ingrese Nota 1: ";
	cin >> n1;
	cout << "Ingrese Nota 2: ";
	cin >> n2;
	cout << "Ingrese Nota 3: ";
	cin >> n3;
	cout << "Ingrese Nota 4: ";
	cin >> n4;

	/// SI TODAS LAS NOTAS SON 7 O MAS, PROMOCIONA
	if( (n1 >= 7)&& (n2 >= 7) && (n3 >= 7) && (n4 >= 7) ){
		cout << "Promociona";
	}
	else{
		/// SI TODAS LAS NOTAS SON MENORES A 4, RECURSA DIRECTAMENTE
		if( (n1<4) && (n2 < 4) && (n3 < 4) && (n4 <4) ){
			cout << "Recursa";
		}
		else{
			/// EVALUA SI EXACTAMENTE TRES NOTAS SON >= 4, LOS CUATRO CASOS POSIBLES
			if(  (n1>=4) && (n2>=4) && (n3>=4) && (n4<4) ||
			     (n1>=4) && (n2>=4) && (n3<4) && (n4>=4) ||
			     (n1>=4) && (n2<4) && (n3>=4) && (n4>=4) ||
			     (n1<4) && (n2>=4) && (n3>=4) && (n4>=4)
			   ){
				cout << "Rinde final";
				}
			/// SI NO SE CUMPLE LO ANTERIOR, DEBE RECUPERAR
			else{
				cout << "Recupera";
			}
		}
	}

	return 0;
}

