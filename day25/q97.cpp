//prog to merge two sorted arrays
#include <iostream>
using namespace std;
int main(){
    int a[50],b[50],c[100];
    int n1,n2;
    cout<<"Enter size of first array: ";
    cin>>n1;
    cout<<"Enter elements of first sorted array: ";
    for (int i=0;i<n1;i++)
        cin>>a[i];
    cout<<"Enter size of second array: ";
    cin>>n2;
    cout<<"Enter elements of second sorted array: ";
    for(int i=0;i<n2;i++)
        cin>>b[i];
    int i=0,j=0,k=0;
    while(i<n1&&j<n2){
        if (a[i]<=b[j])
            c[k++]=a[i++];
        else
            c[k++]=b[j++];
    }
    // Copy remaining elements of first array
    while(i<n1)
        c[k++]=a[i++];
    // Copy remaining elements of second array
    while(j<n2)
        c[k++]=b[j++];
    cout<<"Merged sorted array: ";
    for(int i=0;i<k;i++)
        cout<<c[i]<< " ";
    return 0;
}