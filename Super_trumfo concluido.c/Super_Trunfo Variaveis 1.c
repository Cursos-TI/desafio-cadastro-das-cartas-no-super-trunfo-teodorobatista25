#include <stdio.h>
 
 int main(){
 
     char Estado;
     char Carta[40];
     char Cidade[50];
     int Populacao = 2418.000;
     int Turismo;
     float Area = 693.442;
     float PIB = 62954.000;
     float Densidade = (float) Populacao / Area;
     float Percapita = (float) PIB / Populacao;



     printf("*** Super_Trunfo Cidade A: SALVADOR com variaveis ***\n");
 
 
 
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

     //VARIAÉIS DE DENSIDA POPULACIONAL E PER CAPITA;

     printf("Densidade: %.3f\n", Densidade);
     printf("Per Capita: %.3f\n", Percapita);
     
 
 
     return 0;
 
 
 }
 

