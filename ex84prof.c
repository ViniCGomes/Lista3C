#include <stdio.h>
#define M 100

int main(){
    int a[M], b[M], soma[M];
    int n;
    printf("N (valor entre 1 e 100): ");
    scanf("%d", &n);
    while(n<1 || n>100){
        printf("N ");
    }
    return 0;
}