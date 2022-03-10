#include <iostream>

using namespace std;

extern void agregarProducto(string descripcion, int cantidad, double precio);
extern void imprimirFactura();

void productos(int opcion)
{
	system ("cls");
	
	int opcionProducto = 0; 
		switch (opcion)
	{
	case 1:
	{
		cout << "BEBIDAS CALIENTES" << endl;
		cout << "*****************" << endl;
		cout << "1- Capuccino" << endl;
		cout << "2- Expresso" << endl;
		cout << "3- Latte" << endl;
		cout << endl;
		
		cout << "Ingrese una opcion: ";
		cin >> opcionProducto;
		
		switch(opcionProducto)
			{
				case 1:
					agregarProducto("1 Capuccino - L 40.00", 1, 40);
					break;
				case 2:
					agregarProducto("1 Expresso - L 30.00", 1, 30);
					break;
				case 3:
					agregarProducto("1 Latte - L 50.00", 1, 50);
					break;
				default:
				{
				cout << "opcion no valida";
				    return;
					break;	
				}
					
			}
			cout << "Producto agregado" << endl << endl;
			system ("pause");
		
		break;			
	}
	
	case 2:
	{
		cout << "BEBIDAS FRIAS" << endl;
		cout << "*************" << endl;
		cout << "1- Te Frio" << endl;
		cout << "2- Jugo de Naranja" << endl;
		cout << "3- Agua Embotellada" << endl;
		cout << endl;
		
		cout << "Ingrse una opcion: ";
		cin >> opcionProducto;
		
		switch(opcionProducto)
			{
				case 1:
					agregarProducto("1 Te Frio - L 30.00", 1, 30);
					break;
				case 2:
					agregarProducto("1 Jugo de Naranja - L 25.00", 1, 25);
					break;
				case 3:
					agregarProducto("1 Agua Embotellada - L 20.00", 1, 20);
					break;
				default:
				{
				cout << "opcion no valida";
				    return;
					break;	
				}
			}
			cout << "Producto agregado" << endl << endl;
			system ("pause");
		    break;			
	}
	case 3:
	{
		cout << "REPOSTERIA" << endl;
		cout << "**********" << endl;
		cout << "1- Chilena" << endl;
		cout << "2- Galleta de avena" << endl;
		cout << "3- Dona" << endl;
		cout << endl;
		
		cout << "Ingrse una opcion: ";
		cin >> opcionProducto;
		
		switch(opcionProducto)
			{
				case 1:
					agregarProducto("1 Chilena  - L 35.00", 1, 35);
					break;
				case 2:
					agregarProducto("1 Galleta de avena - L 25.00", 1, 25);
					break;
				case 3:
					agregarProducto("1 Dona - L 18.00", 1, 18);
					break;
				default:
				{
				cout << "opcion no valida";
				    return;
					break;	
				}
			}
			cout << "Producto agregado" << endl << endl;
			system ("pause");
		    break;			
	}			
	default:
		break;
      }
   }

