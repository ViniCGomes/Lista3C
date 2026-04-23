#include <stdio.h>
/* 
Esse codigo nao contempla completamente, pois no caso de haverem 3 ou mais repeticoes, havera impressao 
novamente delas. Ex 1 3 1 4 1  ,  pos 1 -> 1na 3 e 1 na 5  pos 3 -> 1 na 5 , logo faz de novo
*/
int main(){
    int VET[50];
    for(int i=0;i<50;i++){
        printf("Digite o numero para V[%d]:\t",i+1);
        scanf("%d", &VET[i]);
    }
    for(int i=0;i<50;i++){
        for(int j=i+1;j<50;j++){
            if(i!=j){
                if(VET[i]==VET[j])
                    printf("O numero %d , na posicao %d, tambem esta presente na posicao %d\n ",VET[i], i+1,j+1);
            }
        }
    }
    return 0;
}
