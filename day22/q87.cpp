//prog to count the freq of a cahracter
#include<iostream>
using namespace std;
int main(){
    char str[100];
    int count;
    cout<<"Enter a string: ";
    cin.getline(str,100);
    for(int i=0;str[i]!='\0';i++){
        count=1;
        if(str[i]=='*')
            continue;
        for(int j=i+1;str[j]!='\0';j++){
            if(str[i]==str[j]){
                count++;
                str[j]='*';   
            }
        }
        cout<<str[i]<<" : "<<count<<endl;
    }
    return 0;
} 
