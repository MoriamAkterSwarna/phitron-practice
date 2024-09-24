#include<bits/stdc++.h>

using namespace std;

const int N = 1e5 + 5; 

int dist[N];
bool vis[N]; 
vector<int> adj[N];
void bfs(int src)
{
    queue<int> q;
    q.push(src); 
    vis [src] = true;
    dist[src] = 0;

    while(!q.empty())
    {
        int node = q.front(); 
        q.pop(); 

        for(int child: adj[node])
        {
            if(!vis[child])
            {
                vis[child] = true; 
                q.push(child); 
                dist[child] = dist[node] + 1; 
            }
        }
    }
}

int main(){

    int n, e; 
    cin >> n >> e; 

    while(e--) 
    {
        int a, b; 
        cin >> a >> b; 
        adj[a].push_back(b); 
        adj[b].push_back(a); 

    }

    memset (dist, -1, sizeof dist); 
    memset (vis, 0, sizeof vis);

    int src, des, k; 
    cin >> src >> des >> k; 
    bfs(src); 

    if(dist[des] != -1 && dist[des] <= k * 2 )
    {
        cout << "YES" << endl;
    }
    else 
    {
        cout << "NO" << endl;
    } 
    

    return 0;
}