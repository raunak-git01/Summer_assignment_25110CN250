//prog to find missing no in an array 
#include <iostream>
using namespace std;
int main(){
    int n,i,sum=0,total,missing;
    cout<<"Enter value of n: ";
    cin>>n;
    int a[n-1];
    cout<<"Enter "<<n-1<<" elements: ";
    for(i=0;i<n-1;i++){
        cin>>a[i];
        sum+=a[i];
    }
    total=n*(n+1)/2;
    missing=total-sum;
    cout<<"Missing number="<<missing;
    return 0;
}