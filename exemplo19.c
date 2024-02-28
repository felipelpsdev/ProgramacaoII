#include <stdio.h>

int main(){
	int valor;
	printf("Digite um numero: ");
	scanf("%d", &valor);
	int quadrado = valor * valor;
	int cubo = valor * valor * valor;
	printf ("O quadrado do numero %d e: %d\n", valor, quadrado);
	printf ("O cubo do numero %d e: %d\n", valor, cubo);

}