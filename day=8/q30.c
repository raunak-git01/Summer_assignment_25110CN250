//prog to print no triangle 
#include<stdio.h>
int main(){
    int n=5,i,j;
    for(i=0;i<=n-1;i++){
        int b=1;
        for(j=0;j<i+1;j++){
            printf("%d",b);
            b++;
        }
    printf("\n");    
    }
    return 0;
}