//prog to find the range of armstrong no
#include<stdio.h>
#include<math.h>
int main(){
    int a,b,num,temp,count,rem;
    int sum;
    printf("enter the range: ");
    scanf("%d %d", &a, &b);
    printf("armstrong no bw %d and %d are:",a,b);
    for(num=a;num <=b;num++){
        temp=num;
        count=0;
        while(temp>0) {
            count++;
            temp/=10;
        }
        temp=num;
        sum=0;
        while(temp>0){
            rem=temp%10;
            sum+=pow(rem,count);
            temp/=10;
        }
        if(sum==num){
            printf("%d ", num);
        }
    }
    return 0;
}