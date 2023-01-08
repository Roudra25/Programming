#include <stdio.h>
int main ()
{
    float  A,B,C;

    double pi, sum1,sum2,sum3,sum4,sum5;

    pi= 3.14159;

    scanf("%f  %f  %f ",&A,&B,&C);

    sum1= 0.5 * A * C;

    sum2 = pi*( C * C );

    sum3 = (A+B)/2 * C;

    sum4 = (B * B);

    sum5 = (A * B);

    printf("TRIANGULO: %.3lf\n",sum1);

    printf("CIRCULO: %.3lf\n",sum2);

    printf("TRAPEZIO: %.3lf\n",sum3);
    printf("QUADRADO: %.3lf\n",sum4);

    printf("RETANGULO: %.3lf\n",sum5);

    return 0 ;


}
