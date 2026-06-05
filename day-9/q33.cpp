//prog to print the reverse triangle
//tried to solve in c++
#include<iostream>
using namespace std;
int main(){
    int n=5,i,j;
    for(i=0;i<n;i++){
        int a=1;
        for(j=n;j>i;j--){
            cout<<a;
            a++;
        }
    cout<<endl;    
    }
    return 0;
}