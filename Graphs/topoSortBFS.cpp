// Given a DAG(take input too), print the topo sort of the graph.
#include <bits/stdc++.h>
using namespace std;

void print(vector <int> v){
	for(int i =0;i<v.size(); ++i){
		cout<<v[i]<<" ";
	}
	cout<<endl;
}
vector<int> topologicalSort(vector <int> adj[], int V){
	vector <int> indegree(V, 0);
	for(int i=0; i<V; ++i){
		for(int it : adj[i]){
			indegree[it]++;
		}
	}
	vector <int> topo(V);
	queue <int> q;
	for(int i=0;i<V;++i){
		if(indegree[i] == 0){
			q.push(i);
		}
	}
	int i = 0;
	while(!q.empty()){
		int front = q.front();
		q.pop();
		topo[i++] =  front;
		for(int x : adj[front]){
			indegree[x]--;
			if(indegree[x] == 0){
				q.push(x);
			}
		}
	}
	return topo;
}

void addEdge(vector<int> adj[], int v, int u)
{
    adj[v].push_back(u);
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
    vector <int> ans;
    ans = topologicalSort(adj, v);
    print(ans);
    return 0;
}