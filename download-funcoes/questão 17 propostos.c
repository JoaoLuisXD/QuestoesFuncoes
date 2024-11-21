#include <stdio.h>
#include <stdlib.h>
int funcao(int n1,int n2)
{
    while(n2!=0)
    {
       int aux=n2;
       n2 = n1%n2;
       n1 = aux;
    }
    return n1;
}
int main()
{
    int  n1,n2;
    scanf("%d",&n1);
    scanf("%d",&n2);
    printf("o mdc e %d: ", funcao(n1,n2));
}
