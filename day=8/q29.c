//prog to print half pyramid pattern
#include<stdio.h>
int main(){
    int n,i,j;
    printf("enter the no:");
    scanf("%d",&n);
    for(i=0;i<=n-1;i++){
        for(j=0;j<i+1;j++){
            printf("*");
        }
    printf("\n");  
    }
    return 0;

}