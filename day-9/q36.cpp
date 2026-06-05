//prog to print hollow square pattern 
#include<iostream>
using namespace std;
int main(){
    int n=5,i,j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i==0||i==(n-1)||j==0||j==(n-1)){
                //i=0,n-1 for frst and last row
                //j=0,n-1 for first and last column
                cout<<"*";
            }
            else{
                cout<<" ";
            }  
    }
    cout<<endl;    
}   
    return 0;
}