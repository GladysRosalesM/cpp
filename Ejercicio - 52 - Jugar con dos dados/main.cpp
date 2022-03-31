#include <iostream>
#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(int argc, char** argv) 
{
	int dado1 = 0;
	int dado2 = 0;
	int resultado = 0;
	
	srand(time(NULL));
	
	for (int i = 0; i < 1; i++)
	{
	dado1 = rand() % 6 + 1;
	cout << "Dado1 cayo en:" << dado1 << endl << endl;
	dado2 = rand() % 6 + 1;	
	cout << "Dado2 cayo en:" << dado2 << endl << endl;
	resultado = dado1 + dado2;
	cout << "La suma de los dados lanzados es: "<< resultado <<endl;
	
	} 
	return 0;
}


