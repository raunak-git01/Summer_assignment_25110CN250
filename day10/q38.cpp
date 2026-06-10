//prog to print reverse star pyramid 
#include<iostream>
using namespace std;
int main(){
    int n=5,i,j;
    for(i=0;i<n;i++){
        for(j=0;j<i;j++){
            cout<<" ";
        }
        for(j=2*n;j>2*i+1;j--){
            cout<<"*";
        }
        cout<<endl;
        
    }
    return 0;
}