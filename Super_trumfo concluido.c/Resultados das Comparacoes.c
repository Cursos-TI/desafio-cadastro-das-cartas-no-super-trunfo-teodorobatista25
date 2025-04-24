#include <stdio.h>

int main(){

               //*** Carta A - SALVADOR ***;

    char Estado1;
    char Carta1[40];
    char Cidade[50];
    int Populacao1 = 2418.000;
    int Turismo1 = 20;
    unsigned Area1 = 693.442;
    unsigned PIB1 = 62954.000;
    unsigned Densidade1 = (float) Populacao1 / Area1;
    float Percapita1 = (float) PIB1 / Populacao1;
    float SuperPoder1 = (float) Populacao1 + Turismo1 + Area1 + PIB1 + Densidade1 + Percapita1;



               //*** Carta B - ILHÉUS ***;


    char Estado2;
    char Carta2[40];
    char Cidade2[50];
    int Populacao2 = 178.649;
    int Turismo2 = 6;
    unsigned Area2 = 1.585;
    unsigned PIB2 = 5163.622;
    unsigned Densidade2 = (float) Populacao2 / Area2;
    float Percapita2 = (float) PIB2 / Populacao2;         
    float SuperPoder2 = (float) Populacao2 + Turismo2 + Area2 + PIB2 + Densidade2 + Percapita2;

    printf("Populacao1 > Populacao2: %d - CARTA A01 VENDEU\n", Populacao1 > Populacao2);
    printf("Turismo1 < Turismo2: %d - CARTA B01 VENCEU\n", Turismo1 < Turismo2);
    printf("Area1 >= Area2: %u - CARTA A01 VENCEU\n", Area1 >= Area2);
    printf("PIB1 <= PIB: %u - CARTA B01 VENCEU\n", PIB1 <= PIB2);
    printf("Densidade1 == Densidade2: %u - CARTA B02 VENCEU\n", Densidade1 == Densidade2);
    printf("Percapita1 != Percapita2: %u - CARTA A02 VENCEU\n", Percapita1 != Percapita2);
    printf("SuperPoder1 > SuperPoder2: %d - CARTA A01 VENCEU\n", SuperPoder1 > SuperPoder2);

    return 0;
    

}
