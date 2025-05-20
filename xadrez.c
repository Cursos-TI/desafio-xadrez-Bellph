#include <stdio.h>

int main() {
    int opcao, B = 0, R = 0; //definição de variáveis 

    //menu interativo para escolher qual peça movimentar
    printf("Selecione uma peça para movimentar:\n");
    printf("1. Torre.\n");
    printf("2. Bispo.\n");
    printf("3. Rainha\n");
    scanf("%d", &opcao);

    //opções do menu e suas intruções para mostrar o movimento de cada peça
    switch (opcao)
    {
    case 1 :
        for (int T = 0; T < 5 ; T++)
        {
            printf("Direita.\n");
        }
        
        break;

    case 2: 
       do
       {
        printf("Direita, Cima\n");
        B ++;
       } while (B < 5);
       
         break;
    
    case 3:
       while (R < 5)
       {
        printf ("Esquerda.\n");
        R++;
       }
       
        break;

    default:
       printf("Opção inválida.\n");
        break;
    }
    
    return 0;
}
