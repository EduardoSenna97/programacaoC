#include <stdio.h>

// Operadores aritméticos


int main(){
/*	

	printf("Operadores Aritmeticos\n\n");
	
	int numero1, numero2 ;
	int soma, subtracao, multiplicacao;
	float divisao;
	
	printf("Entre com o numero1: \n");
	scanf("%d", &numero1);
	
	printf("Entre com o numero2: \n");
	scanf("%d", &numero2);
	
	soma = numero1 + numero2;
	subtracao = numero1 - numero2;
	multiplicacao = numero1 * numero2;
	divisao = numero1 / numero2;
	
	printf("O resultado da soma e: %d\n", soma);
	printf("O resultado da substrcao e: %d\n", subtracao);
	printf("O resultado da multiplicacao e: %d\n", multiplicacao);
	printf("O resultado da divisao e: %.2f\n", divisao);*/

	/*
	printf("Atribuição\n\n");
	Atribuição:
	
	Atribuição simples (=);
	Atribuição de soma (+=);
	Atribuição de substração (-=);
	Atribuição de multiplicação (*=);
	Atribuição de divisão (/=);
	
	*/
	
	/*
	int numero3, resultado;
	numero3 = 10;
	
	
	resultado = 10;
	printf("Resultado: %d\n", resultado);
	
	// Resultado = resultado + 20
	resultado += 20;
	printf ("Resultado soma: %d\n", resultado);
	
	// Resultado = resultado - numero3
	resultado -= numero3;
	printf("Resultado subtracao: %d\n", resultado);
	
	// Resultado = resultado *5
	resultado *= 5;
	printf("Resultado multiplicacao: %d\n", resultado);
	
	// Resultado = resultado / 2
	resultado /= 2;
	printf("Resultado divisao: %d\n", resultado);
	*/
	
	printf("Operadores de incremento e decremento: \n\n");
	
	/* Incremento (++) ~ Decremento (--);
	
	Pré-Incremento ( ++a )
	Pós-Incremento ( a++ )
	Pré-Decremento ( --a )
	Pós-Decremento ( a-- )
	
	*/

	
	int numero4 = 1;
	
	
	printf("Antes incremento: %d\n", numero4);
	numero4 ++;
	printf("Apos incremento: %d\n", numero4);
	
	printf("Antes decremento: %d\n", numero4);
	numero4 --;
	printf("Apos decremento: %d\n", numero4);
	
	int resultado2 = numero4 ++;
	printf ("Apos pos-incremento: \n Numero4: %d | Resultado: %d\n", numero4, resultado2);
	
	resultado2 = ++numero4;
	printf("Apos pre-incremento: \n Numero4: %d | Resultado: %d\n", numero4, resultado2);
	
	resultado2 = numero4--;
	printf("Apos pos-decremento: \n Numero4: %d | Resultado: %d\n", numero4, resultado2);
	
	
	resultado2 = --numero4;
	printf("Apos pre-decremento: \n Numero4: %d | Resultado: %d\n", numero4, resultado2);
	
	
	return 0;
}
