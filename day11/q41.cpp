//prog to find sum of two no by function 
#include<iostream>
using namespace std;
void addno(int a,int b){
    cout<<a+b;
}
int main(){
    int p,q;
    cout<<"enter the no's: ";
    cin>>p>>q;
    addno(p,q);  //func calling 
    return 0;
       
}