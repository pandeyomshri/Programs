#include<iostream>
using namespace std;
int main()
{ 
  int a[100];
  int i,j,k=0,n;
  cout<<"Enter the size of the array ";
  cin>>n;
  cout<<"Enter the elements : "<<endl;
  for(i=0;i<n;i++)
  cin>>a[i];
  for(i=0;i<n;i++)
  {
      for(j=0;j<n;j++)
      {
          if(a[i]==a[j])
          k++;
      }
      if(k==1)
      cout<<a[i];
      k=0;
  }
    return 0;
}