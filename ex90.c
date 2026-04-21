#include <stdio.h>

int main(){
    int V[30],cont=0,x;
    for(int i=0;i<30;i++){
        printf("V[%d]:\t",i+1);
        scanf("%d",&V[i]);
    }
    printf("Digite um numero: \n");
    scanf("%d",&x);
    for(int i=0;i<30;i++){
        if(x==V[i])
        cont=cont+1;
    }
    printf("O numero %d aparece %d vezes.",x,cont);
    return 0;
}