//prog to find max freq element 
#include <iostream>
using namespace std;
int main(){ 
    int a[100],n,i,j;
    int maxFreq=0,element;
    cout<<"Enter size of array: ";
    cin>>n;
    cout<<"Enter array elements: ";
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n;i++){
        int count=1;
        for(j=i+1;j<n;j++){
            if(a[i]==a[j]){
                count++;
            }
        }
        if(count>maxFreq){
            maxFreq=count;
            element=a[i];
        }
    }
    cout<<"Element with maximum frequency = " <<element<<endl;
    cout<<"Frequency = "<<maxFreq<<endl;
    return 0;
}
