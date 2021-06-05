#include <bits/stdc++.h>
using namespace std;

void dfsRec(vector<int> adj[], int v, bool *visited)
{
    visited[v] = true;
    cout << v << " ";
    for (int x : adj[v])
    {
        if (!visited[x])
        {
            dfsRec(adj, x, visited);
        }
    }
}

void dfs(vector<int> adj[], int v)
{
    bool visited[v];
    for (int i = 0; i < v; ++i)
        visited[i] = false;
    for (int i = 0; i < v; ++i)
    {
        if (!visited[i])
        {
            dfsRec(adj, i, visited);
        }
    }
}

void addEdge(vector<int> adj[], int v, int u)
{
    adj[v].push_back(u);
    adj[u].push_back(v);
}

int main()
{
    int v;
    cin >> v;
    int n;
    cin >> n;
    vector<int> adj[v];
    for (int i = 0; i < n; ++i)
    {
        int x, y;
        cin >> x >> y;
        addEdge(adj, x, y);
    }
    dfs(adj, v);
    return 0;
}