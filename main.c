#include <stdio.h>

int main() {
    int i, num, max;
    printf("Inserisci un numero positivo: ");
    scanf("%d", &num);
    max = num;
    for (i = 1; i < 10; i++) {
        printf("Inserisci un altro numero positivo: ");
        scanf("%d", &num);
        if (num > max) {
            max = num;
        }
    }
    printf("Il numero massimo è: %d\n", max);

    return 0;
}

