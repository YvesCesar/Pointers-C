#include <stdio.h>
#include <stdlib.h>

int main() {
    int a = 40;
    int *point1;
    int **point2;

    point1 = &a;
    point2 = &point1;

    printf("O endereco da variavel a eh: %p\n", &a);
    printf("O endereco do ponteiro point 1 eh: %p\n", &point1);
    printf("O endereco do ponteiro point 2 eh: %p\n", &point2);
    printf("O endereco apontado por point 1 eh %p\n", point1);
    printf("O endereco apontado por point 2 eh %p\n", point2);
    printf("E o valor armazenado em a eh %d\n", **point2);



return 0;
}
