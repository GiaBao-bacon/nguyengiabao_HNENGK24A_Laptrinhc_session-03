#include <stdio.h>

int main() {
    float a, h, area;

    printf("Nhap do dai canh day (a): ");
    scanf("%f", &a);

    printf("Nhap chieu cao (h): ");
    scanf("%f", &h);

    area = 0.5 * a * h;

    printf("Dien tich tam giac la: %.2f\n", area);

    return 0;
}

