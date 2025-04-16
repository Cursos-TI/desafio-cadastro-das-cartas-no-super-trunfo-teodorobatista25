#include <stdio.h>
 
 int main(){
 
     char Estado;
     char Carta[40];
     char Cidade[50];
     int Populacao, Turismo;
     float Area, PIB;

     printf("*** Super_Trunfo Cidade A***\n");
 
 
 
     printf("Digite seu Estado: \n");
     scanf("%c", &Estado);
 
     printf(" Digite sua Carta \n");
     scanf("%s", &Carta);
 
     printf(" Digite sua Cidade \n");
     scanf("%s", &Cidade);
     
     printf("Digite sua População \n");
     scanf("%d", &Populacao);
     
     printf("Digite seu Turismo \n");
     scanf("%d", &Turismo);

     printf("Digite sua Area \n");
     scanf("%f", &Area);
 
     printf("Digite seu PIB \n ");
     scanf("%f", &PIB);
 
  
 
     printf("Letra do Estado: %c\n", Estado);
     printf("Número da Carta: %s\n", Carta);
     printf("Nome da Cidade: %s\n", Cidade);
     printf("Número Populacional: %d\n", Populacao);
     printf("Área em Km²: %.3f kM² \n", Area);
     printf("PIB: %.0f MILHOES DE REAIS \n", PIB);
     printf("Números de Pontos Turísticos: %d\n", Turismo);
 
 
     return 0;
 
 
 }
 
