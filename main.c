#include<stdio.h>

int main(){
    int tam;
    int i, j;
    
    printf("-----Triangulo de Pascal-----\n");
    printf("Digite que tamanho deseja o triângulo \n");
    scanf("%d", &tam);
    int m[tam][tam];
    
    for(i=0; i<tam; i++){
        for(j=0; j<=i; j++){
            
            if(j==0 || j==i){
                m[i][j] = 1;
            }

            else{
                m[i][j] = m[i-1][j-1] + m[i-1][j];
            }
            printf("%d\t", m[i][j]);
        }
        printf("\n");
    }

return 0;
}
