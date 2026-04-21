#include <stdio.h>

int main(){
    int V1[20],V2[19],x=0,pos=0;

    printf("Digite os numeros: \n");
    for(int i=0;i<20;i++){
        scanf("%d",&V1[i]);
    }
    printf("Digite um numero: \n");
    scanf("%d",&x);
    for(int i=0;i<20;i++){
        if(V1[i]==x){
            pos=i;
            break;
        }
    }
    for(int i=0;i<19;i++){
        if(i>=pos)
            V2[i]=V1[i+1];
        else
            V2[i]=V1[i];
        printf("%d\t",V2[i]);
    }
    return 0;
}