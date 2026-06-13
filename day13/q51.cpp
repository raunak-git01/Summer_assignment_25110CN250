//prog to find largest and smallest element of an array
#include<iostream>
using namespace std;
int main(){
    int n,i,max,min;
    cout<<"enter the size of array:";
    cin>>n;
    int a[n];
    cout<<"enter the elements of array:";
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    max=a[0];
    min=a[0];
    for(i=0;i<n;i++){
        if(a[i]>max){
            max=a[i];
        }
        if(a[i]<min){
            min=a[i];
        }
    }
    cout<<"maximum element="<<max<<endl;
    cout<<"min element="<<min<<endl;
    return 0;
}