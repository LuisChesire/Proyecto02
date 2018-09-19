#include <iostream>
#include <stdio.h>
#include <stdlib.h>
//#include <conio.h>
#include <time.h>
//#include <windows.h>

#define TAMMAX 100
typedef int TipoDato;

typedef struct cola
{
	int frente;
	int final;
	TipoDato listaCola[TAMMAX];
	TipoDato listaColaY[TAMMAX];

}COLA;

void CrearCola(COLA *C);
void limpiarCola(COLA *C);
int ColaLlena(COLA C);
int ColaVacia(COLA C);
void IngresarCola(COLA *C, TipoDato, TipoDato);
TipoDato QuitarCola(COLA *C);
TipoDato frenteCola(COLA C);
TipoDato finalCola(COLA C);
void mostrarCola(COLA *C);
void leerColaFrente(COLA *C);
void leerColaFinal(COLA *C);

