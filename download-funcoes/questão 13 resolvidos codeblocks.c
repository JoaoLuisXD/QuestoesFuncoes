/*Faça uma sub-rotina que receba um vetor A de dez elementos inteiros como parâmetro. Ao final dessa
função, deverá ter sido gerado um vetor B contendo o fatorial de cada elemento de A. O vetor B deverá
ser mostrado no programa principal.*/
#include <stdio.h>
#include <stdlib.h>
int funcao2(int mult)
{
   if(mult==0||mult==1)
   {
      return 1;
   }
   else
   {
      return mult*funcao2(mult-1);
   }
}
void funcao (int veta[],int vetb[])
{
   for(int i=0;i<10;i++)
   {
      vetb[i] = funcao2(veta[i]);
   }
}
int main()
{
   int vet1[10],vet2[10];
   printf("escolha numeros para fazer o fatorial\n");
   for(int i=0;i<10;i++)
   {
      scanf("%d", &vet1[i]);
   }
   funcao(vet1,vet2);
   for(int i=0;i<10;i++)
   {
      printf("%d", vet2[i]);
      printf("\n");
   }

   return 0;
}
