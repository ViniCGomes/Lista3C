#include <stdio.h>
#include<stdlib.h> //lib do random
#define M 50 //definir um K para testar o código
#include <time.h> //seed do tempo do pc

/*
versao.1 repetindo tudo todas as vezes 
int main(){
    int vet[M];

    srand(time(NULL));
    printf("Vet:");
    for(int i=0;i<M;i++){
        vet[i]=rand()%100;
        printf("%d, ",vet[i]);
    }
    for(int i=0;i<M;i++){
        for(int j=0;j<M;j++){
            printf("\n %d repete na posicao %d",vet[i],j);
        }
    }

    return 0;
} */
int main(){
    int vet[M];

    srand(time(NULL));
    printf("Vet:");
    for(int i=0;i<M;i++){
        vet[i]=rand()%100;
        printf("%d, ",vet[i]);
    }
    for(int i=0;i<M;i++){
        for(int j=0;j<M;j++){
            if(vet[i]==vet[j] && i!=j){
                if(i>j){
                    break;
                }
                printf("\n %d repete na posicao %d",vet[i],j);
            }
        }
    }

    return 0;
} 