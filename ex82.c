#include <stdio.h>

int main(){
    float A[10],x=0,M[10];
    for(int i=0;i<10;i++){
        scanf("%f",&A[i]);
    }
    printf("Digite valor de x:\n");
    scanf("%f",&x);
    printf("Vetor M :\t");
    for(int i=0;i<10;i++){
        M[i]=A[i]*x;
        printf("%.2f\t",M[i]);
    }
    
    return 0;
}