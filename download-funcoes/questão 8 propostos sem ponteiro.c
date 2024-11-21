#include <stdio.h>
#include <stdlib.h>
void funcao(int n)
{
    int fat=1;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
       fat*=i;
    }
    printf("%d\n",fat);
}
int main()
{
    int n;
    funcao(n);
    return 0;
}

