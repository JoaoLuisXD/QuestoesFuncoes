#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void funcao(char * palavra)
{
    int letraigual = 1; // true
    int tam = strlen(palavra);

    for(int i=0;i<tam/2;i++)
    {
        if(palavra[i] != palavra[tam -1 -i])
        {
            letraigual = 0; //false
            break;
        }
    }

    if(letraigual == 1)
    {
        printf("Eh um palindromo\n");
    }
    else
    {
        printf("Nao eh um palindromo\n");
    }
}

int main(){
    char palavra[100];
    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    funcao(palavra);

    return 0;
}
