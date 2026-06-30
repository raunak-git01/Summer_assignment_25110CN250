//prog to sort names alphabetically
#include <iostream>
using namespace std;
int main(){
    char name[10][50], temp[50];
    int n;
    cout<<"Enter the number of names: ";
    cin>>n;
    cin.ignore();
    cout<<"Enter the names:\n";
    for(int i=0;i<n;i++)
        cin.getline(name[i], 50);
    // Bubble sort
    for (int i=0;i<n-1;i++) {
        for (int j=i+1;j<n;j++){
            int k=0;
            while (name[i][k]==name[j][k] &&
                   name[i][k]!='\0'&&
                   name[j][k]!='\0')
                k++;
            if (name[i][k]>name[j][k]){
                // Swap names manually
                int x=0;
                while (name[i][x]!='\0'){
                    temp[x]=name[i][x];
                    x++;
                }
                temp[x]='\0';
                x=0;
                while (name[j][x]!='\0'){
                    name[i][x]=name[j][x];
                    x++;
                }
                name[i][x]='\0';
                x=0;
                while (temp[x]!='\0'){
                    name[j][x]=temp[x];
                    x++;
                }
                name[j][x]='\0';
            }
        }
    }
    cout<<"\nNames in alphabetical order:\n";
    for (int i=0;i<n;i++)
        cout<<name[i]<<endl;
    return 0;
}