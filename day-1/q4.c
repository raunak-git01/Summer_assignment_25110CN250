// prog to find the count digits in a no
#include<stdio.h>
int main(){
    int num,i,ld,count=0;
    printf("enter the given no");
    scanf("%d",&num);
    int b=num;
    if(num==0)
       count=1;
    else{
        while(num!=0){
            count++;
            num=num/10;
        }
    }
    printf("the num of count digits in %d is %d",b,count);
    return 0;
}