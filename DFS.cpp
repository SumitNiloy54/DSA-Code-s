/// DFS
#include <bits/stdc++.h>
#define endl '\n'
#define pb push_back
#define vi vector<int>

using namespace std;



const int mx = 1e5 + 123;
vi adj[mx]; // Adjacency list
bool visited[mx]; 
int level[mx]; 
void dfs(int u, int depth = 0)
{
    visited[u] = true;     // Mark current node as visited
    level[u] = depth;      // Set depth/level of this node

    for (auto v : adj[u]) {
        if (!visited[v]) {
            dfs(v, depth + 1); // Visit child node with increased depth
        }
    }
}

int main()
{
    int n, m;
    cin >> n >> m; // Read number of nodes and edges

    while (m--) {
        int u, v;
        cin >> u >> v;
        adj[u].pb(v); 
        adj[v].pb(u); 
    }

    dfs(1); // Start DFS from node 1

    
    cout << level[n] << endl;
}
