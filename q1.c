//program to calculate the sum of first n ntural no 
#include <stdio.h>
int main (){
    int a,i,sum=0;
    printf("enter the natural no");
    scanf("%d",&a);
    for(i=1 ;i<=a;i++){
        sum=sum+i;
    }
    printf("the sum first %d natural no is:%d\n",a,sum); 
    return 0;
}