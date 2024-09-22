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

int main(){

    int n, e; 
    cin >> n >> e; 
    dsu_initialize(n); 
    bool cycle = false; 
    while(e--)
    {
        int a, b; 
        cin >> a >> b; 
        int leaderA = dsu_find(a); 
        int leaderB = dsu_find(b); 

        if(leaderA == leaderB){
            cycle = true; 
        }
        else{
            dsu_union_by_size(a, b); 
        }

    }
    if(cycle){
        cout << "Cycle is present" << endl; 
    }
    else{
        cout << "Cycle is not present" << endl; 
    }

    return 0;
}