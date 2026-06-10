//prog to print no pyramid 
#include<iostream>
using namespace std;
int main(){
    int n=5,i,j;
    for(i=0;i<n;i++){
        int a=1;
        for(j=0;j<n-1-i;j++){
            cout<<" ";
        }
        for(j=0;j<i+1;j++){
            cout<<a;
            a++;
        }
        if(i>0){
            for(j=0;j<i;j++){
                cout<<i-j;
            }
        }
        cout<<endl;
    }
    return 0;
}