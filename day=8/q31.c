//prog to print char triangle 
#include<stdio.h>
int main(){
    int n=5,i,j;
    for(i=0;i<=n-1;i++){
        char ch='A';
        for(j=0;j<i+1;j++){
            printf("%c",ch);
            ch++;
        }
    printf("\n");
    }
    return 0;
}