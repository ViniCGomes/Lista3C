#include <stdio.h>

int main(){
    float V[20],cont=0;
    int pos=1;
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
    }
    cont=V[0];
    for(int i=1;i<20;i++){
        if(cont>V[i]){
            cont=V[i];
            pos=i+1;
        }
    }
    printf("O elemento de menor valor e %.2f que esta na posicao %d",cont,pos);
    return 0;
}