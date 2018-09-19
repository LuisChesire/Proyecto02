typedef int TipoDato;
#include <iostream>
#include "Cola.h"

using namespace std;

void CrearCola(COLA *C){
    C->frente=0;
    C->final=0;
}

int ColaLlena(COLA C){
    if(C.frente==(C.final+1) % TAMMAX){
        return(1);
    }
    else{
        return(0);
    }
}

int ColaVacia(COLA C){
    return(C.frente==C.final!=0);
}

void limpiarCola( COLA *C){
    CrearCola(C);
}

TipoDato QuitarCola(COLA *C){
    if(ColaVacia(*C)){
        printf("Cola Vacia");
        exit(-1);
    }
    else{
        C->frente=(C->frente+1)%TAMMAX;
        return(C->listaCola[C->frente]);

    }
}

TipoDato frenteCola(COLA *C){
    if(ColaVacia(*C)){
        printf("Fin de procesos");
        exit(-1);
    }
    return(C->listaCola[C->frente+1]);
}




void IngresarCola(COLA * C,TipoDato x, TipoDato y){
    if(ColaLlena(*C)){
        printf("Error Cola Llena");
        exit(-1);
    }
    else{
        C->final=((C->final+1)%TAMMAX);
        C->listaCola[C->final]=x;
        C->listaColaY[C->final]=y;//Me quede ingresando valores de coordenada
        
       // mostrarCola(C);    
    }
}
/*
void Arreglar(TipoDato A){
    C->


 }
*/

TipoDato Direccion(COLA C)
{
	if(ColaVacia(C))
	{
		printf("Error, cola llena");
		exit(-1);
	}
	return C.listaCola[(C.frente+1)%TAMMAX];
}

void mostrarCola(COLA *C){
    for(int i=0;C->listaCola[i]!=C->listaCola[i+1];i++)
    {
        cout << C->listaCola[i] << endl;

    }

}