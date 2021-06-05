#include <bits/stdc++.h>
using namespace std;

void Bfs(vector<int> adj[], int v, bool *visited)
{
    queue<int> q;
    q.push(v);
    visited[v] = true;
    while (!q.empty())
    {
        int front = q.front();
        q.pop();
        cout << front << " ";
        for (int x : adj[front])
        {
            if (!visited[x])
            {
                q.push(x);
                visited[x] = true;
            }
        }
    }
}

void bfs(vector<int> adj[], int v)
{
    bool visited[v];
    for (int i = 0; i < v; ++i)
        visited[i] = false;
    for (int i = 0; i < v; ++i)
    {
        if (visited[i] == false)
        {
            Bfs(adj, i, visited);
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
    bfs(adj, v);
    return 0;
}