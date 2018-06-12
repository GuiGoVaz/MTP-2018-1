#include <stdio.h>
#include <stdlib.h>

int main()
{
    char num[256];
    int i=0,cont=1,estado=0;
    printf("Digite o numero na forma binaria: \n");
    scanf("%s", num);
    getchar();
    while(num[i]!='\0'){
    if(estado==0 &&num[i]=='0') {estado=0;i++;continue;}
    if(estado==0 &&num[i]=='1') {estado=1;i++;continue;}
    if(estado==1 &&num[i]=='0') {estado=2;i++;continue;}
    if(estado==1 &&num[i]=='1') {estado=0;i++;continue;}
    if(estado==2 &&num[i]=='0') {estado=1;i++;continue;}
    if(estado==2 &&num[i]=='1') {estado=2;i++;continue;}}
    i=0;
    printf("%d; ",estado);
    while (num[i]!='\0'){
        printf("%c",num[i]);
        i++;
    }
    if(estado==0)printf("; e multiplo de 3");
    else printf("; nao e");

    return 0;
}
