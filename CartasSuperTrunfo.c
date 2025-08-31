#include <stdio.h>
// include inclui a biblioteca padrão de entrada e saída, necessária para usar a função printf.
// <stdio.h> "cabeçalho padrão de entrada/saída"

int main() {  //  int main() é onde o programa começa a execução. Toda aplicação em C começa pela função main.
    printf("Carta 1\n\n"); // aqui eu usei a mesma logica do "ola mundo" para dar nome de carta 1,2 e o \n para pular linhas.
    //  printf é usada para exibir informações na tela. sua sintaxe e (''texto com formatação'', variavel1, variavel2, ...);
     

    char Paises[50] = "Japão";
    char Codigo_da_carta[50] = "TK1";
    char Nome_da_cidade[50] = "Tokyo";
     // char = Declara uma variável de caractere chamadas: paises, Codigo_da_carta, Nome_da_cidade.

    int Populaçao_da_cidade = 300000;
    int Turistas = 50;
    // int = Declara uma variável inteira chamadas: Populaçao_da_cidade, Turistas.

    float Area_km = 1674.20;
    float PIB = 700.89;
    //  float = Declara uma variável de ponto flutuante chamadas: Area_km, PIB.
    

    printf("O pais: %s\n", Paises); 
    printf("Codigo da carta: %s\n", Codigo_da_carta);
    printf("Nome da cidade: %s\n", Nome_da_cidade);
     // %s: Imprime uma cadeia (string) de caracteres.

    printf("Populaçao da cidade: %d\n", Populaçao_da_cidade); // %d: Imprime um inteiro no formato decimal.

    printf("Area: %.2f km\n", Area_km);
    printf("O pib: %.2f bilhões de dólares\n", PIB);
    // %f: Imprime um número de ponto flutuante no formato padrão. usei o %,2f para limitar as casas decimais

    printf("Numeros de pontos turisticos: %d\n\n\n", Turistas); // %d: Imprime um inteiro no formato decimal.
    // aqui eu usei 3 vezes o \n.(eu nao sabia como ia colocar as duas cartas nesses mesmo arquivo entao fiz isso).


    // na segunda carta nao vou colocar os comentarios, nao vejo nessecidade devido o processo ser o mesmo.

       printf("Carta 2\n\n");
    


    char naçao[50] = "koreia";
    char cod[50] = "KS1";
    char cdd[50] = "Seou";
    int Popula = 300000;
    float Area = 1674.20;
    float pib = 700.89;
    int lugares = 50;

    printf("O pais: %s\n", naçao);
    printf("Codigo da carta: %s\n", cod);
    printf("Nome da cidade: %s\n", cdd);
    printf("Populaçao da cidade: %d\n", Popula);
    printf("Area: %.2f km\n", Area);
    printf("O pib: %.2f bilhões de dólares\n",pib);
    printf("Numeros de pontos turisticos: %d\n", lugares);
    

    //eu fiz tudo o que se pede no video, mais eu nao entendi se eu precisava coloca como o usuario cadastrando as cartas dele.


    return 0;
}
