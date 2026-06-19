//prog to print the diagonal sum 
#include<iostream>
using namespace std;
int main(){
    int n,i,j,sum=0;
    cout<<"enter the order of square matrix:";
    cin>>n>>n;
    int A[n][n];
    cout<<"enter the elemnets of the martrix A\n";
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cin>>A[i][j];
        }
    }
    cout<<"diagonal elements are:";
    for(i=0;i<n;i++){
        sum+=A[i][i];
        cout<<A[i][i]<<" ";
    }
    cout<<endl<<"the sum of diagonal elements is:"<<sum;
    return 0;
}