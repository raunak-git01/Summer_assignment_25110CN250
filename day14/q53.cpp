//prog to find an element by linear search 
#include<iostream>
using namespace std;
int main(){
    int n,key,i;
    cout<<"enter the size of the array:";
    cin>>n;
    int a[n];
    cout<<"enter the elements of the array:";
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"enter the element to be searched:";
    cin>>key;
    int pos=-1;
    for(i=0;i<n;i++){
        if(a[i]==key){
            pos=i;
            break;
        }
    }
    if(pos==-1){
        cout<<"element not found";
    }
    else{
        cout<<"element found at index "<<pos<<endl;
    }
    return 0;
}