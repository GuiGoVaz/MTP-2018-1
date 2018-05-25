//Guilherme Gomes Vaz de Souza 11711ECP009
#include <stdio.h>

int soma(int *x,int qtd){
    int soma=0,i=0;
    while(i<qtd){
        soma= soma+ *x;
        x++;
        i++;
}
return soma;}
float media(int soma, int qtd){

return ((float) soma/qtd);
 };

int main()
{
    int i=0,qtd;
    int vet[20]={};
    int *pont=vet;
    float result;
    printf("Digite uma quantidade de 5 a 20 numeros inteiros: ");
    scanf("%d",&qtd);
    getchar();
    printf("\nAgora digite os numeros inteiros: ");
    while(i<qtd){
        scanf("%d",&vet[i]);
        getchar();
        i++;
    }
    result=media(soma(pont,qtd),qtd);
    printf("\nmedia=%.1f",result);

    return 0;
}
