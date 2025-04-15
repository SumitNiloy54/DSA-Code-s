///BFS
#include <bits/stdc++.h>
using namespace std;

vector<int> adj[100];
int lev[100];

void bfs(int s)
{
    memset(lev , -1 , sizeof(lev));

    lev[s] = 0;
    queue <int> q;
    q.push(s);

    while(!q.empty()){
        int u = q.front();
        q.pop();

        for(auto v : adj[u]){
            if(lev[v] == -1){
                lev[v] = lev[u] + 1;
                q.push(v);
            }
        }
    }
}

int main()
{
    int n , m;
    cin >> n >> m;

    while(m--){
        int u , v;
        cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    bfs(1);
    cout << lev[n] << endl;
}
