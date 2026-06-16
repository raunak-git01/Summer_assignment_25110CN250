//prog to find pair with given sum
#include <iostream>
using namespace std;
int main(){
    int a[100],n,sum,i,j;
    cout<<"Enter size of array: ";
    cin>>n;
    cout<<"Enter array elements: ";
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Enter the required sum: ";
    cin>>sum;
    cout<<"Pairs are:\n";
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(a[i]+a[j]==sum){
                cout<<a[i]<< " " << a[j]<<endl;
            }
        }
    }
    return 0;
}
