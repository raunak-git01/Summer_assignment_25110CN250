// prog to print multiplication table of a given no 
#include<stdio.h>
int main(){
    int num,i;
    printf("enter the given no:");
    scanf("%d",&num);
    printf("the multiplication table of the given no is:\n");
    for(i=1;i<=10;i++){
        printf("%d*%d=%d\n",num,i,num*i);
    }
    return 0;
}