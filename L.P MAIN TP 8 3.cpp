#include <iostream>
#include <cmath>
#include <string>
#include <string.h>
#include <ctype.h>
using namespace std;
int main ()
{
	setlocale(LC_ALL, "spanish");
	int v[4];
	int valor=0, total=0,retornar=0,lugar=0,elemento=0;
	cout << "Este programa indica la suma de todos los elementos de un vector de números enteros" << endl;
	cout << "Ingrese cuántos valores de vectores quiera ingresar" << endl;
	cin >> valor;
	for (int i=0;i<valor;i++)
	{
		cout << "Ingrese un valor" << endl;
		cin >> v [valor];
		total = 2 * v[valor];
		cout << "El valor duplicado de este valor es este: " << total << endl;
	}
	cout << "Ahora ingrese un número que insertará un nuevo elemento entre la posición 0 a " << valor << endl;
	cin >> lugar;
	cout << "Ingrese el nuevo número" << endl;
	cin >> elemento;
	v[lugar] = {elemento};
	cout << "El elemento me queda: " << v[lugar] << endl;
	for (int j=0;j<valor;j++)
	{
		if (v[valor] != 0)
		{
			cout << "Estos son los valores que no son 0: " << v[valor] << endl;
		}
	}
	cout << "¿Quieres volver a iniciar el programa? (si 1 no 2)" << endl;
	cin >> retornar;
	if (retornar==1)
	{
		return main ();
	}
}
