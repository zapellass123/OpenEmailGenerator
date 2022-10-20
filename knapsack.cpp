#include <bits/stdc++.h>
using namespace std;
int knapSackRecursive(int val[], int wt[], int n, int capacity)
{
    // base condition
    //  we know that when array size is 0 or there is 0 capacity
    //  we have no profit
    if (n == 0 || capacity == 0)
    {
        return 0;
    }

    // choice diagram
    if (wt[n - 1] <= capacity)
    {
        return max(val[n - 1] + knapSackRecursive(val, wt, n - 1, capacity - wt[n - 1]), knapSackRecursive(val, wt, n - 1, capacity));
    }
    else
    {
        return knapSackRecursive(val, wt, n - 1, capacity);
    }
}
int DP[100][1002];
int knapSackMemo(int val[], int wt[], int n, int capacity)
{
    if (n == 0 || capacity == 0)
    {
        return 0;
    }
    if (DP[n][capacity] != -1)
    {
        return DP[n][capacity];
    }
    // choice diagram
    if (wt[n - 1] <= capacity)
    {
        return DP[n][capacity] = max(val[n - 1] + knapSackMemo(val, wt, n - 1, capacity - wt[n - 1]), knapSackMemo(val, wt, n - 1, capacity));
    }
    else
    {
        return DP[n][capacity] = knapSackMemo(val, wt, n - 1, capacity);
    }
}
int knapSackTabulation(int val[], int wt[], int n, int capacity)
{
    int dp[n + 1][capacity + 1];

    // base conditon(initialization)
    for (int i = 0; i < n + 1; i++)
    {
        for (int j = 0; j < capacity + 1; j++)
        {
            // change n with i
            if (i == 0 || j == 0)
            {
                dp[i][j] = 0;
            }
        }
    }

    // choice diagram -- change n with i and capacity with k
    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 1; j < capacity + 1; j++)
        {
            if (wt[i - 1] <= j)
            {
                dp[i][j] = max(val[i - 1] + dp[i - 1][j - wt[i - 1]], dp[i - 1][j]);
            }
            else
            {
                // wt[i-1] > j
                dp[i][j] = dp[i - 1][j];
            }
        }
    }
    return dp[n][capacity];
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n;
    cin >> n;
    int capacity;
    cin >> capacity;
    int wt[n], val[n];
    for (int i = 0; i < n; i++)
    {
        cin >> wt[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> val[i];
    }
    memset(DP, -1, sizeof(DP));

    int maxProfitRecursive = knapSackRecursive(val, wt, n, capacity);
    int maxProfitMemo = knapSackMemo(val, wt, n, capacity);
    int maxProfitTabu = knapSackTabulation(val, wt, n, capacity);

    cout << maxProfitRecursive << endl;
    cout << maxProfitMemo << endl;
    cout << maxProfitTabu << endl;
    return 0;
}
