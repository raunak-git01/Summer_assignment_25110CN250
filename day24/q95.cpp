//prog to find longest word
#include <iostream>
using namespace std;
int main(){
    char str[200],word[100],longest[100];
    int i=0,j=0;
    int len=0,maxLen=0;
    cout<<"Enter a sentence: ";
    cin.getline(str,200);
    while (1){
        if (str[i]!=' '&&str[i]!='\0'){
            word[j]=str[i];
            j++;
            len++;
        } else{
            word[j]='\0';   
            if (len>maxLen) {
                maxLen=len;
                int k=0;
                while(word[k]!='\0') {
                    longest[k]=word[k];
                    k++;
                }
                longest[k]='\0';
            }
            j=0;
            len=0;
            if(str[i]=='\0')
                break;
        }
        i++;
    }
    cout<<"Longest word: "<<longest<<endl;
    cout<<"Length: "<<maxLen<<endl;
    return 0;
}