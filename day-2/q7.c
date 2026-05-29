//prog to find the prod of a digits of a no
#include<stdio.h>.
int main(){
    int a,prod=1,ld;
    printf("enter the no:");
    scanf("%d",&a);
    while(a!=0){
        ld=a%10;
        prod*=ld;
        a/=10;
    }
    printf("the prod of the dig of a given no is %d",prod);
    return 0;
}