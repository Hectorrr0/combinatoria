#include <stdio.h>
#include <math.h>

// Función para calcular el factorial de un número
unsigned long long factorial(int n) {
    unsigned long long result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

// Función para calcular la combinatoria (nCr)
unsigned long long combinatoria(int n, int r) {
    if (r > n) return 0;
    return factorial(n) / (factorial(r) * factorial(n - r));
}

// Función para calcular la permutación (nPr)
unsigned long long permutacion(int n, int r) {
    if (r > n) return 0;
    return factorial(n) / factorial(n - r);
}

// Función para calcular el exponente de un número
double exponente(double base, int exp) {
    return pow(base, exp);
}

//Operaciones del programaa
int main() {
    int opcion;
    do {
        printf("Menu de opciones:\n");
        printf("1. Calcular combinatoria (nCr)\n");
        printf("2. Calcular permutacion (nPr)\n");
        printf("3. Calcular exponente de un numero (a^n)\n");
        printf("4. Salir\n");
        printf("Seleccione una opcion: ");
        scanf("%d", &opcion);

        switch(opcion) {
            case 1: {
                int n, r;
                printf("Introduce el valor de n: ");
                scanf("%d", &n);
                printf("Introduce el valor de r: ");
                scanf("%d", &r);
                if (n >= r && r >= 0) {
                    printf("Combinatoria (%dC%d) = %llu\n", n, r, combinatoria(n, r));
                } else {
                    printf("Valores no validos. Asegurese que n >= r >= 0\n");
                }
                break;
            }
            case 2: {
                int n, r;
                printf("Introduce el valor de n: ");
                scanf("%d", &n);
                printf("Introduce el valor de r: ");
                scanf("%d", &r);
                if (n >= r && n >= 0) {
                    printf("Permutacion (%dP%d) = %llu\n", n, r, permutacion(n, r));
                } else {
                    printf("Valores no validos. Asegurese que m >= n >= 0\n");
                }
                break;
            }
            case 3: {
                double base;
                int exp;
                printf("Introduce la base: ");
                scanf("%lf", &base);
                printf("Introduce el exponente: ");
                scanf("%d", &exp);
                printf("%lf^%d = %lf\n", base, exp, exponente(base, exp));
                break;
            }
            case 4:
                printf("Saliendo del programa...\n");
                break;
            default:
                printf("Opcion no valida. Intente nuevamente.\n");
        }
    } while(opcion != 4);

    printf("Integrantes: Jorge Pina, Jhosnar Ereu, Hector Godoy\n");
    return 0;
}
