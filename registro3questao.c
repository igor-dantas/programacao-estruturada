#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define TAM 2
struct estoque
{
    char nome_produto[30];
    char setor[30];
    int qtd_produtos;
    float preco_prod;
};
struct estoque estoque[TAM];


int cadastro(struct estoque estoque[TAM];)
{
    for(int i = 0; i<=TAM; i++)
    {
        printf("Qual o nome do produto?\n:");
        setbuf(stdin, NULL);
        fgets(estoque[i].nome_produto,30,stdin);
        printf("\n");
        printf("Qual o setor do produto?\n:");
        setbuf(stdin, NULL);
        fgets(estoque[i].setor, 30, stdin);
        printf("\n");
        printf("Qual a quantidade desse produto?\n:");
        setbuf(stdin, NULL);
        scanf("%i", &estoque[i].qtd_produtos);
        printf("\n");
        printf("Qual o preco do produto?\nR$");
        setbuf(stdin, NULL);
        scanf("%f", &estoque[i].preco_prod);
    }
}

int setor(struct estoque estoque[TAM];)
{
    char consulta[30];
    int cont = 0;
    printf("Qual o setor de consulta?\n");
    setbuf(stdin, NULL);
    fgets(consulta, 30, stdin);
    for(int i = 0; i<=TAM; i++)
    {
        if(strcmp(consulta, estoque[i].setor)==0)
        {
            cont++;
        }
    }
    printf("\n");
    printf("Neste setor tem: %i produtos", cont);
}

int investimento(struct estoque estoque[TAM];)
{
    float investimento = 0.0;
    for(int i = 0; i<=30; i++)
    {
        investimento = investimento + estoque[i].preco_prod;
    }
    printf("o total de capital investido eh R$ %.2f", investimento);
}


int main()
{
    int op, retorno;
    do
    {
        inicio:
        printf(">>>>>>>>>>MENU<<<<<<<<<<");
        printf("\n1-cadastro de produtos.");
        printf("\n2-consulta de produtos por setor");
        printf("\n3-consulta de capital investido no setor");
        printf("\n4-sair do programa");
        printf("\n\n");
        printf("Qual a opcao desejada?\n:");
        scanf("%i", &op);
        switch (op)
        {
        case 1:
            system("cls");
            cadastro();
            printf("\nVoce deseja voltar para o menu inicial?");
            printf("1-sim 4-nao");
            scanf("%i", &retorno);
            break;
        case 2:
            system("cls");
            setor();
            printf("\nVoce deseja voltar para o menu inicial?");
            printf("1-sim 4-nao");
            scanf("%i", &retorno);
            break;
        case 3:
            system("cls");
            investimento();
            printf("\nVoce deseja voltar para o menu inicial?");
            printf("1-sim 4-nao");
            scanf("%i", &retorno);
            break;
        case 4:
            printf("saindo do programa.");
            printf("obrigado!");
            break;
        }
    } while (op != 4);
    return 0;
}

