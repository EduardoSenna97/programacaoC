#include <stdio.h>

int main (){

    /*
    
    Operadores relacionais - Permitem que sejam comparadas variáveis/valores e estabelece relação entre estes.
    O resultado destas comparações retornará um valor booleano:

    1 - verdadeiro
    0 - falso

    a > b ~ maior que
    a < b ~ menor que
    a >= b ~ maior ou igual a 
    a <= b ~ menor ou igual a
    a == b ~ igual a
    a != b ~ diferente de

    
    */

    int a = 20;
    int b = 20;

    printf("a > b: %d\n", a > b);
    printf("a <= b: %d\n", a <= b);
    printf("a == b: %d\n", a == b);
    printf("a != b: %d\n\n", a != b);

    printf("Comparando variáveis de tipos diferentes; aqui o compilador faz uma conversão implicita\n\n");

    int x = 5;
    float y = 5.0;
    char c = 'a';

    printf("x >= y: %d\n", x >= y);
    printf("x == y: %d\n", x == y);
    printf("x != y: %d\n", x != y);

    printf("x >= c: %d\n", x >= c);
    printf("O valor ASCII de %c é %d\n\n", c, c);


    printf("---Conversão Explícita---\n\n");

    /* 
    
    Conversão Explícita - Casting

    É usada quando precisamos garantir que a comparação de dados diferentes seja feita de forma correta, sem depender da conversão implícita.
    
    */

    float numero1 = 10.2;
    int numero2 = 10;

    printf("numero1 > numero2: %d\n", numero1 > numero2);
    printf("numero1 == numero2: %d\n", numero1 == numero2);

    // Realizando o casting:

    printf("numero1 > numero2: %d\n", (int)numero1 > numero2);
    printf("numero1 == numero2: %d\n", (int)numero1 == numero2);

    return 0;
}