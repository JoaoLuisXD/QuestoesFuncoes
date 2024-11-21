#include <stdio.h>
#include <stdlib.h>
void funcao (int totalseg, int *horas, int *minutos, int *segundos)
{
    *horas=totalseg/3600;
    int resto = totalseg%3600;
    *minutos=resto/60;
    *segundos=resto%60;
}
int main()
{
    int segundos,horas,minutos;
    scanf("%d", &segundos);
    funcao(segundos,&horas,&minutos,&segundos);
    printf("H = %d, M = %d, S = %d\n", horas,minutos,segundos);


    return 0;
}
