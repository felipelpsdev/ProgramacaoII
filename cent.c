#include <stdio.h>
#include <stdlib.h>

void main(){
	int a;
	printf("Digite um numero: ");
	scanf("%d", &a);
	int cent = (a / 100)*100;
	int dez = ((a / 100)/10*10);
	int uni = a % 10;
	printf("%d = %d + %d +%d", a, cent, dez, uni);
}