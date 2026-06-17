// prog to merge arrays
#include<iostream>
using namespace std;
int main(){
    int n1,n2,c[100];
    cout<<"enter the size of the array_1:";
    cin>>n1;
    int a[n1];
    cout<<"enter the size of the array_2:";
    cin>>n2;
    int b[n2];
    cout<<"enter the array_1 elements:";
    for(int i=0;i<n1;i++){
        cin>>a[i];
    }
    cout<<"enter the array_2 elements:";
    for(int i=0;i<n2;i++){
        cin>>b[i];
    }
    for(int i=0;i<n1;i++){
        c[i]=a[i];
    }
    for(int i=0;i<n2;i++){
        c[n1+i]=b[i];
    }
    cout<<"merged array:";
    for(int i=0;i<n1+n2;i++){
        cout<<c[i]<<" ";
    }
    return 0;
}