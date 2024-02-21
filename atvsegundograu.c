#include <stdio.h>
#include <math.h>
int main(){
    float a, b, c, delta, x1, x2;
    printf("Digite o valor de a, b e c, os coeficientes da equacao de 2 grau:\n");
    scanf("%f%f%f", &a, &b, &c);
    if (a == 0){
        printf("NEESG"); // não é equação de 2 grau
    }
    else{
        delta = pow(b,2) - (4 * a *c);
        if (delta < 0){
            printf("NRR\n"); //não existem raízes reais
        }
        else {
        x1 = (-b +  sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt (delta)) / (2 * a);
        printf("X1: %.2f\nX2: %.2f\n", x1, x2);
        }
    }
return 0;
}
