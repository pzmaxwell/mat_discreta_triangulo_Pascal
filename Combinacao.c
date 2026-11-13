#include <stdio.h>

int combinacao(int n, int k) {
    if (k > n || k < 0) {
        return 0;
    }
    if (k == 0 || k == n) {
        return 1;
    }
    if (k > n - k) {
        k = n - k;
    }

    int v[k];
    int resultado = 1;

    for (int i = 1; i <= k; i++) {
        v[i - 1] = i;
    }

    for (int i = 0; i < k; i++) {
        resultado = resultado * (n - i);
        resultado = resultado / v[i];
    }

    return resultado;
}

int main() {
    int n, k;

    printf("Digite o valor de n: ");
    scanf("%d", &n);
    printf("Digite o valor de k: ");
    scanf("%d", &k);

    int r = combinacao(n, k);
    printf("O resultado da combinacao e: %d\n", r);

    return 0;
}
