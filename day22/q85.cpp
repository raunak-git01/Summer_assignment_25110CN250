//prog to check if the string is palindrome or not 
#include<iostream>
using namespace std;
int main(){
    char str[100];
    int len=0,i,j;
    cout<<"enter the string:";
    cin.getline(str,100);
    while(str[len]!='\0'){
         len++;
    }
    bool palindrome=true;
    for(i=0,j=len-1;i<j;i++,j--){
        if(str[i]!=str[j]){
            palindrome=false;
            break;
        }
    }
    if(palindrome==true){
        cout<<"string is a palindrome";
    }
    else{
        cout<<"string is not an palindrome";
    }
    return 0;
}