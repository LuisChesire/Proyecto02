
#include <stdlib.h>
#include <iostream>
#include <vector>
#include <math.h>

#include "PoligonoIrreg.h"
#include "Cola.h"

using namespace std;

double fRand(double fMin, double fMax)
{
    double f = (double)rand() / RAND_MAX;
    double res = fMin + f * (fMax - fMin);
    return roundf(res* 1000.0) / 1000.0;
}


int main()
{
	srand(time(0));	
	//int n = rand() % 20;
	
	int n=12; //Este valor es para volverlo estatico y que el tamaño sea definido por nosotros
	Cola aux=CrearCola();

		PoligonoIrreg p(n);


		for(int i = 0; i < n; i++)
		{
			double x = fRand(-100, 100);
			double y = fRand(-100, 100);
			cout << "X: " << x << " Y: " << y << endl;
			//ingresaCola(aux,x,y);


			Coordenada a(aux->listaCola,y);
			p.addVertice(a);
		}

	cout << "Vector sin ordenar: \n\n" << endl;
	p.imprimeVertices();
	p.ordenaA();
	cout << "\n\nVector ordenado: \n\n" << endl;
	p.imprimeVertices();
	
	cout << "\n" << endl;
	return 0;
}

