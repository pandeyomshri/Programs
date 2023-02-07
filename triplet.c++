#include <iostream>
using namespace std;
int main()
{
    int a[100], i, j, k, n, X, count = 0;
    cout << "Enter the size of the array : ";
    cin >> n;
    cout << "Enter the elements : ";
    for (i = 0; i < n; i++)
        cin >> a[i];
    cout << "Enter the number to compare : ";
    cin >> X;
    cout << "Required triplets are " << endl;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            for (k = 0; k < n; k++)
            {
                if (i != j && j != k && i != k)
                {
                    if (a[i] + a[j] + a[k] == X)
                    {

                        cout << a[i] << " " << a[j] << " " << a[k] << endl;
                        count++;
                        break;
                    }
                }
            }
        }
    }
    cout << "total triplets are : " << count;
    return 0;
}