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
	int valor=0, total=0,mayor=0,menor=99999999999,retornar=0;
	cout << "Este programa indica cuál es el mayor y el menor de 10 números" << endl;
	for (int i=0;i<10;i++)
	{
		cout << "Ingrese primer valor" << endl;
		cin >> v [valor];
		if (mayor<v [valor])
		{
			mayor=v[valor];
		}
		if (menor>v [valor])
		{
			menor=v[valor];
		}
	}
	cout << "El mayor es: " << mayor << endl;
	cout << "El menor es: " << menor << endl;
	cout << "¿Quieres volver a iniciar el programa? (si 1 no 2)" << endl;
	cin >> retornar;
	if (retornar==1)
	{
		return main ();
	}
}
