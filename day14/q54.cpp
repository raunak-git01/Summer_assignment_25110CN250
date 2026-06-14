//prog to find the freq of an element in an array
#include<iostream>
using namespace std;
int main(){
    int n,key,i,count=0;
    cout<<"enter the size of the array:";
    cin>>n;
    int a[n];
    cout<<"enter the elements of the array:";
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"enter the element whose freq is to be searched:";
    cin>>key;
    for(i=0;i<n;i++){
        if(a[i]==key){
            count++;
        }
    }
    if(count==0){
        cout<<"no such element is present";
    }
    else{
        cout<<"freq of the element is  "<<count<<endl;
    }
    return 0;
}