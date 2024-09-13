#include <stdio.h>

int main()
{

    float A, B, C, perimeter, Area;

    scanf("%f %f %f", &A, &B, &C);
    
    if ((A + B) > C && (B + C) > A && (A + C) > B)
    {
        perimeter = A + B + C;
        printf("Perimetro = %.1f\n", perimeter);
    }
    else
    {
        Area = ((float)1 / 2) * (A + B) * C;
        printf("Area = %.1f\n", Area);
    }

    return 0;
}