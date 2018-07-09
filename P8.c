//Guilherme Gomes Vaz de Souza 11711ECP009
#include <stdio.h>
#include <stdlib.h>

void gera_numeros (float *vetor,int tam){


    int i;
    float num;
    for(i=0;i<tam;i++){
        vetor[i]=(float) rand()/(float) RAND_MAX + 0.5f;


    }
}


float soma (float *inicio_vetor, float *fim_vetor){
    float s=0;
    while(inicio_vetor<fim_vetor){
        s=s+ *inicio_vetor;
        inicio_vetor++;
    }
    return (s);
}

float produto (float *inicio_vetor, float *fim_vetor ){
    float p=1;
    while(inicio_vetor<fim_vetor){
        p*= *inicio_vetor;
        inicio_vetor++;

    }
    return (p);

}



int main()
{
    srand(123456);
    float vetor[100];
    int opc;
    float*ptr =vetor;
    gera_numeros(ptr,100);
    printf("Digite 1 para Somatorio ou 2 para Produtorio: ");
    scanf("%d",&opc);
    getchar();
    if(opc==1){
        printf("\nSoma = %f",soma(ptr,ptr+100));
    }
    if(opc==2){
        printf("\nProdutorio = %f",produto(ptr,ptr+100));
    }

    return 0;
}
