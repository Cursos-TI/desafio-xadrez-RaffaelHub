#include <stdio.h>


int main() {
    int opcao,i, movimento_cavalo = 1; // declarando as variaveis

    // Menu do jogo xadres, multiplas escolhas de peças
    printf("Selecione uma das peças de xadrez, para simular o movimento!\n");
    printf("1. Torre\n"); // opção torre
    printf("2. Bispo\n"); // opção bispo
    printf("3. Rainha\n"); // opção rainha
    printf("4. Cavalo\n");
    printf("Digite: ");
    scanf("%d", &opcao);
    printf("\n"); // usando quebra de linha para deixar o código mais bonito
    switch(opcao) // uso do switch, já que tem uma variavel em comun "opção"
    {
    case 1: // movimento da torre, 5 movimentos para a direita, usando for
        printf("O movimento da torre > > > > >\n");
        for (int i = 1; i <= 5; i++)
        {
            printf("Direita!\n");
        }
        break;
    case 2: // movimento do bispo, 5 movimento na diagonal, na direita, usando while
    printf("O movimento do bispo ^> ^> ^> ^> ^>\n");
        i = 1;
        while(i <= 5)
        {
            printf("Cima, Direita!\n");
            
            i++;

        }
        break;
    
        case 3: // movimento da rainha, 8 movimentos na esquerda, usando do-while
        printf("O movimento da rainha < < < < < < < <\n");
        i = 1;
        do
        {

            printf("Esquerda!\n");
            i++;

        }while(i <= 8);
        
        break;
        case 4: // movimento do cavalo, usando loops aninhados
        printf("O movimento do Cavalo é\n");


        while(movimento_cavalo--)
        {
            for (int i = 1; i <=2; i++)
            {
                printf("Baixo\n");
            }
            printf("Esquerda\n");
        }
        

            break;
    default: // default, para caso o usuario digitar um valor fora dos parametros exigido no menu
        printf("Valor inválido\n");
        break;

    }
    return 0;
}
