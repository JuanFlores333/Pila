#include <iostream>
#include <stack>
#include "PILA.h"

int main()
{
	using namespace std;
	stack<int> pila;
	int opcion, dato;
	do
	{
		cout << "1. Insertar elemento a la pila" << endl;
		cout << "2. Mostrar elementos de la pila" << endl;
		cout << "3. Eliminar elemento de la pila" << endl;
		cout << "4. Pila vacia" << endl;
		cout << "5. Salir" << endl;
		cout << "Opcion: ";
		cin >> opcion;
		switch (opcion)
		{
		case 1:
			//Menu con con opciones a insertar, playera, calcetines, pantalon, ropa interior, sudadera y calzado
			cout << "1. Playera" << endl;
			cout << "2. Calcetines" << endl;
			cout << "3. Pantalon" << endl;
			cout << "4. Ropa interior" << endl;
			cout << "5. Sudadera" << endl;
			cout << "6. Calzado" << endl;
			cout << "Opcion: ";
			cin >> dato;
			pila.push(dato);
			break;
		case 2:
			if (pila.empty())
			{
				cout << "La pila esta vacia" << endl;
			}
			else
			{
				//mostrar todos los elementos de la pila
				cout << "Elementos de la pila: " << endl;
				while (!pila.empty())
				{
					if (pila.top() == 1)
					{
						cout << "Playera" << endl;
					}
					else if (pila.top() == 2)
					{
						cout << "Calcetines" << endl;
					}
					else if (pila.top() == 3)
					{
						cout << "Pantalon" << endl;
					}
					else if (pila.top() == 4)
					{
						cout << "Ropa interior" << endl;
					}
					else if (pila.top() == 5)
					{
						cout << "Sudadera" << endl;
					}
					else if (pila.top() == 6)
					{
						cout << "Calzado" << endl;
					}
					pila.pop();
				}
			}
			break;
		case 3:
			//eliminar algun elemento de lapila que no sea el de hasta arriba
			if (pila.empty())
			{
				cout << "La pila esta vacia" << endl;
			}
			else
			{
				cout << "Elemento eliminado: ";
				if (pila.top() == 1)
				{
					cout << "Playera" << endl;
				}
				else if (pila.top() == 2)
				{
					cout << "Calcetines" << endl;
				}
				else if (pila.top() == 3)
				{
					cout << "Pantalon" << endl;
				}
				else if (pila.top() == 4)
				{
					cout << "Ropa interior" << endl;
				}
				else if (pila.top() == 5)
				{
					cout << "Sudadera" << endl;
				}
				else if (pila.top() == 6)
				{
					cout << "Calzado" << endl;
				}
				pila.pop();
			}
			break;
		case 4:
			if (pila.empty())
			{
				cout << "La pila esta vacia" << endl;
			}
			else
			{
				cout << "La pila no esta vacia" << endl;
			}
			break;
		case 6:
			cout << "Salir" << endl;
			break;
		default:
			cout << "Opcion no valida" << endl;
			break;
		}
		cout << endl;
		system("pause");
		system("cls");

	} while (opcion != 5);
	return 0;

}