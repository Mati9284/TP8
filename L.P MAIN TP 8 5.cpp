#include <iostream>
#include <cmath>
#include <string>
#include <string.h>
#include <ctype.h>
using namespace std;
int main ()
{
	setlocale(LC_ALL, "spanish");
	float v[4];
	int valor=0,total=0,prom=0,retornar=0,pmayor=0,pmenor=0;
	float mayor=0,menor=9999;
	cout << "Este programa indica cuál de todas las 5 personas es la más alta y la más baja" << endl;
	for (int i=0;i<5;i++)
	{
		cout << "Ingrese primer valor" << endl;
		cin >> v [valor];
		total=v[valor]+total;
		if (mayor<v [valor])
	{
		mayor=v[valor];
		pmayor=pmayor+1;
	}
	if (menor>v [valor])
	{
		pmenor=pmenor+1;
		menor=v[valor];
	}
	}
	prom=total/5;
	cout << "El promedio es: " << total << endl;
	cout << "Los más altos son: " << pmayor << endl;
	cout << "El menos altos son: " << pmenor << endl;
	cout << "¿Quieres volver a iniciar el programa? (si 1 no 2)" << endl;
	cin >> retornar;
	if (retornar==1)
	{
		return main ();
	}
}
