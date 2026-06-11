//prog to find sum of two no by function 
#include<iostream>
using namespace std;
void addno(int a,int b){
    cout<<a+b;
}
int main(){
    int p,q;
    printf("enter the no's: ");
    scanf("%d %d",&p,&q);
    addno(p,q);  //func calling 
    return 0;
       
}