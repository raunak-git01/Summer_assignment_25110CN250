//prof to recursive reverse no
#include<stdio.h> 
int reverse(int n,int rev){
    if(n==0){
        return rev;
    }
    return reverse(n/10 , rev*10 + (n%10));
}
int main(){
    int n;
    printf("enter the no:");
    scanf("%d",&n);
    int ans=reverse(n,0);
    printf("reversed no : %d",ans);
    return 0;
}
