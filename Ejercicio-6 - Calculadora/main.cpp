#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;	

int main(int argc, char** argv) 
{
	// Datos de entrada
	int a = 0;
	int b = 0;
	int suma = 0;
	int resta = 0;
	int multiplicacion = 0;
	int division = 0;
	
	cout << "Ingrese el valor de a:";
	cin >> a;
	
	cout << endl;
	
	cout << "Ingrese el valor de b:";
	cin >> b;
	
	cout << endl;
	
	// Proceso
	suma = a + b;
	resta = a - b;
	multiplicacion = a * b;
	division = a / b;
	
	// Salida
	cout << "La suma de a + b es: " << suma << endl;
	cout << "La resta de a - b es: " << resta << endl;
	cout << "La suma de a * b es: " << multiplicacion << endl;
	cout << "La suma de a / b es: " << division << endl;
	
	
	return 0;
	
}
