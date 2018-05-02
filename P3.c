//Guilherme Gomes Vaz de Souza 11711ECP009
#include <stdio.h>


int main()
{
    int opc,num,num2,aux,aux2,neg=0,neg2=0,i=0,flag,flag2,pri,cont,cont2,resp,mult,j;
    int arg1=0,arg2=0;
    int barg1[32],barg2[32],bresp[32];
    int bin[32],bin2[32];
    printf("1. NOT\n2. AND\n3. OR\n4. XOR\n5. Right Shift\n6. Left Shift\n");
    scanf("%d",&opc);
    getchar();






    //--------------------------------------------------------------------------------
    if(opc==1){
    printf("\nDigite o numero: ");
    scanf("%d",&num);         //peguei o numero
    getchar();
    arg1=num;
    if(num<0){
        num=num*(-1);
        neg=1;               //vi se eh negativo
    }
    while(i<32){             //preenchi com zeros
        bin[i]=0;
        i++;
    }
i=0;
    while (num > 0 && i<31){
            bin[i]=num%2;
            num = num / 2;
            i++;
            }
    cont=i-1;               //preenchi invertidamente
    i=0;

    while(i<=cont/2){
        aux=bin[i];
        bin[i]=bin[cont-i];
        bin[cont-i]=aux;
        i++;
    }                      //corrigi a inversao
     i=0;
    while(i<=cont){
        bin[31-i]=bin[cont-i];
        bin[cont-i]=0;
        i++;
    }                      //levei oara o fim do vetor
    i=0;
    while(i<32){            //copiei o binario para outra variavel
        barg1[i]=bin[i];
        i++;
    }
                              //transformei em binario
    i=0;
    if(neg==1){
        while(i<32){
            if (bin[i]==0) bin[i]=1;
            else bin[i]=0;
            i++;
        }
        i=31;
        flag=1;
        while(flag==1){
            if(bin[i]==0){
                bin[i]=1;
                flag=0;
            }
            else{
                bin[i]=0;
                i--;
            }
        }}
        i=0;
    while(i<32){                 //copiei binario para outra variavel
        barg1[i]=bin[i];
        i++;
    }
                                       //transforma em negativo
    i=0;
     while(i<32){
            if (bin[i]==0)
                bin[i]=1;
            else
                bin[i]=0;
            i++;
        }
                                         //NOT
        i=0;
    while(i<32){
        bresp[i]=bin[i];
        i++;
    }                              //copiei binario p resposta
    if(bin[0]==1){ i=0;
     while(i<32){
            if (bin[i]==0) bin[i]=1;
            else bin[i]=0;
            i++;
        }
        i=31;
        flag=1;
        while(flag==1){
            if(bin[i]==0){
                bin[i]=1;
                flag=0;
            }
            else{
                bin[i]=0;
                i--;
            }
        }

    }            //chequei se binario final eh negativo (muda-se para contas)
    i=31;
    j=0;
    pri=1;
    aux=0;
    mult=2;
    while(i>0){
        if(pri==1){aux=aux + bin[i]; pri=0;}
        else{
                aux= aux + bin[i]*mult;
                mult= mult*2;
            }
        i--;
    }
    if(bresp[0]==1) aux=aux*(-1);// resposta em inteiro

    printf("\nNOT %d (",arg1);
    i=0;
    while (i<32){
        printf("%d",barg1[i]);
        i++;
    }
    printf(") : %d (",aux);
    i=0;
    while (i<32){
        printf("%d",bresp[i]);
        i++;
    }
    printf(")");
    }
    //-----------------------------------------------------------------------
    //-----------------------------------------------------------------------
    if(opc==2){

    printf("\nDigite os numeros: ");
    scanf("%d",&num);         //peguei o numero
    getchar();
    scanf("%d",&num2);         //peguei o numero
    getchar();
    arg1=num;
    arg2=num2;
    if(num<0){
        num=num*(-1);
        neg=1;               //vi se eh negativo
    }
    if(num2<0){
        num2=num2*(-1);
        neg2=1;               //vi se eh negativo
    }
    i=0;
    while(i<32){             //preenchi com zeros
        bin[i]=0;
        i++;
    }
    i=0;
    while(i<32){             //preenchi com zeros
        bin2[i]=0;
        i++;
    }
i=0;
    while (num > 0 && i<31){
            bin[i]=num%2;
            num = num / 2;
            i++;
            }
    cont=i-1;               //preenchi invertidamente
    i=0;
    while (num2 > 0 && i<31){
            bin2[i]=num2%2;
            num2 = num2 / 2;
            i++;
            }
    cont2=i-1;               //preenchi invertidamente
    i=0;

    while(i<=cont/2){
        aux=bin[i];
        bin[i]=bin[cont-i];
        bin[cont-i]=aux;
        i++;
    }                      //corrigi a inversao
     i=0;
     while(i<=cont2/2){
        aux2=bin2[i];
        bin2[i]=bin2[cont2-i];
        bin2[cont2-i]=aux2;
        i++;
    }                      //corrigi a inversao
     i=0;
    while(i<=cont){
        bin[31-i]=bin[cont-i];
        bin[cont-i]=0;
        i++;
    }                      //levei oara o fim do vetor
    i=0;
    while(i<=cont2){
        bin2[31-i]=bin2[cont2-i];
        bin2[cont2-i]=0;
        i++;
    }                      //levei oara o fim do vetor
    i=0;
    while(i<32){            //copiei o binario para outra variavel
        barg1[i]=bin[i];
        i++;
    }
    i=0;
    while(i<32){            //copiei o binario para outra variavel
        barg2[i]=bin2[i];
        i++;
    }
                              //transformei em binario
    i=0;
    if(neg==1){
        while(i<32){
            if (bin[i]==0) bin[i]=1;
            else bin[i]=0;
            i++;
        }
        i=31;
        flag=1;
        while(flag==1){
            if(bin[i]==0){
                bin[i]=1;
                flag=0;
            }
            else{
                bin[i]=0;
                i--;
            }
        }}               //transforma em negativo
        i=0;
    if(neg2==1){
        while(i<32){
            if (bin2[i]==0) bin2[i]=1;
            else bin2[i]=0;
            i++;
        }
        i=31;
        flag2=1;
        while(flag2==1){
            if(bin2[i]==0){
                bin2[i]=1;
                flag2=0;
            }
            else{
                bin2[i]=0;
                i--;
            }
        }}               //transforma em negativo
        i=0;
    while(i<32){
        barg1[i]=bin[i];
        i++;
    }                   //copiei binario para outra variavel
    i=0;
    while(i<32){
        barg2[i]=bin2[i];
        i++;
    }                   //copiei binario para outra variavel

    i=0;
     while(i<32){
            if (bin[i]==1 && bin2[i]==1)
                bin[i]=1;
            else
                bin[i]=0;
            i++;
        }
                                         //NOT
        i=0;
    while(i<32){
        bresp[i]=bin[i];
        i++;
    }                              //copiei binario p resposta
    if(bin[0]==1){ i=0;
     while(i<32){
            if (bin[i]==0) bin[i]=1;
            else bin[i]=0;
            i++;
        }
        i=31;
        flag=1;
        while(flag==1){
            if(bin[i]==0){
                bin[i]=1;
                flag=0;
            }
            else{
                bin[i]=0;
                i--;
            }
        }

    }            //chequei se binario final eh negativo (muda-se para contas)
    i=31;
    j=0;
    pri=1;
    aux=0;
    mult=2;
    while(i>0){
        if(pri==1){aux=aux + bin[i]; pri=0;}
        else{
                aux= aux + bin[i]*mult;
                mult= mult*2;
            }
        i--;
    }
    if(bresp[0]==1) aux=aux*(-1);// resposta em inteiro

    printf("\nAND %d (",arg1);
    i=0;
    while (i<32){
        printf("%d",barg1[i]);
        i++;
    }
    printf(") AND %d (",arg2);
    i=0;
    while (i<32){
        printf("%d",barg2[i]);
        i++;
    }
    printf(") : %d (",aux);
    i=0;
    while (i<32){
        printf("%d",bresp[i]);
        i++;
    }
    printf(")");
    }





    //-----------------------------------------------------------------------
    //-----------------------------------------------------------------------
    if(opc==3)
        {

    printf("\nDigite os numeros: ");
    scanf("%d",&num);         //peguei o numero
    getchar();
    scanf("%d",&num2);         //peguei o numero
    getchar();
    arg1=num;
    arg2=num2;
    if(num<0){
        num=num*(-1);
        neg=1;               //vi se eh negativo
    }
    if(num2<0){
        num2=num2*(-1);
        neg2=1;               //vi se eh negativo
    }
    i=0;
    while(i<32){             //preenchi com zeros
        bin[i]=0;
        i++;
    }
    i=0;
    while(i<32){             //preenchi com zeros
        bin2[i]=0;
        i++;
    }
i=0;
    while (num > 0 && i<31){
            bin[i]=num%2;
            num = num / 2;
            i++;
            }
    cont=i-1;               //preenchi invertidamente
    i=0;
    while (num2 > 0 && i<31){
            bin2[i]=num2%2;
            num2 = num2 / 2;
            i++;
            }
    cont2=i-1;               //preenchi invertidamente
    i=0;

    while(i<=cont/2){
        aux=bin[i];
        bin[i]=bin[cont-i];
        bin[cont-i]=aux;
        i++;
    }                      //corrigi a inversao
     i=0;
     while(i<=cont2/2){
        aux2=bin2[i];
        bin2[i]=bin2[cont2-i];
        bin2[cont2-i]=aux2;
        i++;
    }                      //corrigi a inversao
     i=0;
    while(i<=cont){
        bin[31-i]=bin[cont-i];
        bin[cont-i]=0;
        i++;
    }                      //levei oara o fim do vetor
    i=0;
    while(i<=cont2){
        bin2[31-i]=bin2[cont2-i];
        bin2[cont2-i]=0;
        i++;
    }                      //levei oara o fim do vetor
    i=0;
    while(i<32){            //copiei o binario para outra variavel
        barg1[i]=bin[i];
        i++;
    }
    i=0;
    while(i<32){            //copiei o binario para outra variavel
        barg2[i]=bin2[i];
        i++;
    }
                              //transformei em binario
    i=0;
    if(neg==1){
        while(i<32){
            if (bin[i]==0) bin[i]=1;
            else bin[i]=0;
            i++;
        }
        i=31;
        flag=1;
        while(flag==1){
            if(bin[i]==0){
                bin[i]=1;
                flag=0;
            }
            else{
                bin[i]=0;
                i--;
            }
        }}               //transforma em negativo
        i=0;
    if(neg2==1){
        while(i<32){
            if (bin2[i]==0) bin2[i]=1;
            else bin2[i]=0;
            i++;
        }
        i=31;
        flag2=1;
        while(flag2==1){
            if(bin2[i]==0){
                bin2[i]=1;
                flag2=0;
            }
            else{
                bin2[i]=0;
                i--;
            }
        }}               //transforma em negativo
        i=0;
    while(i<32){
        barg1[i]=bin[i];
        i++;
    }                   //copiei binario para outra variavel
    i=0;
    while(i<32){
        barg2[i]=bin2[i];
        i++;
    }                   //copiei binario para outra variavel

    i=0;
     while(i<32){
            if (bin[i]==1 || bin2[i]==1)
                bin[i]=1;
            else
                bin[i]=0;
            i++;
        }
                                         //NOT
        i=0;
    while(i<32){
        bresp[i]=bin[i];
        i++;
    }                              //copiei binario p resposta
    if(bin[0]==1){ i=0;
     while(i<32){
            if (bin[i]==0) bin[i]=1;
            else bin[i]=0;
            i++;
        }
        i=31;
        flag=1;
        while(flag==1){
            if(bin[i]==0){
                bin[i]=1;
                flag=0;
            }
            else{
                bin[i]=0;
                i--;
            }
        }

    }            //chequei se binario final eh negativo (muda-se para contas)
    i=31;
    j=0;
    pri=1;
    aux=0;
    mult=2;
    while(i>0){
        if(pri==1){aux=aux + bin[i]; pri=0;}
        else{
                aux= aux + bin[i]*mult;
                mult= mult*2;
            }
        i--;
    }
    if(bresp[0]==1) aux=aux*(-1);// resposta em inteiro

    printf("\nAND %d (",arg1);
    i=0;
    while (i<32){
        printf("%d",barg1[i]);
        i++;
    }
    printf(") AND %d (",arg2);
    i=0;
    while (i<32){
        printf("%d",barg2[i]);
        i++;
    }
    printf(") : %d (",aux);
    i=0;
    while (i<32){
        printf("%d",bresp[i]);
        i++;
    }
    printf(")");
    }



    //-----------------------------------------------------------------------
    //-----------------------------------------------------------------------
    if(opc==4)
        {

    printf("\nDigite os numeros: ");
    scanf("%d",&num);         //peguei o numero
    getchar();
    scanf("%d",&num2);         //peguei o numero
    getchar();
    arg1=num;
    arg2=num2;
    if(num<0){
        num=num*(-1);
        neg=1;               //vi se eh negativo
    }
    if(num2<0){
        num2=num2*(-1);
        neg2=1;               //vi se eh negativo
    }
    i=0;
    while(i<32){             //preenchi com zeros
        bin[i]=0;
        i++;
    }
    i=0;
    while(i<32){             //preenchi com zeros
        bin2[i]=0;
        i++;
    }
i=0;
    while (num > 0 && i<31){
            bin[i]=num%2;
            num = num / 2;
            i++;
            }
    cont=i-1;               //preenchi invertidamente
    i=0;
    while (num2 > 0 && i<31){
            bin2[i]=num2%2;
            num2 = num2 / 2;
            i++;
            }
    cont2=i-1;               //preenchi invertidamente
    i=0;

    while(i<=cont/2){
        aux=bin[i];
        bin[i]=bin[cont-i];
        bin[cont-i]=aux;
        i++;
    }                      //corrigi a inversao
     i=0;
     while(i<=cont2/2){
        aux2=bin2[i];
        bin2[i]=bin2[cont2-i];
        bin2[cont2-i]=aux2;
        i++;
    }                      //corrigi a inversao
     i=0;
    while(i<=cont){
        bin[31-i]=bin[cont-i];
        bin[cont-i]=0;
        i++;
    }                      //levei oara o fim do vetor
    i=0;
    while(i<=cont2){
        bin2[31-i]=bin2[cont2-i];
        bin2[cont2-i]=0;
        i++;
    }                      //levei oara o fim do vetor
    i=0;
    while(i<32){            //copiei o binario para outra variavel
        barg1[i]=bin[i];
        i++;
    }
    i=0;
    while(i<32){            //copiei o binario para outra variavel
        barg2[i]=bin2[i];
        i++;
    }
                              //transformei em binario
    i=0;
    if(neg==1){
        while(i<32){
            if (bin[i]==0) bin[i]=1;
            else bin[i]=0;
            i++;
        }
        i=31;
        flag=1;
        while(flag==1){
            if(bin[i]==0){
                bin[i]=1;
                flag=0;
            }
            else{
                bin[i]=0;
                i--;
            }
        }}               //transforma em negativo
        i=0;
    if(neg2==1){
        while(i<32){
            if (bin2[i]==0) bin2[i]=1;
            else bin2[i]=0;
            i++;
        }
        i=31;
        flag2=1;
        while(flag2==1){
            if(bin2[i]==0){
                bin2[i]=1;
                flag2=0;
            }
            else{
                bin2[i]=0;
                i--;
            }
        }}               //transforma em negativo
        i=0;
    while(i<32){
        barg1[i]=bin[i];
        i++;
    }                   //copiei binario para outra variavel
    i=0;
    while(i<32){
        barg2[i]=bin2[i];
        i++;
    }                   //copiei binario para outra variavel

    i=0;
     while(i<32){
            if (bin[i]==1 && bin2[i]==0)
                bin[i]=1;
            else if (bin[i]==0 && bin2[i]==1)
                bin[i]=1;
            else
                bin[i]=0;
            i++;
        }
                                         //NOT
        i=0;
    while(i<32){
        bresp[i]=bin[i];
        i++;
    }                              //copiei binario p resposta
    if(bin[0]==1){ i=0;
     while(i<32){
            if (bin[i]==0) bin[i]=1;
            else bin[i]=0;
            i++;
        }
        i=31;
        flag=1;
        while(flag==1){
            if(bin[i]==0){
                bin[i]=1;
                flag=0;
            }
            else{
                bin[i]=0;
                i--;
            }
        }

    }            //chequei se binario final eh negativo (muda-se para contas)
    i=31;
    j=0;
    pri=1;
    aux=0;
    mult=2;
    while(i>0){
        if(pri==1){aux=aux + bin[i]; pri=0;}
        else{
                aux= aux + bin[i]*mult;
                mult= mult*2;
            }
        i--;
    }
    if(bresp[0]==1) aux=aux*(-1);// resposta em inteiro

    printf("\nAND %d (",arg1);
    i=0;
    while (i<32){
        printf("%d",barg1[i]);
        i++;
    }
    printf(") AND %d (",arg2);
    i=0;
    while (i<32){
        printf("%d",barg2[i]);
        i++;
    }
    printf(") : %d (",aux);
    i=0;
    while (i<32){
        printf("%d",bresp[i]);
        i++;
    }
    printf(")");
    }



    //-----------------------------------------------------------------------
    //-----------------------------------------------------------------------
    if(opc==5)

{

    printf("\nDigite os numeros: ");
    scanf("%d",&num);         //peguei o numero
    getchar();
    scanf("%d",&num2);         //peguei o numero
    getchar();
    arg1=num;
    arg2=num2;
    if(num<0){
        num=num*(-1);
        neg=1;               //vi se eh negativo
    }
    if(num2<0){
        num2=num2*(-1);
        neg2=1;               //vi se eh negativo
    }
    i=0;
    while(i<32){             //preenchi com zeros
        bin[i]=0;
        i++;
    }
    i=0;
    while(i<32){             //preenchi com zeros
        bin2[i]=0;
        i++;
    }
i=0;
    while (num > 0 && i<31){
            bin[i]=num%2;
            num = num / 2;
            i++;
            }
    cont=i-1;               //preenchi invertidamente
    i=0;
    while (num2 > 0 && i<31){
            bin2[i]=num2%2;
            num2 = num2 / 2;
            i++;
            }
    cont2=i-1;               //preenchi invertidamente
    i=0;

    while(i<=cont/2){
        aux=bin[i];
        bin[i]=bin[cont-i];
        bin[cont-i]=aux;
        i++;
    }                      //corrigi a inversao
     i=0;
     while(i<=cont2/2){
        aux2=bin2[i];
        bin2[i]=bin2[cont2-i];
        bin2[cont2-i]=aux2;
        i++;
    }                      //corrigi a inversao
     i=0;
    while(i<=cont){
        bin[31-i]=bin[cont-i];
        bin[cont-i]=0;
        i++;
    }                      //levei oara o fim do vetor
    i=0;
    while(i<=cont2){
        bin2[31-i]=bin2[cont2-i];
        bin2[cont2-i]=0;
        i++;
    }                      //levei oara o fim do vetor
    i=0;
    while(i<32){            //copiei o binario para outra variavel
        barg1[i]=bin[i];
        i++;
    }
    i=0;
    while(i<32){            //copiei o binario para outra variavel
        barg2[i]=bin2[i];
        i++;
    }
                              //transformei em binario
    i=0;
    if(neg==1){
        while(i<32){
            if (bin[i]==0) bin[i]=1;
            else bin[i]=0;
            i++;
        }
        i=31;
        flag=1;
        while(flag==1){
            if(bin[i]==0){
                bin[i]=1;
                flag=0;
            }
            else{
                bin[i]=0;
                i--;
            }
        }}               //transforma em negativo
        i=0;
    if(neg2==1){
        while(i<32){
            if (bin2[i]==0) bin2[i]=1;
            else bin2[i]=0;
            i++;
        }
        i=31;
        flag2=1;
        while(flag2==1){
            if(bin2[i]==0){
                bin2[i]=1;
                flag2=0;
            }
            else{
                bin2[i]=0;
                i--;
            }
        }}               //transforma em negativo
        i=0;
    while(i<32){
        barg1[i]=bin[i];
        i++;
    }                   //copiei binario para outra variavel
    i=0;
    while(i<32){
        barg2[i]=bin2[i];
        i++;
    }                   //copiei binario para outra variavel

    i=0;
    while(i<32-arg2){
        bin[31-i]=bin[31-arg2-i];
        bin[31-arg2-i]=0;
        i++;
    }

                                         //NOT
        i=0;
    while(i<32){
        bresp[i]=bin[i];
        i++;
    }                              //copiei binario p resposta
    if(bin[0]==1){ i=0;
     while(i<32){
            if (bin[i]==0) bin[i]=1;
            else bin[i]=0;
            i++;
        }
        i=31;
        flag=1;
        while(flag==1){
            if(bin[i]==0){
                bin[i]=1;
                flag=0;
            }
            else{
                bin[i]=0;
                i--;
            }
        }

    }            //chequei se binario final eh negativo (muda-se para contas)
    i=31;
    j=0;
    pri=1;
    aux=0;
    mult=2;
    while(i>0){
        if(pri==1){aux=aux + bin[i]; pri=0;}
        else{
                aux= aux + bin[i]*mult;
                mult= mult*2;
            }
        i--;
    }
    if(bresp[0]==1) aux=aux*(-1);// resposta em inteiro

    printf("\nAND %d (",arg1);
    i=0;
    while (i<32){
        printf("%d",barg1[i]);
        i++;
    }
    printf(") AND %d (",arg2);
    i=0;
    while (i<32){
        printf("%d",barg2[i]);
        i++;
    }
    printf(") : %d (",aux);
    i=0;
    while (i<32){
        printf("%d",bresp[i]);
        i++;
    }
    printf(")");
    }



    //-----------------------------------------------------------------------
    //-----------------------------------------------------------------------
    if(opc==6){
            {

    printf("\nDigite os numeros: ");
    scanf("%d",&num);         //peguei o numero
    getchar();
    scanf("%d",&num2);         //peguei o numero
    getchar();
    arg1=num;
    arg2=num2;
    if(num<0){
        num=num*(-1);
        neg=1;               //vi se eh negativo
    }
    if(num2<0){
        num2=num2*(-1);
        neg2=1;               //vi se eh negativo
    }
    i=0;
    while(i<32){             //preenchi com zeros
        bin[i]=0;
        i++;
    }
    i=0;
    while(i<32){             //preenchi com zeros
        bin2[i]=0;
        i++;
    }
i=0;
    while (num > 0 && i<31){
            bin[i]=num%2;
            num = num / 2;
            i++;
            }
    cont=i-1;               //preenchi invertidamente
    i=0;
    while (num2 > 0 && i<31){
            bin2[i]=num2%2;
            num2 = num2 / 2;
            i++;
            }
    cont2=i-1;               //preenchi invertidamente
    i=0;

    while(i<=cont/2){
        aux=bin[i];
        bin[i]=bin[cont-i];
        bin[cont-i]=aux;
        i++;
    }                      //corrigi a inversao
     i=0;
     while(i<=cont2/2){
        aux2=bin2[i];
        bin2[i]=bin2[cont2-i];
        bin2[cont2-i]=aux2;
        i++;
    }                      //corrigi a inversao
     i=0;
    while(i<=cont){
        bin[31-i]=bin[cont-i];
        bin[cont-i]=0;
        i++;
    }                      //levei oara o fim do vetor
    i=0;
    while(i<=cont2){
        bin2[31-i]=bin2[cont2-i];
        bin2[cont2-i]=0;
        i++;
    }                      //levei oara o fim do vetor
    i=0;
    while(i<32){            //copiei o binario para outra variavel
        barg1[i]=bin[i];
        i++;
    }
    i=0;
    while(i<32){            //copiei o binario para outra variavel
        barg2[i]=bin2[i];
        i++;
    }
                              //transformei em binario
    i=0;
    if(neg==1){
        while(i<32){
            if (bin[i]==0) bin[i]=1;
            else bin[i]=0;
            i++;
        }
        i=31;
        flag=1;
        while(flag==1){
            if(bin[i]==0){
                bin[i]=1;
                flag=0;
            }
            else{
                bin[i]=0;
                i--;
            }
        }}               //transforma em negativo
        i=0;
    if(neg2==1){
        while(i<32){
            if (bin2[i]==0) bin2[i]=1;
            else bin2[i]=0;
            i++;
        }
        i=31;
        flag2=1;
        while(flag2==1){
            if(bin2[i]==0){
                bin2[i]=1;
                flag2=0;
            }
            else{
                bin2[i]=0;
                i--;
            }
        }}               //transforma em negativo
        i=0;
    while(i<32){
        barg1[i]=bin[i];
        i++;
    }                   //copiei binario para outra variavel
    i=0;
    while(i<32){
        barg2[i]=bin2[i];
        i++;
    }                   //copiei binario para outra variavel

    i=0;
    while(i<32-arg2){
        bin[i]=bin[arg2+i];
        bin[arg2+i]=0;
        i++;
    }

                                         //NOT
        i=0;
    while(i<32){
        bresp[i]=bin[i];
        i++;
    }                              //copiei binario p resposta
    if(bin[0]==1){ i=0;
     while(i<32){
            if (bin[i]==0) bin[i]=1;
            else bin[i]=0;
            i++;
        }
        i=31;
        flag=1;
        while(flag==1){
            if(bin[i]==0){
                bin[i]=1;
                flag=0;
            }
            else{
                bin[i]=0;
                i--;
            }
        }

    }            //chequei se binario final eh negativo (muda-se para contas)
    i=31;
    j=0;
    pri=1;
    aux=0;
    mult=2;
    while(i>0){
        if(pri==1){aux=aux + bin[i]; pri=0;}
        else{
                aux= aux + bin[i]*mult;
                mult= mult*2;
            }
        i--;
    }
    if(bresp[0]==1) aux=aux*(-1);// resposta em inteiro

    printf("\nAND %d (",arg1);
    i=0;
    while (i<32){
        printf("%d",barg1[i]);
        i++;
    }
    printf(") AND %d (",arg2);
    i=0;
    while (i<32){
        printf("%d",barg2[i]);
        i++;
    }
    printf(") : %d (",aux);
    i=0;
    while (i<32){
        printf("%d",bresp[i]);
        i++;
    }
    printf(")");
    }

    }

//-----------------------------------------------------------------------
//-----------------------------------------------------------------------

    return 0;
}
