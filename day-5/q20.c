//prog to check the largest prime factor
#include <stdio.h>
int main(){
    int n,i,j,largest=0,count;
    printf("Enter a number: ");
    scanf("%d",&n);
    for (i=2;i<=n;i++){
        if(n%i==0){   // cond to check i is a factor
            count=1;
            for (j=2;j<=i/2;j++){
                if(i%j==0){
                    count=0;//to check i is a prime or not 
                    break;
                }
            }
            if(count){
                largest=i;
            }
        }
    }
    printf("Largest prime factor=%d", largest);
    return 0;
}