#include <stdio.h>
#include <stdlib.h>
float funcaomedia(float sal[])
{
    float soma=0;
    for(int i=0;i<15;i++)
    {
       soma +=sal[i];
    }
    return soma/15;
}
void funcaoidade(int vet[])
{
    int maior=vet[0],menor=vet[0];
    for(int i=0;i<15;i++)
    {
        if(vet[i]>maior)
        {
            maior = vet[i];
        }
        else if(vet[i]<menor)
        {
            menor = vet[i];
        }
    }
    printf("A maior idade eh: %d\n", maior);
    printf("A menor idade eh: %d\n", menor);
}
int funcaomulher(char sexo[],int nfilhos[],float salario[])
{
    int cont=0;
    for(int i=0;i<15;i++)
    {
       if(sexo[i]=='F' || sexo[i]=='f')
       {
          if(salario[i]<=500 && nfilhos[i]==3)
          {
             cont++;
          }
       }
    }
    return cont;
}



int main()
{
    int idade[15],nfilhos[15];
    float salario[15];
    char sexo[15];
    for(int i=0;i<15;i++)
    {
        printf("DIGITE A IDADE: ");
        scanf("%d",&idade[i]);
        printf("DIGITE O SALARIO: ");
        scanf("%f",&salario[i]);
        printf("DIGITE A SEXO M/F: ");
        fflush(stdin);
        scanf("%c",&sexo[i]);
        printf("DIGITE A QNTD FILHOS: ");
        scanf("%d",&nfilhos[i]);

    }
    float resultadoM=funcaomedia(salario);
    printf("A MED DE SAL EH: %f\n", resultadoM);
    funcaoidade(idade);
    int resultadofuncao=funcaomulher(sexo,nfilhos,salario);
    printf("QTD DE MULHERES QUE ATENDEM OS REQUISITOS %d\n", resultadofuncao);

   return 0;
}
