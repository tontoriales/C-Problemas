//Problema015
//Crear un algoritmo para calcular el inter�s compuesto generado
//por un capital depositado durante cierta cantidad de tiempo a
//una tasa de inter�s determinada, aplique las siguientes 
//f�rmulas: M=(1+(r/100))�*C  |  I=M-C
#include <iostream>
using namespace std;
int main() {
	int N, S;
	cout<<"Numero: ";
	cin>>N;
	S = (N * (N + 1))/2;
	cout<<"Suma: "<<S;
	return 0;
}
