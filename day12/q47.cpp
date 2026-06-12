//prog to print fibonacci using func
#include<iostream>
using namespace std;
void fibonacci(int n)
{
    int a=0,b=1,c;
    cout<<"Fibonacci Series: ";
    for (int i=1;i<=n;i++)
    {
        cout<<a<<" ";
        c=a+b;
        a=b;
        b=c;
    }
}
int main()
{
    int x;

    cout<<"Enter the number of terms: ";
    cin>>x;
    fibonacci(x);
    return 0;
}