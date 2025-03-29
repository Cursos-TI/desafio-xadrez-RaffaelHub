#include <stdio.h>


int main() {
    int opcao,i; // declarando as variaveis

    // Menu do jogo xadres, multiplas escolhas de peças
    printf("Selecione uma das peças de xadrez, para simular o movimento!\n");
    printf("1. Torre\n"); // opção torre
    printf("2. Bispo\n"); // opção bispo
    printf("3. Rainha\n"); // opção rainha
    printf("Digite: "); // imprime uma msg, para o usuario digitar a opção
    scanf("%d", &opcao); // armazenar o dado da opção

    printf("\n"); // usando quebra de linha para deixar o código mais bonito

    switch(opcao) // uso do switch, já que tem uma variavel em comun "opção"
    {
    case 1: // movimento da torre, 5 movimentos para a direita, usando for
        for (int i = 1; i <= 5; i++)
        {
            printf("Direita!\n");
        }
        break;
    case 2: // movimento do bispo, 5 movimento na diagonal, na direita, usando while
        i = 1;
        while(i <= 5)
        {
            printf("Cima, Direita!\n");
            
            i++;

        }
        break;
    
        case 3: // movimento da rainha, 8 movimentos na esquerda, usando do-while
        i = 1;
        do
        {

            printf("Esquerda!\n");
            i++;

        }while(i <= 8);
        
        break;
    default: // default, para caso o usuario digitar um valor fora dos parametros exigido no menu
        printf("Valor inválido\n");
        break;

    }
    return 0;
}
