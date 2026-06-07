//prog to find factorial by recursion 
#include<stdio.h>
long long fact(int n){
    if(n==0||n==1){
        return 1;
    }
    return n*fact(n-1);//it will call the function itself 
}
int main(){
    int n;
    printf("enter the no:");
    scanf("%d",&n);
    printf("the factorial of %d is %d",n,fact(n));   
     return 0;
}