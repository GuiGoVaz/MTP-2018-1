//Guilherme Gomes Vaz de Souza 11711ECP009
#include <stdio.h>




int main()
{
    printf("Digite uma sequencia: ");
    char  bits[256];
    int i=0,cum=0;
    scanf("%s",bits);
    getchar();
    while(bits[i]!='\0'){
        if(bits[i]>='0' && bits[i]<='9'){
            cum=cum*10+(bits[i]-'0');
        }
        i++;
    }
    printf("\nResultado: %d",cum);




    return 0;
    }

