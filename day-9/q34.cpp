//prog to print reverse star pattern
#include<iostream>
using namespace std;
int main(){
    int n=5,i,j;
    for(i=0;i<n;i++){

        for(j=n;j>i;j--){
            cout<<"*";
        }
    cout<<endl;    
    }
    return 0;
}