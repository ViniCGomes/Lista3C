#include <stdio.h>

int main(){
    float V[20],cont=0;
    int pos=0;
    printf("Digite um valor positivo:\n");
    for(int i=0;i<20;i++){
        if(scanf("%f", &V[i])!=1){
            printf("Valores numericos sao invalidos, digite um novo valor:\n");
            while (getchar() != '\n');
            i--;
            continue;
        }
        if (V[i] <= 0){
            printf("Digite um numero maior que zero:\n");
            i--;      
            continue; 
        }
        if(cont<V[i]){
            cont=V[i];
            pos=i+1;
        }
    }
    printf("O elemento de maior valor e %.2f que esta na posicao %d",cont,pos);
    return 0;
}