//prog for bubble sort 
#include<iostream>
using namespace std;
int main(){
    int n,i,j;
    cout<<"enter the size of the array:";
    cin>>n;
    int a[n];
    cout<<"enter the elements of the array:";
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=n-1;i>0;i--){
        for(j=0;j<i;j++){
            if(a[j]>a[j+1]){
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    cout<<"sorted array:";
    for(i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}