//prog to input and display array 
#include<iostream>
using namespace std;
int main(){
    int i,n;
    cout<<"enter the size of array:";
    cin>>n;
    int a[n];
    cout<<"enter array elements:";
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"array elements are:";
    for(i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;

}