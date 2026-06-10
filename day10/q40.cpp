//prog to print char pyramid 
#include<iostream>
using namespace std;
int main(){
    int n=5,i,j;
    for(i=0;i<n;i++){
        char a='A';
        for(j=0;j<n-1-i;j++){
            cout<<" ";
        }
        for(j=0;j<i+1;j++){
            cout<<a;
            a++;
        }
        char b=a-2;
        if(i>0){
            for(j=0;j<i;j++){
                cout<<b;
                b--;
            }
        }
        cout<<endl;
    }
    return 0;
}