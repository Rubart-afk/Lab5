#include <stdio.h>
#include <math.h>
#define  t   -6.0
int main(void)
{
    double x, a, b, y;
    printf("Введите x: ");
    scanf("%lf",&x);
    a  = log(x);
    b = sqrt(x * x + t * t);
    y = pow(fabs(a - b * x), 1.0 / 5.0);
    printf("При x = %.4f значение y = %.4f\n", x, y);
    return 0;
}