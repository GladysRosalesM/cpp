#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char** argv) 
{
	double numero;
	double raizCuadrada;
	double elevacion;
	
	cout << "Ingrese un numero: " <<endl;
	cin >> numero;
	
    raizCuadrada = sqrt(numero);
    elevacion = pow(numero, 0.5);
	cout << "La raiz cuadrada del numero ingresado es: " <<elevacion <<endl;
		
	return 0;
}
