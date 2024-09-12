#include <stdio.h>

int main()
{

    char name[50];
    double a, b, extra, result;
    fgets(name, sizeof(name), stdin);

    scanf("%lf", &a);
    scanf("%lf", &b);

    extra = b * ((float)15 / 100);
    result = a + extra;

    printf("TOTAL = R$ %.2lf\n", result);
    
    return 0;
}