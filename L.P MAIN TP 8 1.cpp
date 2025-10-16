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
	int valor=0, total=0,retornar=0;
	cout << "Este programa indica la suma de todos los elementos de un vector de números enteros" << endl;
	cout << "Ingrese cuántos valores de vectores quiera ingresar" << endl;
	cin >> valor;
	for (int i=0;i<valor;i++)
	{
		cout << "Ingrese primer valor" << endl;
		cin >> v [valor];
		total = total + v[valor];
	}
	cout << "El resultado es: " << total << endl;
	cout << "¿Quieres volver a iniciar el programa? (si 1 no 2)" << endl;
	cin >> retornar;
	if (retornar==1)
	{
		return main ();
	}
}
