#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
	
	int pares = 0;
	int impares = 0;
	int suma = 0;
	double total = 0;
	
	for(int i = 1; i <= 10; i++)
	{
		if (i % 2 == 0) { 
		    pares = pares + i;
		}
		cout << i << " ";
	}
	
	cout << endl;
	cout << endl;
	cout << "Total pares: " << pares;
	cout << endl;
	cout << endl;
	
	for(int i = 1; i <= 9; i++)
	{
		if (i % 2 == 1) { 
		    impares = impares + i;
		}
		cout << i << " ";
	}
	cout << endl;
	cout << endl;
	cout << "Total impares: " << impares;
	
    suma = pares + impares;
    total = suma;

    cout << endl;
    cout << endl;
    cout << "La suma total de pares e impares es: " << total;
	
	
	return 0;
}
