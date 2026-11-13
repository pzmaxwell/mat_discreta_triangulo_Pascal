#include <stdio.h>

int permutacao(int n) {
    if (n < 0) {
        return 0; 
    }
    if (n == 0 || n == 1) {
        return 1; 
    }

    int v[n]; 
    int resultado = 1;

    
    for (int i = 0; i < n; i++) {
        v[i] = i + 1;
    }

    
    for (int i = 0; i < n; i++) {
        resultado = resultado * v[i];
    }

    return resultado;
}

int main() {
    int n;

    printf("-----Permutacao Simples-----\n");
    printf("Digite o valor de n: ");
    scanf("%d", &n);

    int r = permutacao(n);
    printf("O resultado da permutacao de %d e: %d\n", n, r);

    return 0;
}
