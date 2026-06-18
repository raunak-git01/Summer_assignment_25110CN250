//prog to search an element using binary search 
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

int binary_search(int a[],int n,int key){
    int low=0,high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(a[mid]==key){
            return mid;
        }
        else if(a[mid]<key){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return -1;
}
 
int main(){
    int n,i,j,key;
    cout<<"enter the size of the array:";
    cin>>n;
    int a[n];
    cout<<"enter the elements of the array:";
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"enter the element to be searched:";
    cin>>key;

    sorting(a,n);//to sort the array first

    int pos=binary_search(a,n,key);//to search the element

    cout<<"sorted array:";
    for(i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    if(pos!= -1){
        cout<<"element found at index "<<pos<<endl;
    }
    else{
        cout<<"element not found";
    }
    return 0;
}