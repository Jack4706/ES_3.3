#include <stdio.h>

int main() {

    char nome;
    int eta;

    printf("inserisci l'iniziale del nome: \n");
    scanf("%c", &nome);

    printf("inserisci l'eta: \n");
    scanf("%d", &eta);

    if(eta >= 18) {
        printf("%c e' maggiorenne",nome);
    }

    return 0;
}
