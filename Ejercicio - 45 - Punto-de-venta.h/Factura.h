#include <iostream>
#include <Menu.h>
#include <productos.h>

using namespace std;

double subtotal;
double total;
double ISV;
string listaProductos;

void agregarProducto(string descripcion, int cantidad, double precio)
{
	listaProductos = listaProductos + descripcion + '\n';
	subtotal = subtotal + (cantidad * precio);
	ISV = subtotal * 0.15;
	total = subtotal + ISV;
}

void imprimirFactura()
{
	system ("cls");
	cout <<"********" << endl;
	cout << "FACTURA" << endl;
	cout <<"********" << endl;
	cout << endl;
	
	cout << "Productos:" <<endl;
	cout << listaProductos;
	
	cout << endl;
	cout << "Subtotal: " << subtotal;
	cout << endl;
	cout << endl;
	
	cout << "ISV 15%: " << ISV;
	cout << endl;
	cout << endl;
	
	cout << "Total: " <<total;
	cout << endl;
	cout << endl;
	system("pause");
}

