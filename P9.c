//Guilherme Gomes Vaz de Souza 11711ECP009
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int opc=1;
    struct Dimensoes{
        float largura;
        float profundidade;
        float altura;
    };
    struct Produto {
        int existe;
        char nome[64];
        float preco;
        struct Dimensoes dimensoes;
    };

    struct Produto um,dois;
    um.existe=0;dois.existe=0;
    while (opc!=0){
        printf("Digite 1 - Cadastro, 2 - Consulta, 0 - Sair: ");
        scanf("%d",&opc);
        getchar();
        if (opc==1){
            printf("\nDeseja cadastrar produto 1 ou 2? ");
            scanf("%d",&opc);
            getchar();
            if(opc==1){
            um.existe=1;
            printf("\nQual o nome do produto? ");
            scanf("%s",um.nome);
            getchar();
            printf("\nQual o preco do produto? ");
            scanf("%f",&um.preco);
            getchar();
            printf("\nQual a largura do produto? ");
            scanf("%f",&um.dimensoes.largura);
            getchar();
            printf("\nQual a profundidade do produto? ");
            scanf("%f",&um.dimensoes.profundidade);
            getchar();
            printf("\nQual a altura do produto? ");
            scanf("%f",&um.dimensoes.altura);
            getchar();

            }
            if (opc==2){
            dois.existe=1;
            printf("\nQual o nome do produto? ");
            scanf("%s",dois.nome);
            getchar();
            printf("\nQual o preco do produto? ");
            scanf("%f",&dois.preco);
            getchar();
            printf("\nQual a largura do produto? ");
            scanf("%f",&dois.dimensoes.largura);
            getchar();
            printf("\nQual a profundidade do produto? ");
            scanf("%f",&dois.dimensoes.profundidade);
            getchar();
            printf("\nQual a altura do produto? ");
            scanf("%f",&dois.dimensoes.altura);
            getchar();
            }
        }
        else if (opc==2){
            printf("\nDeseja consultar produto 1 ou 2? ");
            scanf("%d",&opc);
            getchar();
            if(opc==1){
                if(um.existe==0){
                    printf("\nO produto nao existe!\n");
                }
                else{
                    printf("\nNome do produto: %s",um.nome);
                    printf("\nPreco do produto: %.2f reais",um.preco);
                    printf("\nLargura do produto: %f metros",um.dimensoes.largura);
                    printf("\nProfundidade do produto: %f metros",um.dimensoes.profundidade);
                    printf("\nAltura do produto: %f metros\n",um.dimensoes.altura);

                }
            }
            if (opc==2){
                if(dois.existe==0){
                    printf("\nO produto nao existe!\n");
                }
                else{
                    printf("\nNome do produto: %s",dois.nome);
                    printf("\nPreco do produto: %.2f reais",dois.preco);
                    printf("\nLargura do produto: %f metros",dois.dimensoes.largura);
                    printf("\nProfundidade do produto: %f metros",dois.dimensoes.profundidade);
                    printf("\nAltura do produto: %f metros\n",dois.dimensoes.altura);

                }
            }
        }



    }


   /* char *vetor=calloc(10,sizeof(char));
    char c=0;
    int n=0;
    while ((c=getchar())!='\n'){
        vetor[n]=c;
        n++;
        if((n%10)-9==0)
            vetor=realloc(vetor,n+10);
    }
    puts((char*) strupr(vetor));
    free(vetor); */
    return 0;
}
