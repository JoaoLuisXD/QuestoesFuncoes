#include <stdio.h>
#include <stdlib.h>
float funcao(int n)
{
    float soma=0;
    int cont=0;
    float med=0;
    do
    {
        scanf("%d",&n);
        if(n>0)
        {
            soma+=n;
            cont++;
        }
    }
    while(n!=0);
    med=soma/cont;
    return med;
}
int main()
{
    int n;
    printf("%f",funcao(n));
    return 0;
}
