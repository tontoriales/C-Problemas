//Problema015
//Crear un algoritmo para calcular el interés compuesto generado
//por un capital depositado durante cierta cantidad de tiempo a
//una tasa de interés determinada, aplique las siguientes 
//fórmulas: M=(1+(r/100))™*C  |  I=M-C
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
