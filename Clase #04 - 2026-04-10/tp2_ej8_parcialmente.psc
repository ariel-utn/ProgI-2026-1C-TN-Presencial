Algoritmo TP02EJ08_incompleto
	Escribir 'Ingrese tres numeros:'
	Leer n1,n2,n3
	Si n1>0&n2>0&n3>0 Entonces
		Escribir '3 positivos'
	SiNo
		Si ((n1>0&n2>0&n3<0)|(n1>0&n3>0&n2<0)|(n2>0&n3>0&n1<0)) Entonces
			Escribir '2 positivos'
		SiNo
			// CONTINUAR . . . .
		FinSi
	FinSi
FinAlgoritmo
