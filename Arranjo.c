#include <stdio.h>

int arranjo(int n, int k) {
    
    if (k > n || k < 0) {
        return 0;
    }

    int v[k]; 
    int resultado = 1;

    for (int i = 0; i < k; i++) {
        v[i] = n - i;       
        resultado = resultado * v[i];  
    }

    return resultado;
}

int main() {
    int n, k;

    printf("Digite o valor de n: ");
    scanf("%d", &n);
    printf("Digite o valor de k: ");
    scanf("%d", &k);

    int r = arranjo(n, k);
    printf("O arranjo eh: %d\n", r);

    return 0;
}
