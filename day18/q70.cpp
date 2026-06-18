//prog of array sorting by selection sort 
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
    for(i=0;i<n-1;i++){
        int mini=i;
        for(j=i;j<n;j++){
            if(a[j]<a[mini]){
                int temp=a[j];
                a[j]=a[mini];
                a[mini]=temp;
            }
        }
    }
    cout<<"sorted array:";
    for(i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}