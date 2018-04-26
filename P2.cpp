#include <stdio.h>


int main (void) {
    int opcao,valor;
    char b[200];
    printf("1: Binario para decimal\n2: Binario" 
    " para hexadecimal\n3: Hexadecimal para decimal" 
    "\n4: Hexadecimal para binario\n5: Decimal para " 
    "binario\n6: Decimal para hexadecimal\n7: Octal " 
    "para decimal\n8: Decimal para octal");
    scanf("%d",&opcao);
    getchar();
    if(opcao==1){
        printf("\nInforme o valor: ");
        scanf("%s",&b);
        getchar();
        itoa(b,valor,10);
        printf("\n%s em decimal e' %d",b,valor);
    }
    if(opcao==2){
        printf("\nInforme o valor: ");
        scanf("%s",&b);
        getchar();
        itoa(b,valor,10);
        printf("\n%s em hexadecimal e' %x",b,valor);
    }
    if(opcao==3){
        printf("\nInforme o valor: ");
        scanf("%x",&valor);
        getchar();
        printf("\n%x em decimal e' %d",valor,valor);
    }
    if(opcao==4){
        printf("\nInforme o valor: ");
        scanf("%d",&valor);
        getchar();
        itoa(valor,b,2);
        printf("\n%x em binario e' %s",valor,b);
    }
    if(opcao==5){
        printf("\nInforme o valor: ");
        scanf("%d",&valor);
        getchar();
        itoa(valor,b,2);
        printf("\n%d em binario e' %s",valor,b);
    }
    if(opcao==6){
        printf("\nInforme o valor: ");
        scanf("%d",&valor);
        getchar();
        printf("\n%d em hexadecimal e' %x",valor,valor);
    }
    if(opcao==7){
        printf("\nInforme o valor: ");
        scanf("%o",&valor);
        getchar();
        printf("\n%o em decimal e' %d",valor,valor);
    }
    if(opcao==8){
        printf("\nInforme o valor: ");
        scanf("%d",&valor);
        getchar();
        printf("\n%d em octal e' %o",valor,valor);
    }
    
    
    return 0;
}