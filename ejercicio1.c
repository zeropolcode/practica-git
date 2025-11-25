#include <stdio.h>

int main() {
    float num1, num2, num3, promedio;
    printf("captura tres números: ");
    scanf("%f %f %f", &num1, &num2, &num3);
    promedio = (num1 + num2 + num3) / 3;
    printf("El promedio de los tres es: %.2f", promedio);
    return 0;
}