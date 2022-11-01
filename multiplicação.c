#include <stdio.h>
#include <stdlib.h>

int multiplicacao(int n,int n2){
    if(n2==1)
        return n;
    else
        return n+multiplicacao(n,n2-1);

}
int main(void){
    int n,n2,i;
    scanf("%d",&n);
    scanf("%d",&n2);
    i=multiplicacao(n,n2);
    printf("%d",i);
    return 0;
}
