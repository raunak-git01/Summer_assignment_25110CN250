//prog to print even and odd elements of an array 
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
    cout<<"even elements:";
    for(i=0;i<n;i++){
        if(a[i]%2==0){
            cout<<a[i]<<" ";
        }
    }
    cout<<endl<<"odd elements:";
    for(i=0;i<n;i++){
        if(a[i]%2!=0){
            cout<<a[i]<<" ";
        }
    }
    return 0;
}
    

    