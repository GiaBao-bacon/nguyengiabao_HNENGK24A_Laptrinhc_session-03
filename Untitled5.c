#include <stdio.h>

int main() {
    float celsius, fahrenheit;
    printf("Nhap nhiet do (do C): ");
    scanf("%f", &celsius);
    fahrenheit = (celsius * 9 / 5) + 32;
    printf("%.2f do C = %.2f do F\n", celsius, fahrenheit);

    return 0;
}

