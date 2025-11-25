#include <stdio.h>

int main() {
    int num;
    printf("teclea un número: ");
    scanf("%d", &num);
    if (num % 2 == 0)
        printf("El número %d es par.", num);
    else
        printf("El número %d es impar.", num);
    return 0;
}