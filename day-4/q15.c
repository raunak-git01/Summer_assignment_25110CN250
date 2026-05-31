//prog to check the armstrong no
#include<stdio.h>
#include<math.h>
int main (){
    int a,temp,temp1,i,ld,rem,count=0,sum=0;
    printf("enter the no:");
    scanf("%d",&a);
    temp=a;
    temp1=temp;
    while(a>0){
        ld=a%10;
        count++;
        a/=10;        
    }
    while(temp>0){
        rem=temp%10;
        sum+=pow(rem,count);
        temp/=10;
    }
    if(temp1==sum){
        printf("the no is an armstrong no");
    }
    else{
        printf("the no is not an armstrong no");
    }
    return 0;
} 