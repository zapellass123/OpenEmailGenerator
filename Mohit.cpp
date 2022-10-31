#include <iostream>
using namespace std;
int main()
{
    cout << "Enter the size of Matrices\n";
    int n;
    cin >> n;
    int a[n][n], b[n][n], r[n][n] = {0};
    cout << "Enter the elements of matrix 1\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    cout << "Enter the elements of matrix 2\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> b[i][j];
        }
    }
    cout << "A*B=\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            r[i][j] = 0;
            for (int k = 0; k < n; k++)
            {
                r[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << r[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}