#include <locale.h> 
#include <stdio.h> 
void main() {
    setlocale(LC_ALL, "RUS");
    int L = 433;
    int n = 4;
    int k = 3;
    int m = 1;
    double result = (double)n / L;
    printf("Дано:\n\t%4d \n\t%4d \n\t---------\nОтвет:\n\t%+0*.*f \n", n, L, k + m + 2, m + 4, result);
    return 0;
}