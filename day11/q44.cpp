//prog to find factorial using func
#include<iostream>
using namespace std;
int fact(int a){
    int ans=1;
    if(a==0||a==1){
        return 1;
    }
    for(int i=1;i<=a;i++){
        ans=ans*i;
    }
    return ans;
} 
int main(){
    int n;
    cout<<"enter the no: ";
    cin>>n;
    int res=fact(n);
    cout<<res;
    return 0;
}