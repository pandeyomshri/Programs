#include<stdio.h>
#include<math.h>
int main()
{
  int i, n, a[10], b[10], c = 0, d = 0, e = 0;
  printf ("size:");
  scanf ("%d", &n);
  printf ("enter:");
  for (i = 0; i < n; i++)
    scanf ("%d", &a[i]);
  for (i = 0; i < n; i++)
    {
      if (a[i] > 0)
	{
	  c++;
	}
      else if (a[i] < 0)
	   {d++;}
      else
     {	e++;}
    }
  //printf("%d,%d,%d",c,d,e);
  float x, y, z;
  x = (c / n);
  y = (d / n);
  z = (e / n);
//   printf ("%f\n%f\n%f", x, y, z);
  printf("%0.1f\n",x);
  printf("%0.1f\n",y);
  printf("%0.1f",z);
  return 0;
}