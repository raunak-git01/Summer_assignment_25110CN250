// prog to count the set bits in a no
#include<stdio.h>
int main(){
    int n,ld,count=0;
    printf("enter the no:");
    scanf("%d",&n);
    int temp=n;
    while(n!=0){
        if(n%2==1){
            count++;
        }
        n/=2;
    }
    printf("the no of 1s in %d is %d",temp,count);
    return 0;

}