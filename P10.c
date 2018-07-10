//Guilherme Gomes Vaz de Souza 11711ECP009
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{   int npro=0;
int tam;
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
   typedef struct Produto {
        int existe;
        char nome[64];
        float preco;
        struct Dimensoes dimensoes;
    }Produto;
    Produto *proptr;
    proptr=(Produto*)calloc(1,sizeof(Produto));

    while (opc!=0){


        printf("Produtos em memoria: %d\n1.Consultar\n2.Cadastrar novo\n3.Carregar de arquivo para memoria (sobrescreve memoria)\n4.Salvar memoria em arquivo (sobrescreve arquivo)\n0.Encerra ",npro);
        scanf("%d",&opc);
        getchar();
        if (opc==1){
            if(npro==0){

                printf("\nNao ha produtos cadastrados\n\n");
            }
            else{

                    printf("\n0. Voltar\n");

                i=0;
                while(i<npro){
                    printf("%d. %s\n",i+1,(proptr+i)->nome);
                    i++;
                }
                scanf("%d",&opcc);
                getchar();

                if(opcc==0)
                    printf("\n\n");
                else {
                        opcc--;
                    printf("\nNome do produto: %s",(proptr+opcc)->nome);
                    printf("\nPreco do produto: %.2f reais",(proptr+opcc)->preco);
                    printf("\nLargura do produto: %f metros",(proptr+opcc)->dimensoes.largura);
                    printf("\nProfundidade do produto: %f metros",(proptr+opcc)->dimensoes.profundidade);
                    printf("\nAltura do produto: %f metros\n",(proptr+opcc)->dimensoes.altura);
                    printf("\n\n");
                opcc++;
                }

            }


        }
        else if(opc==2){
            npro++;
            proptr=realloc(proptr,sizeof(Produto)*npro);

            npro--;
            printf("\nQual o nome do produto? ");
            scanf("%s",(proptr+npro)->nome);
            getchar();
            printf("\nQual o preco do produto? ");
            scanf("%f",&(proptr+npro)->preco);
            getchar();
            printf("\nQual a largura do produto? ");
            scanf("%f",&(proptr+npro)->dimensoes.largura);
            getchar();
            printf("\nQual a profundidade do produto? ");
            scanf("%f",&(proptr+npro)->dimensoes.profundidade);
            getchar();
            printf("\nQual a altura do produto? ");
            scanf("%f",&(proptr+npro)->dimensoes.altura);
            getchar();
            npro++;

            printf("\nProduto cadastrado com sucesso!");
            printf("\n\n");
        }

       else if(opc==3){
            printf("\nQual o nome do arquivo? ");
            scanf("%s", nome);
            getchar();
            arq=fopen(nome,"rb");
            fseek(arq,0,SEEK_END);
            tam=ftell(arq);
            fseek(arq,0,SEEK_SET);
            proptr=(Produto*)realloc(proptr,sizeof(Produto)*tam);
            fread(proptr,sizeof(Produto),tam,arq);
            npro=tam;
            fclose (arq);
        }
       else if(opc==4){
            printf("Digite o nome do arquivo a ser criado: ");
            scanf("%s", nome);
            getchar();
            arq=fopen(nome,"wb");
            fwrite(proptr,sizeof(Produto),npro,arq);
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
    free(proptr);
    return 0;
}
