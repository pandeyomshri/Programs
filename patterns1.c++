#include<iostream>
using namespace std;
int main()
{
    int i,j,n,num=1;
    cout<<"enter number of rows : ";
    cin>>n;
    for(i=0;i<=n-1;i++)
    {
       for(j=0;j<=i;j++)
       {
           cout<<num<<" ";
           num+=1;
       }
       cout<<endl;

    }
//   cout<<"hello world";
    return 0;
}