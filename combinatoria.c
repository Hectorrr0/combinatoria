#include <stdio.h>
#include <math.h>

// Funci�n para calcular el factorial de un n�mero
unsigned long long factorial(int n) {
    unsigned long long result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

// Funci�n para calcular la combinatoria (nCr)
unsigned long long combinatoria(int n, int r) {
    if (r > n) return 0;
    return factorial(n) / (factorial(r) * factorial(n - r));
}

