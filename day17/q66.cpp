//prog to union of arrays
#include <iostream>
#include <set>
using namespace std;
int main(){
    int n1, n2;
    cout<<"Enter size of first array: ";
    cin>>n1;
    int a[n1];
    cout<<"Enter elements of first array: ";
    for(int i=0;i<n1;i++){
        cin>>a[i];
    }
    cout<<"Enter size of second array: ";
    cin>>n2;
    int b[n2];
    cout<<"Enter elements of second array: ";
    for(int i=0;i<n2;i++){
        cin>>b[i];
    }
    set<int> s;
    for(int i=0;i<n1;i++){
        s.insert(a[i]);
    }
    for(int i=0;i<n2;i++){
        s.insert(b[i]);
    }
    cout<<"Union of arrays: ";
    for(int x : s){
        cout<<x<<" ";
    }
    return 0;
}