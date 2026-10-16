#include <stdio.h>
#include <math.h>
#define t -6.00
int main(void)
{
    double x, a, b, y;

    printf("Введите x: ");
    scanf("%lf", &x);
    a = log(x);
    b = sqrt(x * x + t * t);
    y = pow(fabs(a - b * x), 1.0 / 5.0);
    printf("При x = %.4f значение y = %.4f\n", x, y);
    int A = (int)a;
    int B = (int)b;
    int C = (int)y;
    printf("Целые части: A = %d, B = %d, C = %d\n", A, B, C);
    int D = (A % 2 == 0) != (B % 2 == 0);
    int G = A % 3 == 0 && B % 3 == 0 && C % 3 == 0;
    printf("а) Условие выполнено (1 - да, 0 - нет): %d\n",D);
    printf("б) Условие выполнено (1 - да, 0 - нет): %d\n",G);
    return 0;
}