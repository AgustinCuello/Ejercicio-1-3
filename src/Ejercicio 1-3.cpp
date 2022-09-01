//============================================================================
// Name        : Ejercicio.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

#include <stdio.h>
#include <stdlib.h>

int main() {
	setbuf(stdout, NULL);

	int num1;
	int num2;
	int num3;
	int numMedio;

	printf("Ingrese el primer numero: ");
	scanf("%d", &num1);
	setbuf(stdout, NULL);

	printf("Ingrese el segundo numero: ");
	scanf("%d", &num2);
	setbuf(stdout, NULL);

	printf("Ingrese el tercer numero: ");
	scanf("%d", &num3);
	setbuf(stdout, NULL);

	if(num1!=num2 || num1!=num3 || num2!=num3){
		if(num1>num2)
			{
				if(num3>num1)
				{
					numMedio=num1;
				}else
				{
					numMedio=num3;
				}
			}else if(num3>num2){
				numMedio=num2;
			}else
			{
				numMedio=num3;
			}

		printf("El %d es el numero medio", numMedio);

	}else{

		printf("No hay numero medio");

	}

	return 0;
}
