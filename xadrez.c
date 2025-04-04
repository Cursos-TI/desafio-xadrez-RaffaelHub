#include <stdio.h>


// Função para imprimir um separador visual na tela
void separador() 
{
    printf("--------------------------------------------------\n");
    printf("//////////////////////////////////////////////////\n");
    printf("--------------------------------------------------\n");
}

// Função para simular o movimento da torre
// A torre anda em linha reta: frente, trás, esquerda ou direita
void torre(int casa,int direcao) // Código de movimento da torre.
{
    if ( casa > 0) // Verifica se ainda há casas para percorrer
    {
        torre (casa - 1, direcao); // Chamada recursiva para simular o movimento contínuo da peça

        switch (direcao) // Define a direção com base no valor informado
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


// Função para simular o movimento do bispo
// O bispo se move apenas em diagonais
void bispo(int casa,int direcao)
{

    switch(direcao) // Usa switch para lidar com as quatro diagonais possíveis
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


// Função para simular o movimento da rainha
// A rainha se move em todas as direções
void rainha(int casa ,int direcao)
{
    if (casa > 0) // verifica se tem casas a correr
    {
    
        rainha( casa - 1, direcao); // decrementação continua

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


// Função para simular o movimento do cavalo
// O cavalo se move em 'L'
void cavalo(int casa, int direcao)
{   

    

        switch(direcao) // Uso de switch por conta de multiplas escolhas
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
    // Declaração de váriaveis das funções acima e inicializações
    int opcao_menu,quantidade = 5,quantidade_rainha = 8,quantidade_cavalo = 3,comeco_fim = 0 ;
    
    // uso do do-while para uma repetição boa e limpa
    do {
        printf("***Bem vindo!***\n"); // Apresentação
        printf("Vamos simular os movimentos das peças de xadrez!\n");
        printf("Aperte qualquer tecla e de enter para iniciar!\n");
        getchar();

        separador(); // função visual das linhas

        printf("***MENU***\n"); // Menu
        printf("1. ♜-Torre\n"); // opção torre
        printf("2. ♝-Bispo\n"); // opção bispo
        printf("3. ♛-Rainha\n"); // opção rainha
        printf("4. ♞-Cavalo\n"); // opção cavalo
        printf("Selecione uma opção: ");
        scanf("%d", &opcao_menu); // armazenando o valor

        separador(); // função visual das linhas

        switch(opcao_menu) // uso de switch por conta de multiplas escolhas
        {
        case 1: // bloco de código da torre, aqui vocẽ vai selecionar o movimento dela
            printf("Você escolheu a Torre!\n");
            printf("A torre vai se movimentar 5 casas, mas precisamos saber o lado.\n");
            printf("1. Para frente\n");
            printf("2. Para direita\n");
            printf("3. para a esquerda\n");
            printf("4. para trás\n");
            printf("Escolha o movimento para ela: ");
            scanf("%d", &opcao_menu);
            separador(); // função visual das linhas
            torre(quantidade, opcao_menu);
            separador(); // função visual das linhas
            break; // encerra o bloco

        case 2: // o bloco de código do bispo, aqui você vai selecionar o movimento dele
            printf("Você escolheu o Bispo!\n");
            printf("O bispo vai se movimentar 5 casas no tabuleiro, mas precisamos saber a direção.\n");
            printf("1. Diagonal direita - para cima\n");
            printf("2. Diagonal esquerda - para cima\n");
            printf("3. Diagonal direita - para baixo\n");
            printf("4. Diagonal esquerda - para baixo\n");
            printf("Escolha o movimento para ela: ");
            scanf("%d", &opcao_menu);
            separador(); // funçãp visual das linhas
            bispo(quantidade, opcao_menu);
            separador(); // função visual das linhas
            break; // encerra bloco

        case 3: // bloco de código da rainha, aqui você vai selecionar os movimentos dela
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
            separador(); // função visual das linhas
            rainha(quantidade_rainha, opcao_menu);
            separador(); // função visual das linhas
            break; // encerra bloco

        case 4: // bloco de codigo do cavalo, aqui você vai selecionar os movimentos dele
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
            separador(); // função visual das linhas
            cavalo(quantidade_cavalo, opcao_menu);
            separador(); // função visual das linhas
            break; // encerra bloco
            default: // esse bloco é caso o usuario digite um valor inesperado
            {
                printf("Valor inválido\n");
                break; // encerra o bloco
            }
        }
        // parte em que você decide se continua ou não jogando
        printf("Deseja jogar novamente? Digite 1 Para sim | 0 para o programa parar: ");
        scanf("%d", &comeco_fim);
        separador(); // função visual das linhas
            
        
    }while( comeco_fim == 1); // while, se receber 1 ele reinicia o code
    
}