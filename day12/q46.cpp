//prog to check armstrong no by using func
#include<iostream>
#include<math.h>
using namespace std;
int countdig(int n){
    int count=0;
    while(n!=0){
        count++;
        n/=10;
    }
    return count;
}
bool isarmstr(int n){
    int digits=countdig(n);
    int temp=n;
    int sum=0;
    while(temp!=0){
        int ld=temp%10;
        sum+=pow(ld,digits);
        temp/=10;
    }
    return sum==n;
}
int main(){
    int x;
    cout<<"enter the no:";
    cin>>x;
    if(isarmstr(x)==true){
        cout<<x<<" is an armstrong no";
    }
    else {
        cout<<x<<" is not an armstrong no";
    }
    return 0;
}