//prog to sort in descending order 
#include<iostream>
using namespace std;
void sorting(int a[],int n){
    int i,j;
    for(i=n-1;i>0;i--){
        for(j=0;j<i;j++){
            if(a[j]>a[j+1]){
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}
int main(){
    int n,i;
    cout<<"enter the size of the array:";
    cin>>n;
    int a[n];
    cout<<"enter the array elements:";
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    sorting(a,n);
    cout<<"sorted array in descending order:";
    for(i=n-1;i>0;i--){
        cout<<a[i]<<" ";
    }
    return 0;
}