#include <stdio.h>

int main(){
    float V[20];
    for(int i=0;i<20;i++){
        scanf("%f",&V[i]);
    }
    for(int i=19;i>=0;i--){
        printf("%.2f\t",V[i]);
    }
    return 0;
}