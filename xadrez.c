#include <stdio.h>

void separador()
{
    printf("--------------------------------------------------\n");
    printf("//////////////////////////////////////////////////\n");
    printf("--------------------------------------------------\n");
}

void torre(int casa,int direcao)
{
    if ( casa > 0)
    {
        torre (casa - 1, direcao);

        switch (direcao)
        {
        case 1:
            printf("Frente\n");
            break;
        case 2:
            printf("Direita\n");
            break;
        case 3:
            printf("Esquerda\n");
            break;
        case 4:
            printf("Trás\n");
            break;
        
        default:
            printf("Valor inválido\n");
            break;
        }
        
    }
}

void bispo(int casa,int direcao)
{

    switch(direcao)
    {
    case 1:

        for(int i = 1; i <= 5; i++)
        {
            printf("Cima-");
            for(int j = 1; j <= 1; j++)
            {
                printf("Direita");
            }
            printf("\n");
        }
        break;

    case 2:
        for (int i =1; i <= 5; i++)
        {
            printf("Cima-");
            for (int j = 1; j <= 1; j++)
            {
                printf("Esquerda");
            }
            printf("\n");
        }
        break;

    case 3:
        for (int i = 1; i <= 5; i++)
        {
            printf("Baixo-");
            for (int j = 1; j <= 1; j++)
            {
                printf("Direita");
            }
            printf("\n");
        }
        break;

    case 4:
        for (int i =1; i <= 5; i++)
        {
            printf("Baixo-");
            for (int j = 1; j <= 1; j++)
            {
                printf("Esquerda");
            }
            printf("\n");   
        }
        
        break;
        
    }


    
}

void rainha(int casa ,int direcao)
{
    if (casa > 0)
    {
    
        rainha( casa - 1, direcao);

        switch(direcao)
        {
        case 1:
            printf("Cima\n");
            break;
        case 2:
            printf("Cima-Direita\n");
            break;
        case 3:
            printf("Direita\n");
            break;
        case 4:
            printf("Baixo-Direita\n");
            break;
        case 5:
            printf("Baixo\n");
            break;
        case 6:
            printf("Baixo-Esquerda\n");
            break;
        case 7:
            printf("Esquerda\n");
            break;
        case 8:
            printf("Cima-Esquerda\n");
            break;
       }
    }
}

void cavalo(int casa, int direcao)
{   

    

        switch(direcao)
        {
        case 1:
        for (int i = 0, j = 2; i < 3; i++, j--)
        {
            if (i < 2)
            {
                printf("Cima\n");
            }
            else if ( j == 0)
            {
                printf("Direita\n");
            }
        }    
            break;
        case 2:
            for (int i = 0, j = 2; i < 3; i++, j--)
            {
                if (i < 2)
                {
                    printf("Direita\n");
                }
                else if (j == 0)
                {
                    printf("Cima\n");
                }
            }
            break;
        case 3:
            for (int i = 0, j = 2; i < 3; i++, j--)
            {
                if (i < 2)
                {
                    printf("Direita\n");

                }
                else if (j == 0)
                {
                    printf("Baixo\n");
                }
            }
            break;
        case 4:
            for (int i = 0, j = 2; i < 3; i++, j--)
            {
                if (i < 2)
                {
                    printf("Baixo\n");
                }
                else if (j == 0)
                {
                    printf("Direita\n");
                }
            }
            break;
        case 5:
            for (int i = 0, j = 2; i < 3; i++, j--)
            {
                if (i < 2)
                {
                    printf("Baixo\n");
                }
                else if (j == 0)
                {
                    printf("Esquerda\n");
                }
            }
            break;
        case 6:
            for (int i = 0, j = 2; i < 3; i++, j--)
            {
                if (i < 2)
                {
                    printf("Esquerda\n");
                }
                else if(j == 0)
                {
                    printf("Baixo\n");
                }
            }
            break;
        case 7:
            for (int i = 0, j = 2; i < 3; i++, j--)
            {
                if (i < 2)
                {
                    printf("Esquerda\n");
                }
                else if(j == 0)
                {
                    printf("Cima\n");
                }
            }
            break;
        case 8:
            for (int i = 0, j = 2; i < 3; i++, j--)
            {
                if (i < 2)
                {
                    printf("Cima\n");
                }
                else if (j == 0)
                {
                printf("Esquerda\n");
                
                   
                }
            }
            break;
        
        }
    
    
}

