#include <stdio.h>

int main() {
    int opcao, B = 0, R = 0, direcao; //definição de variáveis 

    //menu interativo para escolher qual peça movimentar
    printf("Selecione uma peça para movimentar:\n");
    printf("1. Torre.\n");
    printf("2. Bispo.\n");
    printf("3. Rainha\n");
    printf("4. Cavalo. \n");
    scanf("%d", &opcao);

    //opções do menu e suas intruções para mostrar o movimento de cada peça
    switch (opcao)
    {
    case 1 :
        //adição de menu adicional para seleção de qual direção deseja movimentar a peça TORRE
        printf("Você escolheu mover a Torre!\n");
        printf("Selecione a direção: \n");
       
        printf("1. Direita\n");
        printf("2. Esquerda\n");
        printf("3. Cima.\n");
        printf("4. Baixo.\n");
        scanf("%d", &direcao);
        
        for (int T = 0; T < 5; T++)
        {
           switch (direcao){
           case 1: printf("Direita.\n"); break;
           case 2: printf("Esquerda.\n"); break;
           case 3: printf("Cima.\n"); break;
           case 4: printf("Baixo.\n"); break;
            
           default: printf ("Direção inválida!\n"); break;          
           }
        }
        break;
        
    case 2: 
    //adição de menu adicional para seleção de qual direção deseja movimentar a peça BISPO
        printf("Você escolheu o Bispo!\n");
        printf("Selecione a direção: \n");
       
        printf("1. Direita Cima\n");
        printf("2. Direita Baixo\n");
        printf("3. Esquerda Cima.\n");
        printf("4. Esquerda Baixo.\n");
        scanf("%d", &direcao);
            
        do{
            switch (direcao)
            {
            case 1:printf("Direita Cima\n"); break;
            case 2:printf("Direita Baixo\n"); break;
            case 3:printf("Esquerda Cima.\n"); break;
            case 4:printf("Esquerda Baixo.\n"); break;
            default: printf("Opção inválida!\n"); break;
                 }
          B ++;
             } while (B < 5);
        break;
        
                 
    
    case 3:
    //adição de menu adicional para seleção de qual direção deseja movimentar a peça RAINHA
        printf("Você escolheu A Rainha!\n");
        printf("Selecione a direção: \n");
       
        printf("1. Direita Cima\n");
        printf("2. Direita Baixo\n");
        printf("3. Esquerda Cima.\n");
        printf("4. Esquerda Baixo.\n");
        printf("5. Direita \n");
        printf("6. Esquerda\n");
        printf("7. Cima.\n");
        printf("8. Baixo.\n");

        scanf("%d", &direcao);
       
        while (R < 8){
           switch (direcao)
           {
           case 1:printf("Direita Cima\n"); break;
           case 2:printf("Direita Baixo\n"); break;
           case 3:printf("Esquerda Cima.\n"); break;
           case 4:printf("Esquerda Baixo.\n"); break;
           case 5:printf("Direita \n"); break;
           case 6:printf("Esquerda\n"); break;
           case 7:printf("Cima.\n"); break;
           case 8:printf("Baixo.\n"); break;
           default: printf("Opção inválida!\n"); break;
           }
        R++;
       } break;

    case 4:
        printf("Você escolheu O Cavalo!\n");
        printf("Selecione a direção: \n");
       
        printf("1. Direita Cima\n");
        printf("2. Direita Baixo\n");
        printf("3. Esquerda Cima.\n");
        printf("4. Esquerda Baixo.\n");
        printf("5. Cima Direita \n");
        printf("6. Cima Esquerda\n");
        printf("7. Baixo Direita.\n");
        printf("8. Baixo Esquerda.\n");

        scanf("%d", &direcao);
        
       
        int movcavalo = 1;
        
        while (movcavalo--)
        {
            for (int c = 0; c < 2; c++)
            {
                switch (direcao)
                {
            case 1: printf("Direita\n"); break;
            case 2: printf("Direita\n"); break;
            case 3: printf("Esquerda.\n"); break; 
            case 4: printf("Esquerda.\n"); break;
            case 5: printf("Cima \n"); break;
            case 6: printf("Cima\n"); break;
            case 7: printf("Baixo.\n"); break;
            case 8: printf("Baixo.\n"); break;
            default: printf("Opção inválida.\n");break;
                
               }
            }
               switch (direcao)
                {
            case 1: printf("Cima\n"); break;
            case 2: printf("Baixo\n"); break;
            case 3: printf("Cima.\n"); break; 
            case 4: printf("Baixo.\n"); break;
            case 5: printf("Direita \n"); break;
            case 6: printf("Esquerda\n"); break;
            case 7: printf("Direita.\n"); break;
            case 8: printf("Esquerda.\n"); break;
            default: printf("Opção inválida.\n");break; 
         }
     break;

         default:
            printf("Opção inválida.\n");
        
            break;
        }
    return 0;
    }}
