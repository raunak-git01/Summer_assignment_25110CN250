//prog to find the reverse of a no
#include<stdio.h>
int main(){
    int a,rev=0,ld;
    printf("enter the no:");
    scanf("%d",&a);
    while(a!=0){
        ld=a%10;
        rev=rev*10+ld;
        a/=10;
    }
    printf("the rev of a given no is %d",rev);
    return 0;
} 