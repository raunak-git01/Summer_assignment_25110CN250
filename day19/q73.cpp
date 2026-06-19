//prog to add two matrices 
#include<iostream>
using namespace std;
int main(){
    int r,c,i,j;
    cout<<"enter rows and columns:";
    cin>>r>>c;
    int A[r][c],B[r][c],Sum[r][c];
    cout<<"enter the elemnets of the martrix A\n";
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            cin>>A[i][j];
        }
    }
    cout<<"enter the elements of the second matrix\n";
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            cin>>B[i][j];
        }
    }

    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            Sum[i][j]=A[i][j]+B[i][j];
        }
    }
    cout<<"sum of matrix A and B is\n";
     
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
           cout<<Sum[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}