//prog to find the transpose of the matrix 
#include<iostream>
using namespace std;
int main(){
    int r,c,i,j;
    cout<<"enter rows and columns:";
    cin>>r>>c;
    int A[r][c];
    cout<<"enter the elemnets of the martrix A\n";
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            cin>>A[i][j];
        }
    }
    cout<<"the transpose of matrix A is\n";
    for(j=0;j<c;j++){
        for(i=0;i<r;i++){
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
    