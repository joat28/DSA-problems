#include <bits/stdc++.h>
using namespace std;

void Bfs(vector<int> adj[], int node, bool *visited, int *dist)
{
    queue<int> q;
    q.push(node);
    dist[node] = 0;
    visited[node] = true;
    while (!q.empty())
    {
        int front = q.front();
        q.pop();
        // cout << front << " ";
        for (int x : adj[front])
        {
            if (!visited[x])
            {
                dist[x] = dist[front] + 1;
                q.push(x);
                visited[x] = true;
            }
        }
    }
}

void bfs(vector<int> adj[], int v, int source)
{
    bool visited[v];
    int dist[v];

    for (int i = 0; i < v; ++i)
        visited[i] = false;
    for (int i = 0; i < v; ++i)
        dist[i] = INT_MAX;

    Bfs(adj, source, visited, dist);
    for (int i = 0; i < v; ++i)
        cout << dist[i] << " ";
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
    bfs(adj, v, 0);
    return 0;
}