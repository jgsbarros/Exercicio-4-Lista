#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b, c;
    printf("Digite o valor de a: ");
    scanf("%f", &a);
    printf("Digite o valor de b: ");
    scanf("%f", &b);
    printf("Digite o valor de c: ");
    scanf("%f", &c);
    float delta = b * b - 4*a*c;
    float x1 = (-b + delta*0.5)/ 2*a;
    float x2 = (-b - delta*0.5)/ 2*a;
    printf("As raizes da equacao de segundo grau sao: %.4f\n e %.4f\n", x1, x2);

    return 0;
}