int main()
{

    int opcao_menu,quantidade = 5,quantidade_rainha = 8,quantidade_cavalo = 3,comeco_fim = 0 ;
    
    do {
        printf("***Bem vindo!***\n");
        printf("Vamos simular os movimentos das peças de xadrez!\n");
        printf("Aperte qualquer tecla e de enter para iniciar!\n");
        getchar();

        separador();

        printf("***MENU***\n");
        printf("1. ♜-Torre\n");
        printf("2. ♝-Bispo\n");
        printf("3. ♛-Rainha\n");
        printf("4. ♞-Cavalo\n");
        printf("Selecione uma opção: ");
        scanf("%d", &opcao_menu);

        separador();

        switch(opcao_menu)
        {
        case 1:
            printf("Você escolheu a Torre!\n");
            printf("A torre vai se movimentar 5 casas, mas precisamos saber o lado.\n");
            printf("1. Para frente\n");
            printf("2. Para direita\n");
            printf("3. para a esquerda\n");
            printf("4. para trás\n");
            printf("Escolha o movimento para ela: ");
            scanf("%d", &opcao_menu);
            separador();
            torre(quantidade, opcao_menu);
            separador();


            break;
        case 2:
            printf("Você escolheu o Bispo!\n");
            printf("O bispo vai se movimentar 5 casas no tabuleiro, mas precisamos saber a direção.\n");
            printf("1. Diagonal direita - para cima\n");
            printf("2. Diagonal esquerda - para cima\n");
            printf("3. Diagonal direita - para baixo\n");
            printf("4. Diagonal esquerda - para baixo\n");
            printf("Escolha o movimento para ela: ");
            scanf("%d", &opcao_menu);
            separador();
            bispo(quantidade, opcao_menu);
            separador();
            
            break;
        case 3:
            printf("Você escolheu a Rainha!\n");
            printf("A rainha vai se movimentar 8 casas, escolha uma direção!\n");
            printf("1. Cima\n");
            printf("2. Diagonal direita - para cima\n");
            printf("3. Direita\n");
            printf("4. Diagonal direita - para baixo\n");
            printf("5. Baixo\n");
            printf("6. Diagonal Esquerda - para baixo\n");
            printf("7. Esquerda\n");
            printf("8. Diagonal Esquerda - para cima\n");
            printf("Escolha uma opção: ");
            scanf("%d", &opcao_menu);
            separador();
            rainha(quantidade_rainha, opcao_menu);
            separador();
            break;
        case 4:
            printf("Você escolheu o cavalo!\n");
            printf("O cavalo se movimenta em 'L', Escolha a direção!\n");
            printf("1. 'L' Cima-Direita\n");
            printf("2. 'L' Esquerda-Cima\n");
            printf("3. 'L' Esquerda-Baixo\n");
            printf("4. 'L' Baixo-Direita\n");
            printf("5. 'L' Baixo-Esquerda\n");
            printf("6. 'L' Esquerda-baixo\n");
            printf("7. 'L' Esquerda-Cima\n");
            printf("8. 'L' Cima-Esquerda\n");
            printf("Escolha uma opção: ");
            scanf("%d", &opcao_menu);
            separador();
            cavalo(quantidade_cavalo, opcao_menu);
            separador();
            break;
            default:
            {
                printf("Valor inválido\n");
                break;
            }
        }

        printf("Deseja jogar novamente? Digite 1 Para sim | 0 para o programa parar: ");
        scanf("%d", &comeco_fim);
        separador();
            
        
    }while( comeco_fim == 1);
    return 0;
}