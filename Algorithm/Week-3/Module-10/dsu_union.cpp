#include<bits/stdc++.h>

using namespace std;

const int N = 1e5 + 5; 
int par[N]; 

int grp_size[N]; 
void dsu_initialize(int n){
    for(int i = 0; i < n; i++) {
        par[i ] = -1; 
        grp_size[i] = 1;
    }
    // par[1]= 2; 
    // par[2] = 3; 
    // par[5] = 6; 
    // par[6] = 7; 
}

int dsu_find(int node){
    if(par[node] == -1) return node; 
   
     int leader = dsu_find(par[node]); 
        par[node] = leader; 
        return leader; 


}

void dsu_union(int node1, int node2){
    int leaderA = dsu_find(node1);  // 3
    int leaderB = dsu_find(node2);  // 5 

    // par[leaderA] = leaderB;  // 3  is now connected to 5 and parent of 3 is 5 
} 
void dsu_union_by_size(int node1, int node2){
    int leaderA = dsu_find(node1);  
    int leaderB = dsu_find(node2);  

    if(grp_size[leaderA] > grp_size[leaderB]){
       par[leaderB] = leaderA; 
         grp_size[leaderA] += grp_size[leaderB]; 

    }
    else{
        par[leaderA] = leaderB; 
        grp_size[leaderB] += grp_size[leaderA]; 
        
   
}
}
int main(){
    
    // dsu_initialize(8);
    // cout << dsu_find(1) << endl;  
    // dsu_union(1, 5);

    // cout << dsu_find(1) << endl;  // 7
    // for(int i = 1; i <=7; i++){
    //     cout << par[i] << " "; 
    // } 
   

   dsu_initialize(7); 
    dsu_union_by_size(1, 2);
    dsu_union_by_size(2, 3); 
    dsu_union_by_size(4, 5); 
    dsu_union_by_size(5,6); 
    dsu_union_by_size(1, 4);

    cout << dsu_find(1) << endl; 
    cout << dsu_find(4) << endl; 
    return 0;
}