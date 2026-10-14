#include<stdio.h>

int main(){
    int m[12][12] = {0};

    for(int i=0; i<6; i++){
        for(int j=0; j<=i; j++){
            
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
