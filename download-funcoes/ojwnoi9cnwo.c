#include <stdio.h>
#include <stdlib.h>
#define tam 4
int main()
{
    int vet[tam];
    for(int i=0;i<tam;i++)
    {
        scanf("%d", &vet[i]);
    }
    for(int i=0;i<tam;i++)
    {
        printf("%d", vet[i]);
    }
    return 0;
}
