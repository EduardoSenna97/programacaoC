/* Aprendendo entrada e saida de dados em c++*/

#include<stdio.h>

int main(){
	
	//Sintaxe padr�o printf
	
	printf("Ola Mundo!");
	
	//printf ("texto em formata��o", variavel1, variavel2, ...)
	//printf ("Ol� Mundo!\n");
	
	int idade =25;
	float altura = 1.75;
	char opcao = 'S';
	char nome[20] = "sergio";
	
	printf("A idade do %s e: %d\n", nome, idade);
	printf("A altura e: %.2f\n", altura);
	printf("A opcao e: %c\n", opcao);
	
	/*
	printf ("%formato1 %formato2 %formato3", variavel1, variavel2, variavel3)
	
	%d: Imprime um inteiro no formato decimal.
	%i: Equivalente a %d.
	%f: Imprime um n�mero de ponto flutuante no formato padr�o.
	%e: Imprime um n�mero de ponto flutuante na nota��o cient�fica.
	%c: Imprime um �nico caractere.
	%s: Imrpime uma cadeia (string) de caracteres. 
	
	*/
	
	//Utilizando scanf com as mesmas variaveis, por�m agora ir� ser lido:
	
	int idade2;
	float altura2;
	char opcao2;
	char nome2[20];
	
	//Sintaxe scanf
	//scanf("formato1" "formato2", &variavel1, variavel2, ...);
	
	printf("Digite a sua idade: ");
	scanf("%d", &idade2);
	printf ("A idade e: %d\n", idade2);
	
	printf ("Digite a sua altura: ");
	scanf ("%f", &altura2);
	printf ("A sua altura e: %f\n", altura2);
	
	printf("\nDigite seu nome: ");
	scanf("%s", &nome2);
	printf("Seu nome e: %s\n", nome2); 
	
	printf("Digite uma opcao: ");
	scanf(" %c", &opcao2);
	printf("\nA opcao e: %c", opcao2);
	

	return 0;
}
