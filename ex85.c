#include <stdio.h>

int main(){
    float ANO[365],media=0;
    int menorc=0;
    for(int i=0;i<365;i++){
        printf("Digite temperatura do dia %d",i+1);
        scanf("%f", &ANO[i]);
        media=media+(ANO[i]/365);
    }
    float maior=ANO[1], menor=ANO[1];
    menor=ANO[0];
    for(int i=0;i<365;i++){
        if(maior<ANO[i])
            maior=ANO[i];
        if(menor>ANO[i])
            menor=ANO[i];
        if(ANO[i]<media)
            menorc=menorc+1;
    }
    printf("A maior temperatura do ano foi: %f\nA menor temperatura do ano foi: %f\nA media anual e: %f\nA temperatura estava %d dias abaixo da media.",maior, menor,menorc);
    return 0;
}
