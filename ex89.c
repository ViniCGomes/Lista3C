#include <stdio.h>

int main(){
    int V1[15],V2[15],cont=0;
    
    for(int i=0;i<15;i++){
        printf("V1[%d]:\t",i+1);
        scanf("%d",&V1[i]);
    }
    for(int i=0;i<15;i++){
        printf("V2[%d]:\t",i+1);
        scanf("%d",&V2[i]);
         if(V1[i]==V2[i])
            cont=cont+1;
    }
    printf("V1 e V2 possuem %d vezes os mesmos elementos nas mesmas posicoes",cont);
    return 0;
}