#include <stdio.h>
#include <math.h>

#define PI 3.14159265358979323846

int main(void)
{
    double gr;

    printf("Введите угол в градусах: ");
   scanf("%lf", &gr);

    double rad = gr * PI / 180.0;
    double result = sin(rad);
    printf("Синус угла %.2f градусов = %.6f\n", gr, result);
    return 0;
}