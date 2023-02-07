#include <iostream>
using namespace std;
int main()
{
    int i, j, k, n = 5;
    for (i = 1; i <= n; i++)
    {
        k = i;
        for (int t = n - i; t > 0; t--)
            cout << " ";
        for (j = 1; j <= i; j++)
        {
            cout << k;
            k++;
        }
        cout << endl;
    }
    //   cout<<"hello world";
    return 0;
}