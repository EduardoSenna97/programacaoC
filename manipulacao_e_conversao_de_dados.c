#include <stdio.h>

// Manipulação e conversão de tipos de dados

int main (){
	
	// Existem dois tipos de variáveis de ponto flutuante na linguagem C:
	
	float x = 5.5;
	float y = 2.2;
	float soma = x + y;
	float diferenca = x - y;
	float produto = x * y;
	float quociente = x / y; //divisão de ponto flutuante
	
	printf("Soma: %.2f\n", soma);
	printf("Diferenca: %.2f\n", diferenca);
	printf("Produto: %.2f\n", produto);
	printf("Quociente: %.2f\n\n", quociente);
	
	printf("-------------------------------------------------\n\n");
	
	/* Até o momento tudo deu certo, mas pode acontecer de eu precisar misturar os tipos de variáveis.
	Para isso é feita a CONVERSAO DE DADOS, que pode ser implicita ou explicita:
	
	Implicita = ocorre automaticamente quando misturo diferentes tipos de dados em uma única expressão ( ex.: int e float ). Neste caso o
	compilador vai fazer a conversão dos tipos de dados para realizar a operação de acordo com o código.
	
	Exemplo abaixo:
	
	*/
	
	int a = 10;
	float b = 3.5;
	float resultado = a + b;
	
	printf("Resultado: %.2f\n", resultado);
	
	
  /*Aqui houve uma conversão implicita da variável A de um int para um float. Porém pode haver uma perca
	de dados, então não é recomendado fazer isto. Se acontecesse ao contrário, e o float se tornasse int,
	seria perdido a precisão dos dados. Para isto é melhor trabalhar com conversão EXPLICITA, um 'Casting'.*/

	// Exemplo de conversão EXPLICITA
	
	float quociente2 = (float) a / b;	// 'a' é explicitamente convertido para float. 
	
	printf("Quociente2: %.2f\n", quociente2);

	
	return 0;
}
