#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL, "Portuguese");
    double A, B, C;
    scanf("%lf %lf %lf", &A, &B, &C);

    double tri;
    double circ;
    double trap;
    double sqr;
    double rctg;
    
    tri=(A*C)/2;
    
    printf("Área do triângulo: %.3lf\n", tri);
    circ=3.14159*C*C;
    
    printf("Área do Círculo: %.3lf\n", circ);
    trap=((A+B)*C)/2;
    
    printf("Área do Trapézio: %.3lf\n", trap);
    sqr=B*B;
    
    printf("Área do quadrado: %.3lf\n", sqr);
    rctg=A*B;
    printf("Área do retângulo: %.3lf\n", rctg);
    return 0;
}
