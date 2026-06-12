//prog to find max by function 
#include<iostream>
using namespace std;
int maxno(int a,int b){
    if(a>b)
        return a;
    else return b;    
}
int main(){
    int p,q;
    cout<<"enter the no's: " ;
    cin>>p>>q;
    int max=maxno(p,q);
    cout<<"maximum no is "<<max;
    return 0;
}