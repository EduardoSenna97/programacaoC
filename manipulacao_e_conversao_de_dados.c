#include <stdio.h>

// Manipula��o e convers�o de tipos de dados

int main (){
	
	// Existem dois tipos de vari�veis de ponto flutuante na linguagem C:
	
	float x = 5.5;
	float y = 2.2;
	float soma = x + y;
	float diferenca = x - y;
	float produto = x * y;
	float quociente = x / y; //divis�o de ponto flutuante
	
	printf("Soma: %.2f\n", soma);
	printf("Diferenca: %.2f\n", diferenca);
	printf("Produto: %.2f\n", produto);
	printf("Quociente: %.2f\n\n", quociente);
	
	printf("-------------------------------------------------\n\n");
	
	/* At� o momento tudo deu certo, mas pode acontecer de eu precisar misturar os tipos de vari�veis.
	Para isso � feita a CONVERSAO DE DADOS, que pode ser implicita ou explicita:
	
	Implicita = ocorre automaticamente quando misturo diferentes tipos de dados em uma �nica express�o ( ex.: int e float ). Neste caso o
	compilador vai fazer a convers�o dos tipos de dados para realizar a opera��o de acordo com o c�digo.
	
	Exemplo abaixo:
	
	*/
	
	int a = 10;
	float b = 3.5;
	float resultado = a + b;
	
	printf("Resultado: %.2f\n", resultado);
	
	
  /*Aqui houve uma convers�o implicita da vari�vel A de um int para um float. Por�m pode haver uma perca
	de dados, ent�o n�o � recomendado fazer isto. Se acontecesse ao contr�rio, e o float se tornasse int,
	seria perdido a precis�o dos dados. Para isto � melhor trabalhar com convers�o EXPLICITA, um 'Casting'.*/

	// Exemplo de convers�o EXPLICITA
	
	float quociente2 = (float) a / b;	// 'a' � explicitamente convertido para float. 
	
	printf("Quociente2: %.2f\n", quociente2);

	
	return 0;
}
