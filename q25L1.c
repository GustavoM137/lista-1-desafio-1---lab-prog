#include <math.h>
#include <stdio.h>

int main() {
    float x1, y1, x2, y2, d;

    puts("Digite as coordenadas (x1, y1):");
    scanf("%f %f", &x1, &y1);

    puts("Digite as coordenadas (x2, y2):");
    scanf("%f %f", &x2, &y2);

    d = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    printf("Distância dos pontos (%.2f, %.2f) e (%.2f, %.2f): %.2f", x1, y1, x2, y2, d);

    return 0;
}