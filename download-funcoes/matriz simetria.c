#include <stdio.h>
#include <stdlib.h>
int main()
{
    int matriz[4][4],simetrica=1;
    printf("digite um numero: ");
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            printf("|%d|", matriz[i][j]);
            if(matriz[i][j] != matriz[j][i])
            {
                simetrica = 0;
            }
        }
    }
    if(simetrica)
    {
        printf("a matriz e simetrica");
    }
    else
    {
        printf("simetria e falsa");
    }
    return 0;
}
