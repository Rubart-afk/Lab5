#include <stdio.h>
#include <math.h>

#define PI 3.14159265358979323846
double gr;
double rad;
double result;
int main(void)
{
    

    printf("Введите угол в градусах: ");
   scanf("%lf", &gr);

    rad = gr * PI / 180.0;
    result = sin(rad);
    printf("Синус угла %.2f градусов = %.6f\n", gr, result);
    return 0;
}
