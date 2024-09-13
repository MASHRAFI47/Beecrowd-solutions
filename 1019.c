// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int N, hour, min, sec, remainder;
    
    scanf("%d", &N);
    
    hour = N / 3600;
    remainder = N % 3600;
    
    min = remainder / 60;
    remainder = min % 60;
    
    sec = remainder;
    
    printf("%d:%d:%d\n", hour, min, sec);
    
    return 0;
}