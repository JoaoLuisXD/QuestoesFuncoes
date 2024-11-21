#include <stdlib.h>
#include <stdio.h>
#define tam 5

void posit(int *vet, int *vetps, int *vetng, int tamanho, int *p, int *n) {
    *p = 0;
    *n = 0;
    for(int i = 0; i < tamanho; i++) {
        if(vet[i] > 0) {
            vetps[(*p)++] = vet[i];
        } else {
            vetng[(*n)++] = vet[i];
        }
    }
}

int main() {
    int vet1[tam], vetp[tam], vetn[tam];
    int p, n;

    printf("Digite %d números:\n", tam);
    for(int i = 0; i < tam; i++) {
        scanf("%d", &vet1[i]);
    }

    posit(vet1, vetp, vetn, tam, &p, &n);

    printf("Números positivos:\n");
    for(int i = 0; i < p; i++) {
        printf("%d\n", vetp[i]);
    }

    printf("Números negativos ou zero:\n");
    for(int i = 0; i < n; i++) {
        printf("%d\n", vetn[i]);
    }

    return 0;
}
