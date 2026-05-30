//prog to find the range of prime no
#include<stdio.h>
int main(){
    int a,b,i,j;
    printf("enter the two no :");
    scanf("%d %d",&a,&b);
    for(i=a;i<=b;i++){
        if(i<2){
            continue;
        }
        for(j=2;j<=i;j++){
            if(i%j==0){
                break;
            }
        }
        if(j==i){
            printf("%d ",i);
        }
    }
    return 0;
}