#include <stdio.h>
#include <stdlib.h>
int funcao(float a,float b,float c,char letra)
{
    float ma,mp;
    if(letra=='a' || letra=='A')
    {
        ma=(a+b+c)/3;
        return ma;
    }
    if(letra=='p' || letra=='P')
    {
        mp=((a*2)+(b*3)+(c*5))/10;
        return mp;
    }
}
int main()
{
    float n1,n2,n3;
    char letra;
    scanf("%f %f %f", &n1,&n2,&n3);
    do
    {
        printf("digite a ou p: ");
        scanf("%s", &letra);
    }
    while(letra != 'p' && letra !='P' && letra !='a' && letra!='A');
    float resultado = funcao(n1,n2,n3,letra);
    printf("sua media e: %.2f", resultado);

return 0;
}
