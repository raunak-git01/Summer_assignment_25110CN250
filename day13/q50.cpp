//prog to print the sum and avg of array 
#include<iostream>
using namespace std;
int main(){
    int n,i,sum=0;
    cout<<"enter the size of array:";
    cin>>n;
    int a[n];
    cout<<"enter the elements of array:";
    for(i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
    }
    double avg=(double) sum/n;
    cout<<"sum="<<sum<<endl;
    cout<<"avg="<<avg<<endl;
    return 0;
}