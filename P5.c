//Guilherme Gomes Vaz de Souza 11711ECP009
#include <stdio.h>


int main()
{
    int opc=3, i=0,cont=0,exit=0,cod[64];
    char ch;
    char msg[256];
    int *ps;
    char *pc;
    while(i<256){
        msg[i]='\0';
        i++;
    }
    i=0;
    printf("1.Codificar\n2.Decodificar\n");
    scanf("%d",&opc);
    getchar();
    while(opc>0){
    if(opc==1){
        printf("\nDigite sua mensagem :");
        scanf("%s",msg);
        getchar();
        ps=(int *)msg;
        while(msg[i]!='\0'){

            cod[i]= ps[i];
            i++;

        }
        i=0;
        while(msg[i+4]!='\0'){
            printf("%d, ",cod[i]);
            i++;
        }
    }
    if(opc==2){
        printf("\nDigite seu codigo : ");
        do{
            scanf("%d", &cod[i]);
            getchar();
            i++;

            ch=fgetc(stdin);
            if(ch==10)
                break;

        }while (cod[i-1]);
        pc=(char*)cod;


            printf("%s", pc );





    }
    printf("\n\nPressione 0 para sair, 1 ou 2 para codificar ou decodificar: ");
    scanf("%d",&opc);
    getchar();
    }
    return 0;
}
