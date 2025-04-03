#include <stdio.h>

void separador()
{
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
            printf("Baixo-\n");
            for (int j = 1; j <= 1; j++)
            {
                printf("Esquerda\n");
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
        for (int i = 0, j = 2; i + j  <=3; i++, j--)
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
        }
    
    
}

int main()
{
    int opcao_menu,quantidade = 5,quantidade_rainha = 8,quantidade_cavalo = 3;

    printf("Bem vindo!\n");
    printf("Vamos simular os movimentos das peças de xadrez\n");
    printf("Aperte qualquer tecla para iniciar!\n");
    getchar();

    separador();

    printf("MENU\n");
    printf("1. Torre\n");
    printf("2. Bispo\n");
    printf("3. Rainha\n");
    printf("4. Cavalo\n");
    printf("Selecione uma opção: ");
    scanf("%d", &opcao_menu);

    separador();

    switch(opcao_menu)
    {
    case 1:
        printf("Você escolheu a Torre!\n");
        printf("Ela vai andar 5 casa no tabuleiro, mas precisamos saber o lado.\n");
        printf("1. Para frente\n");
        printf("2. Para direita\n");
        printf("3. para a esquerda\n");
        printf("4. para trás\n");
        printf("Escolha o movimento para ela: ");
        scanf("%d", &opcao_menu);
        torre(quantidade, opcao_menu);


        break;
    case 2:
        printf("Você escolheu o Bispo!\n");
        printf("Ele vai andar 5 casas no tabuleiro, mas precisamos saber a direção.\n");
        printf("1. Diagonal direita - para cima\n");
        printf("2. Diagonal esquerda - para cima\n");
        printf("3. Diagonal direita - para baixo\n");
        printf("4. Diagonal esquerda - para baixo\n");
        printf("Escolha o movimento para ela: ");
        scanf("%d", &opcao_menu);
        bispo(quantidade, opcao_menu);
        
        break;
    case 3:
        printf("Você escolheu a Rainha!\n");
        printf("Ela anda em muitas direções, escolha uma!\n");
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
        rainha(quantidade_rainha, opcao_menu);
        break;
    case 4:
        printf("Você escolheu o cavalo!\n");
        printf("Ele se movimenta em 'L'\n");
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
        cavalo(quantidade_cavalo, opcao_menu);
        break;
    }

    return 0;
    
}