#include<iostream>
using namespace std;

int fibo(int n)
{
    if(n==0||n==1)
    {
        return n;
    }
    else
    {
        return (fibo(n-1)+fibo(n-2));
    }
}
int main()
{
    int f,x,i;

    cout<<endl<<"Enter no. of elements in The Fibonacci Series :  ";
    cin>>x;

    f=fibo(x);

    cout<<endl<<"Fibonacci Series : ";
    for(i=0;i<x;i++)
    {
    cout<<fibo(i)<<"   ";
    }

    return 0;
}