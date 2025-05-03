#include <stdio.h>


int main (){
	
	/* 
	
	Modificadores de tipos de dados em lingaugem C - eles permitem que controle melhor como os dados são armazenados e manipulados no programa;
	
	Estes seriam:
	
	unsigned - declara variáveis que podem armazenar apenas valores positivos, incluindo o 0. (Lembrar de modificar o especificador de formato %u para ler ou imprimir.
	Uso quando sei que só preciso de não irei trabalhar com números negativos, permitindo que eu tenha uma faixa de núemros positivos maior. Ex.: IDADE | ESTOQUE | ETC.

	signed - indica que a variável trabalha com valores positivos e negativos. Uso padrão.
	
	long - utilizado para aumentar a capacidade de armazenamento dos tipos primitivos; pode ser aplicado a int e double. Ex.: long int | long double. 
	Para imprimir o especificador de formato é %ld ou %li; em casos de long long int ou long longe double, seria %lli ou %lld. 
	Uso quando preciso trabalhar com números inteiros muito grandes, fora do alcance dos números inteiros normais (sempre verificar a plataforma e como ela trata).
	
	short - basicamente utilizado para economizar memória; Uso quando preciso de uma variável inteira que ocupa menos memória e o valor ta dentro do permitido.
	Posso usar em um laço para limitar através de uma variável. 
	
	*nota: o int comporta 2 milhoes negativos e 2 milhoes positivos, porém se eu colocar como unsigned, ele dobra o valor positivo.
	*char: -128 a 127 ; unsigned char: 0 a 255*
	
	
	*/
	
	int numeroInt = 3000000000; // este valor excede o limite de um int normal, gerando um overflow.
	unsigned int numeroUnsignedInt = 3000000000;
	
	printf("Numero com sinal: %d\n", numeroInt);
	printf("Numero sem sinal: %u\n", numeroUnsignedInt);
	
	int numeroNormal = 2147483647;	// valor máximo de int
	long int numeroGrande = 2147483647;
	
	printf("Numero regular (int): %d\n", numeroNormal);
	printf("Numero grande (long int): %ld\n", numeroGrande);
	
	numeroGrande = 2147483648;  //No DevC++ o valor continou negativo, somente aqui no GitHub está normal
	printf("Numero grande ATUALIZADO (long int): %ld\n\n", numeroGrande);
	
	printf("Utilizando comando syzeof\n\n");
	
	printf("Tamanho de int: %u bytes\n", sizeof(int));
	printf("Tamanho de long int: %u bytes\n", sizeof(long int));
	printf("Tamanho de long long int: %u bytes\n", sizeof(long long int));
	printf("Tamanho de double: %u bytes\n", sizeof(double));
	printf("Tamanho de long double: %u bytes\n", sizeof(long double));

	double numeroPreciso = 3.141592653589793;
	long double numeroMuitoPreciso = 3.141592653589793238463; //só funciona se eu colocar o double sem o long
	
	printf("Numero preciso (double): %.15f\n", numeroPreciso);
	printf("Numero muito preciso (long double): %.21Lf\n", numeroMuitoPreciso);

	unsigned long int numeroGrandePositivo = 4000000000;
	unsigned int numeroPositivo = 4000000000;
	long int numeroGrande1 = 4000000000;
	int numero = 4000000000;

	printf("Número positivo grande: %lu\n", numeroGrandePositivo);
	printf("Número positivo: %u\n", numeroPositivo);
	printf("Numero grande1: %ld\n", numeroGrande1);
	printf("Numero: %d\n", numero);
	
	short int numeroPequeno = 32767; // Valor maximo do short int
	printf("Número pequeno (short int): %d\n", numeroPequeno);

	numeroPequeno = 32768;	//Valor maior que o máximo do short int
	printf("Número pequeno atualizado (short int): %d\n", numeroPequeno);

	printf("\n*** Tamanho das variáveis ***\n");
	printf("Short int: %lu B - int: %lu B - long int: %lu B\n", sizeof(short int), sizeof (int), sizeof (long long int));
	printf("Float: %lu B - Double: %lu B - long double: %lu B\n", sizeof (float), sizeof (double), sizeof (long double));


	return 0;
}