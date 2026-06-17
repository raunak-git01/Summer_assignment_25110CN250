//prog to find common elements
#include<iostream>
using namespace std;
int main(){
    int n1,n2,i,j,c[100];
    cout<<"enter the size of the array_1:";
    cin>>n1;
    int a[n1];
    cout<<"enter the size of the array_2:";
    cin>>n2;
    int b[n2];
    cout<<"enter the array_1 elements:";
    for(i=0;i<n1;i++){
        cin>>a[i];
    }
    cout<<"enter the array_2 elements:";
    for(i=0;i<n2;i++){
        cin>>b[i];
    }
    cout<<"common elements are:";
    for(i=0;i<n1;i++){
        for(j=0;j<n2;j++){
            if(a[i]==b[j]){
                cout<<a[i]<<" ";
                break;
            }
        }
    }
    return 0;
}