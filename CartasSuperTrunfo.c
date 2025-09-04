#include <stdio.h> // uma das bibliotecas

int main(){ // sempre começa com Main
    
    // variaveis da carta 1
    char carta_1[50] = "carta 1";
    char Paises[50];
    char Codigo_da_carta[50];
    char Nome_da_cidade[50];
    unsigned int Populaçao_da_cidade;
    float Area_km;
    float PIB;
    int Turistas;
    float Densidade_Populacional; // populaçao / area
    float PIB_per_Capita; // pib / populaçao
    float super_poder;

    // entradas e saidas da carta 1
    printf("digite seu pais: \n");
    scanf("%s", &Paises);
    
    printf("digite o codigo da carta: \n");
    scanf("%s", &Codigo_da_carta);

    printf("digite o nome da cidade: \n");
    scanf("%s", &Nome_da_cidade);
    
    printf("digite a Populaçao da cidade: \n");
    scanf("%u", &Populaçao_da_cidade);

    printf("digite a Area km: \n");
    scanf("%f", &Area_km);
    
    printf("digite o pib da cidade: \n");
    scanf("%f", &PIB);

    printf("digite os pontos turisticos: \n"); 
    scanf("%d", &Turistas);
    ////
    
    printf("resultado \n\n"); // isso foi so pra deixa um pouco mais bonito
    
    // aqui e a traformaçao do int para float e tam bem o calculo das variaves da carta 1
    Densidade_Populacional = (float)(Populaçao_da_cidade / Area_km);
    PIB_per_Capita = (float)(PIB / Populaçao_da_cidade);
    super_poder = (float)(Populaçao_da_cidade + Area_km + PIB + PIB_per_Capita + Turistas - Densidade_Populacional);
    
    // aqui eu estao as exibiçoes do programa
    printf("carta 1: \n\n");

    printf("O pais: %s\n", Paises);
    printf("Codigo da carta: %s\n", Codigo_da_carta);
    printf("Nome da cidade: %s\n", Nome_da_cidade);
    printf("Populaçao da cidade: %u\n", Populaçao_da_cidade);
    printf("Area: %.2f km\n", Area_km);
    printf("O pib: %.2f bilhões de dólares\n", PIB);
    printf("Numeros de pontos turisticos: %d\n", Turistas);
    printf("a Densidade_Populacional: %.2f \n", Densidade_Populacional);
    printf("o PIB_per_Capita: %.2f \n", PIB_per_Capita);
    printf("o super poder e: %.2f \n\n", super_poder);
    /////

    // aqui sao as variaves da carta 2

    char carta_2[50] = "carta 2"; 
    char naçao[50];
    char cod[50];
    char cdd[50];
    unsigned int Popula;
    float Area;
    float pib;
    int lugares;
    float densidade;
    float capita;
    float Super;

    // aqui sao as entradas e saidas da carta 2
    printf("digite seu pais: \n");
    scanf("%s", &naçao);
    
    printf("digite o codigo da carta: \n");
    scanf("%s", &cod);

    printf("digite o nome da cidade: \n");
    scanf("%s", &cdd);
    
    printf("digite a Populaçao da cidade: \n");
    scanf("%u", &Popula);

    printf("digite a Area km: \n");
    scanf("%f", &Area);
    
    printf("digite o pib da cidade: \n");
    scanf("%f", &pib);

    printf("digite os pontos turisticos: \n");
    scanf("%d", &lugares);

    // aqui e a traformaçao do int para float e tam bem o calculo das variaves da carta 2
    densidade = (float)(Popula / Area);
    capita = (float)(pib / Popula); 
    Super = (float)(Popula + Area + pib + capita + lugares - densidade);   
    
    printf("resultado \n\n");

    // aqui eu estao as exibiçoes do programa
    printf("carta 2: \n\n");

    printf("O pais: %s\n", naçao);
    printf("Codigo da carta: %s\n", cod);
    printf("Nome da cidade: %s\n", cdd);
    printf("Populaçao da cidade: %u\n", Popula);
    printf("Area: %.2f km\n", Area);
    printf("O pib: %.2f bilhões de dólares\n", pib);
    printf("Numeros de pontos turisticos: %d\n", lugares);
    printf("a Densidade_Populacional: %.2f \n", densidade);
    printf("o PIB_per_Capita: %.2f \n", capita);
    printf("o super poder e: %.2f \n\n", Super);
    /////

    // aqui e a variavel para compara as duas cartas
    int resultado;

    // aqui e comparaçao
    resultado = super_poder > Super;

    // aqui e conclusao e resultado das cartas
    printf("se %s for maior que %s o resultado e 1 se for menor e 0, Resultado: %d\n\n", carta_1, carta_2, resultado);

    
    printf("Populaçao da cidade: %d\n", (Populaçao_da_cidade) > (Popula));
    printf("Area: %d\n", (Area_km) > (Area));
    printf("O pib: %d\n", (PIB) > (pib));
    printf("pontos turisticos: %d\n", (Turistas) > (lugares));
    printf("a Densidade_Populacional: %d\n", (Densidade_Populacional) > (densidade));
    printf("o PIB_per_Capita: %d\n", (PIB_per_Capita) > (capita));
    printf("o super poder e: %d\n\n", (super_poder) > (Super));





    return 0;
    
}
