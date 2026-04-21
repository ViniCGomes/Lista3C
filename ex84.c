#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    printf("Digite um valor p tamanho dos vetores:\n");
    scanf("%d", &n);
    float *A=(float*) malloc(n*sizeof(float));
    float *B=(float*) malloc(n*sizeof(float));
    float *SOMA=(float*) malloc(n*sizeof(float));
    SOMA[0]=0;
    if (A==NULL||B==NULL)
        return 1;
    printf("Digite os valores do vetor A de %d posicoes:\n",n);
    for (int i = 0; i < n; i++){
        scanf("%f", &A[i]);
    }
    printf("Digite os valores do vetor A de %d posicoes:\n",n);
    for (int i = 0; i < n; i++){
        scanf("%f", &B[i]);
    }
    printf("O vetor soma eh:\t");
    for (int i = 0; i < n; i++){
        SOMA[i]=A[i]*B[i];
        printf("%.2f\t",SOMA[i]);
    }
    free(A);
    free(B);
    free(SOMA);
    return 0;
}