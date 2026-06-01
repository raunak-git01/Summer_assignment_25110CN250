//prog to check the strong no
#include<stdio.h>
int main(){
    int n,fact,ld,sum=0,i,temp;
    printf("enter the no: ");
    scanf("%d",&n);
    temp=n;
    while(n>0){
        ld=n%10;
        fact=1;//it is declared here to reset the fact back to 1 everytime
        for(i=1;i<=ld;i++){
            fact*=i;
        }
        sum+=fact;    
        n/=10;
    }
    if(temp==sum){
        printf("%d is the strong no",temp);
    }
    else{
        printf("%d is not the strong no",temp);
    }
    return 0;
}