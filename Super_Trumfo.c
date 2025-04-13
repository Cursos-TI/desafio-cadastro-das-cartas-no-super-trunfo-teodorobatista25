#include <stdio.h>

int main(){

    char Estado;
    char Carta[30];
    char Cidade[50];
    int Populacao, Turismo;
    float Area, PIB;



    printf("Digite seu Estado: \n");
    scanf("%c", &Estado);

    printf(" Digite sua Carta \n");
    scanf("%s", &Carta);

    printf(" Digite sua Cidade \n");
    scanf("%s", &Cidade);
    
    printf("Digite sua População \n");
    scanf("%i", &Populacao);

    printf("Digite sua Area \n");
    scanf("%f", &Area);

    printf("Digite seu PIB \n ");
    scanf("%f", &PIB);

    printf("Digite seu Turismo \n");
    scanf("%d", &Turismo);

    printf("Letra do Estado: %c\n", Estado);
    printf("Número da Carta: %s\n", Carta);
    printf("Nome da Cidade: %s\n", Cidade);
    printf("Número Populacional: %i\n", Populacao);
    printf("Área em Km²: %.3f\n", Area);
    printf("PIB: %.2f\n", PIB);
    printf("Números de Pontos Turísticos: %d\n", Turismo);


    return 0;


}
























    








