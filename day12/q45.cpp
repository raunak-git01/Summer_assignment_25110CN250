//prog to check palindrome by using function 
#include<iostream>
using namespace std;
bool ispal( int a){
    if(a<0||(a%10==0 && a!=0)){
        return false;
    }
    int n=a;
    int ld,rev=0;
    while(n>0){
        ld=n%10;
        rev=rev*10+ld;
        n/=10;
    }
    return(rev==a);
}
int main(){
    int x;
    cout<<"enter the no: ";
    cin>>x;
    if(ispal(x)==true){
        cout<<"its a palindrome";
    }
    else cout<<"not a palindrome";
    return 0;
}