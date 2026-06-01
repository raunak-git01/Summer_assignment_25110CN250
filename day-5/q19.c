//prog to print factors of a no
#include<stdio.h>
int main(){
    int a,i;
    printf("enter the no:");
    scanf("%d",&a);
    printf("factors of %d are: ",a);
    for(i=1;i<=a;i++){
        if(a%i==0){
            printf("%d ",i);
        }
    }
    return 0;
}