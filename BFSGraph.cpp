#include <bits/stdc++.h>
typedef unsigned long long int ll;
using namespace std;
// V denotes the number of nodes
// adjList is the list with neighbours info
vector<int> BFSofGraph(int V, vector<int> adjList[])
{
    int visitedNodes[V + 1] = {0}; // mark all as not visited;
    visitedNodes[1] = 1;
    queue<int> q;
    q.push(1); // as it is one based indexing
    vector<int> BFS;
    while (!q.empty())
    {
        int node = q.front();
        q.pop();
        BFS.push_back(node);
        for (auto it : adjList[node])
        {
            if (!visitedNodes[it])
            {
                visitedNodes[it] = 1;
                q.push(it);
            }
        }
    }
    return BFS;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n, m;
    cin >> n >> m;
    vector<int> adjList[n + 1];
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adjList[u].push_back(v);
        // remove this line when it is directed graph and space complexity is O(E);
        adjList[v].push_back(u);
    }

    vector<int> bfs = BFSofGraph(n, adjList);

    for (auto it : bfs)
    {
        cout << it << " ";
    }
}
