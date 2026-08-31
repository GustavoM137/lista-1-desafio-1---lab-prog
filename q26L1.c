#include <math.h>
#include <stdio.h>

int main() {
    float a, b, c, m_a, m_g;

    puts("Digite três números reais:");
    scanf("%f %f %f", &a, &b, &c);

    m_a = (a + b + c) / 3;

    switch (a * b * c > 0) {
        case 1:
            m_g = pow(a * b * c, 1.0 / 3);
            break;

        case 0:
            m_g = -pow(-a * b * c, 1.0 / 3);
            break;
    }

    printf("Média aritmética = %.2f\n", m_a);
    printf("Média geométrica = %.2f\n", m_g);

    return 0;
}