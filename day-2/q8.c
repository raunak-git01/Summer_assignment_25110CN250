//prog to find whether the no is palindrome or not 
#include<stdio.h>
int main(){
    int a,rev=0,ld;
    printf("enter the no:");
    scanf("%d",&a);
    int b=a;
    while(a!=0){
        ld=a%10;
        rev=rev*10+ld;
        a/=10;
    }
        if(b==rev){
            printf("the given no is a palindrome");
    }
        else{
            printf("the no is not a palindrome");
    }

    return 0;
} 