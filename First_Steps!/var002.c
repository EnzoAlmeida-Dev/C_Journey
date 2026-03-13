#include <stdio.h>
#include <locale.h>
#include <math.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    float m;
    float ci;
    float a;
    float aa;
    printf("Olá, investidor! Me informe:\n o dinheiro que você tem atualmente;\na taxa de juros anual (em porcentagem) do investimento\ne o tempo (em anos) que você gostaria de deixar sua grana parada:");
    scanf("%f \n%f \n %f", &ci, &aa, &a);
    m=ci*pow(1+(aa/100), a);
    printf("O dinheiro que você terá em %f anos será de %f Reais!", a, m);
    return 0;
}
