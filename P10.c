//Guilherme Gomes Vaz de Souza 11711ECP009
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{   int npro=0;
FILE *arq;
char nome[30];
    int opc=1;
    int opcc;
    int i=0;

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
    struct Produto *ptr;

    while (opc!=0){


        printf("Produtos em memoria: %d\n1.Consultar\n2.Cadastrar novo\n3.Carregar de arquivo para memoria (sobrescreve memoria)\n4.Salvar memoria em arquivo (sobrescreve arquivo)\n0.Encerra ",npro);
        scanf("%d",&opc);
        getchar();
        if (opc==1){
            if(npro==0){
                printf("\nNao ha produtos cadastrados\n\n");
            }
            else{
                    printf("\n0. Voltar");
                while(i<npro){
                    printf("%d. %s",i+1,(ptr+i)->nome);
                    i++;
                }
                scanf("%d",&opcc);
                getchar();
                if(opcc==0)
                    printf("\n\n");
                else {
                    printf("\nNome do produto: %s",(ptr+opcc)->nome);
                    printf("\nPreco do produto: %.2f reais",(ptr+opcc)->preco);
                    printf("\nLargura do produto: %f metros",(ptr+opcc)->dimensoes.largura);
                    printf("\nProfundidade do produto: %f metros",(ptr+opcc)->dimensoes.profundidade);
                    printf("\nAltura do produto: %f metros\n",(ptr+opcc)->dimensoes.altura);

                }

            }


        }
        else if(opc==2){
            npro++;
            ptr=realloc(ptr,sizeof(struct Produto)*npro);


            printf("\nQual o nome do produto? ");
            scanf("%s",(ptr+npro)->nome);
            getchar();
            printf("\nQual o preco do produto? ");
            scanf("%f",(ptr+npro)->preco);
            getchar();
            printf("\nQual a largura do produto? ");
            scanf("%f",(ptr+npro)->dimensoes.largura);
            getchar();
            printf("\nQual a profundidade do produto? ");
            scanf("%f",(ptr+npro)->dimensoes.profundidade);
            getchar();
            printf("\nQual a altura do produto? ");
            scanf("%f",(ptr+npro)->dimensoes.altura);
            getchar();
            printf("\n\n");
        }

        if(opc==3){
            printf("\nQual o nome do arquivo? ");
            scanf("%s", nome);
            getchar();
            arq=fopen(nome,"rb");
            fclose (arq);
        }
        if(opc==4){
            printf("Digite o nome do arquivo a ser criado: ");
            scanf("%s", nome);
            getchar();
            arq=fopen(nome,"wb");
            fclose(arq);
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
    free(ptr);
    return 0;
}
