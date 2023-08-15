#include<stdio.h>
#include <string.h>

void topo(double maior) {
    printf("\033[H\033[J");
    printf("-------------------------------------\n");
    printf(" D E T E C T O R   D E   P E S A D O \n");
    printf(" Maior peso até agora: %.2lfKG.\n", maior);
    printf("-------------------------------------\n");
}

int main() {
    int i;
    char nome[100], pesado[100];
    double peso, maior = 0;

    topo(maior);

    for (i = 1; i <= 5; i++) {
        printf("Digite o nome: ");
        scanf("%s", &nome);
        printf("Digite o peso de %s: ", nome);
        scanf("%lf", &peso);
        if (peso > maior) {
            maior = peso;
            strcpy(pesado, nome);
        }
        topo(maior);
    }

    topo(maior);
    printf("A pessoa mais pesada foi %s, com %.2lfKG.", pesado, maior);

    return 0;
}