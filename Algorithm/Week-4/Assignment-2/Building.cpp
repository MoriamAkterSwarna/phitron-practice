#include<bits/stdc++.h>

using namespace std;


const int N = 1e5+2; 
int parent[N]; 
int grp_size[N]; 

void dsu_initialize(int n){
    for(int i=0; i<n; i++){
        parent[i] = -1; 
        grp_size[i] = 1; 
    }
} 
int dsu_find(int node){
    if(parent[node] == -1) return node; 
    int leader = dsu_find(parent[node]); 
    parent[node] = leader;
    return leader;
} 

void dsu_union_by_size(int node1, int node2){
    int leaderA = dsu_find(node1); 
    int leaderB = dsu_find(node2); 

    if(grp_size[leaderA] > grp_size[leaderB]){
        parent[leaderB ] = leaderA; 
        grp_size[leaderA] += grp_size[leaderB];
    } 
    else{
        parent[leaderA] = leaderB; 
        grp_size[leaderB] += grp_size[leaderA];
    } 

}

class Edge{
    public:
        int src, dest, weight;
        
        Edge(int src, int dest, int weight){
            this->src = src;
            this->dest = dest;
            this->weight = weight;
        } 

};

bool cmp(Edge a, Edge b){
    return a.weight < b.weight;
}

int main(){

    int n, e; 
    cin >> n >> e; 
    dsu_initialize(n);
    vector<Edge> edgeList;
    while(e--){
        int a, b, w; 
        cin >> a >> b >> w; 
        edgeList.push_back(Edge(a, b, w));

    }
    sort(edgeList.begin(), edgeList.end(), cmp); 
    long long int cost = 0;
    long long int edgeCount = 0;
    for(Edge e: edgeList){
        int leaderA = dsu_find(e.src); 
        int leaderB = dsu_find(e.dest); 

        if(leaderA ==leaderB){
            continue;
        }
        else{
            dsu_union_by_size(e.src, e.dest);
            cost += e.weight;
            edgeCount++;
            
        }
    }
    if(edgeCount == n-1){
        cout << cost << endl; 
    }
    else{
        cout << -1 << endl; 
    }
    

    return 0;
}