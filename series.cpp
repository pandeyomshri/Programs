#include<iostream>
#include<math.h>
#include<cmath>
using namespace std;
int main()
{
    int n,s=0;
    cout<<"Enter the number : ");
    cin>>n;
    for(int i=1;i<=n;i++)
    {
     s=s+ i/fact(n-1) ;  
    }
    cout<<s;
    return 0;

}