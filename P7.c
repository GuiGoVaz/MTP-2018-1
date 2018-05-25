//Guilherme Gomes Vaz de Souza 11711ECP009
#include <stdio.h>
 int A(int, int);

int main()
{
    int m,n;
    printf("Digite os valores de m e n: ");
    scanf("%d %d",&m,&n);
    getchar();
    printf("\n%d",A(m,n));
    return 0;
}
int A(int m, int n){
 if(m==0)
    return n+1;
 else if(m>=0 && n==0)
    return A(m-1,1);
 else if(m>=0 && n>=0){
    return A(m-1,A(m,n-1));
 }}
