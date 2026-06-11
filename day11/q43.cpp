//prog to check prime using function
#include<iostream>
using namespace std;
bool isprime(int a){
    if(a<2){
        return false;
    }
    for(int i=2;i*i<=a;i++){
        if(a%i==0)
            return false;    
    }
    return true;
}
int main(){
    int n;
    printf("enter the no: ");
    scanf("%d",&n);
    if(isprime(n)){
        cout<<"its a prime no";
    }
    else{
        cout<<"not a prime no";
    }
    return 0;
}