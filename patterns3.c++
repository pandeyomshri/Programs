#include<iostream>
using namespace std;
int main()
{
    int i,j,n,k=1;
    char num=65;
    cout<<"Enter number of rows";
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
        {
            cout<<num;
        }
        cout<<endl;
            num++;
    }
//   cout<<num;;
    return 0;
}