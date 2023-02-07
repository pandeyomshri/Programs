#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a,b,c;
    float x1,x2;
  cout<<"Enter the values of a,b,c \n";
  cin>>a>>b>>c;
  x1=(-b+sqrt(b*b-4*a*c))/(2*a);
  x2=(-b-sqrt(b*b-4*a*c))/(2*a);
  cout<<"roots are : "<<x1<<"\n"<<x2;
    return 0;
}