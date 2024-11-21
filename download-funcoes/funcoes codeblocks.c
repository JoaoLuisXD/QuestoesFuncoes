#include <stdio.h>
#include <stdlib.h>
float funcao(float a, float b, float c, int escolha)
{
    switch (escolha)
    {
        case 1:
        return (a+b+c)/3;
        break;
        case 2:
        return ((a*2)+(b*3)+(c*5))/10;
        break;
        default:
        return -1;
        break;
    }

}

int main()
{
    int escolha;
    float n1,n2,n3;
    printf("digite a primeira nota: ");
    scanf("%f", &n1);
    printf("digite a segunda nota: ");
    scanf("%f", &n2);
    printf("digite a terceira nota: ");
    scanf("%f", &n3);
    printf("\n");
    printf("---------\n");
    printf("DIGITE UM NUMERO PARA QUAL MEDIA VOCE QUER FAZER\n");
    printf("1 - MEDIA ARITIMETICA\n");
    printf("2 - MEDIA PONDERADA\n");
    scanf("%d", &escolha);
    float resultado = funcao(n1,n2,n3,escolha);
    if(resultado == -1)
    {
        printf("|ESCOLHA INVALIDA|");
    }
    else
    {
        printf("A MEDIA E |%.2f|", resultado);
    }




    return 0;
}
