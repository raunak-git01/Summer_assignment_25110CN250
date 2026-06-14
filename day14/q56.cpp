//prog to find the duplicates in an array
#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter "<<n<<" elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Duplicate elements are: ";
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count>0){
            int printed=0;
            for(int k=0;k<i;k++){
                if(arr[i]==arr[k]){
                    printed=1;
                    break;
                }
            }
            if(printed==0){
                cout<<arr[i]<<" ";
            }
        }
    }
    return 0;
}
