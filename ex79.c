#include <stdio.h>

int main(){
    float N[20],m=0;
    int c=0;
    printf("Digite as notas dos alunos: \n");
    for(int i=0;i<20;i++){
        scanf("%f", &N[i]);
        m=m+(N[i]/20);
    }
    for(int i=0;i<20;i++){
        if(N[i]>=m)
            c=c++;
    }
    printf("A media e : %.2f\n %d alunos ficaram acima da media",m,c );
    return 0;
}