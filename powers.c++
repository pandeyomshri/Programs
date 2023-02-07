#include<iostream>
using namespace std;
int main()
{
    int i,j,x,n;
    cout<<"Enter the value of x and n :";
    cin>>x>>n;
    if(n==0)
    x=0;
    else
    {
    for(i=0;i<n;i++)
    x=x*x;
    }
  cout<<x;
    return 0;
}