#include "Cola.h"

using namespace std;


int main(){
	cola *A;
	CrearCola(A);
	IngresarCola(A,1,2);
	IngresarCola(A,3,4);
	IngresarCola(A,5,6);

	//mostrarCola(A);
	return 0;
}