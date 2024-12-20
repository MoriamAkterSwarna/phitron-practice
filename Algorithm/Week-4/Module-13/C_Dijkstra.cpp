#include<bits/stdc++.h>
#define ll long long 
#define pi pair<ll, ll> 
using namespace std;

const ll N = 1e5 + 5;

vector<pi> v[N];
ll dis [N];
ll par[N] ; 

class cmp{
    public:
        bool operator()(pi a, pi b){
            return a.second > b.second;
        }
};

void dijkstra(ll src){
    priority_queue<pi, vector<pi>, cmp> pq;
    pq.push({src, 0});

    dis[src] = 0;
    while(!pq.empty()){
        pi parent = pq.top(); 
        pq.pop(); 

        ll parentNode = parent.first; 
        ll parentWeight = parent.second;

        for(pi child : v[parentNode]){
            ll childNode = child.first; 
            ll childWeight = child.second; 

            if(parentWeight + childWeight < dis[childNode]){
                dis[childNode] = dis[parentNode] + childWeight; 
                pq.push({childNode, dis[childNode]});
                par[childNode] = parentNode;
            }
        }

        
    }
}

int main(){
    ll n, e;  
    cin >> n >> e;
    while(e--){
        ll a, b, w; 
        cin >> a >> b >> w; 
        v[a].push_back({b, w});
        v[b].push_back({a, w});
    }
    for(ll i=1; i<=n; i++){
        dis[i] = 1e18;
        par[i] = -1;
    }

    dijkstra(1); 
    // cout << dis[n] << endl;

if(dis[n] == 1e18){
    cout << -1 << endl; 
}
else{
    ll x = n; 
    vector<ll> path; 
    while(x != -1){
        // cout << x << " ";
        // x = par[x];

        path.push_back(x);
        x = par[x]; 
    }

    reverse(path.begin(), path.end()); 
    // for(ll i=0; i<path.size(); i++){
    //     cout << path[i] << " ";
    // }

    for(ll val: path){
        cout << val << " ";
    }
}
    
    return 0;
}