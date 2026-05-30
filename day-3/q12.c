//prog to find the lcm of two no
#include<stdio.h>
int main(){
    int a,b,lcm;
    printf("enter the two numbers:");
    scanf("%d %d",&a,&b);
    lcm=(a>b)?a:b; //to check which no is greatest
    while(1){
        if(lcm%a==0&&lcm%b==0){
            printf("lcm of %d and %d is %d",a,b,lcm);
            break;
        }
        lcm++;
    }
    return 0;
}