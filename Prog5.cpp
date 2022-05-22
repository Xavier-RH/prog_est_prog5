/* Autor: Xavier Romero Hernández, Realizado: 09/02/2022 
	Programa que pida los datos de un rombo y calcule su area.
	*/

#include <stdio.h>


int main (){
	float area, dmayor, dmenor;
	
	printf("Calcular el area de un rombo\n");
	printf("introduce la diagonal mayor: ");
	scanf("%f",&dmayor);
	printf("introduce la diagonal menor: ");
	scanf("%f",&dmenor);
	
	area=(dmayor*dmenor)/2;
	
	printf("\nEl area del rombo es de %.2f cm2",area);
	
	return 0;
}
