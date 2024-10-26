#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int maxN = 5005;

vector<int> t[maxN];
vector<pair<int, ll>> node[maxN];
int depth[maxN], parent[maxN];
int n, m, q;

void dfs(int v, int p) {
    parent[v] = p;
    for (int u : t[v]) {
        if (u != p) {
            depth[u] = depth[v] + 1;
            dfs(u, v);
        }
    }
}

int find_val(int u, int v) {
    if (depth[u] < depth[v]) swap(u, v);
    while (depth[u] > depth[v]) {
        u = parent[u];
    }
    while (u != v) {
        u = parent[u];
        v = parent[v];
    }
    return u;
}

vector<ll> insert_Value(int u, int v) {
    vector<ll> values;
    int l = find_val(u, v); 


    while (u != l) {
        for (const auto& p : node[u]) {
            values.push_back(p.second);
        }
        u = parent[u];
    }

    
    while (v != l) {
        for (const auto& p : node[v]) {
            values.push_back(p.second);
        }
        v = parent[v];
    }

  
    for (const auto& p : node[l]) {
        values.push_back(p.second);
    }

    return values;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        t[u].push_back(v);
        t[v].push_back(u);
    }

    depth[1] = 0;
    dfs(1, 1);

    cin >> q;
    while (q--) {
        string query;
        cin >> query;
        if (query == "insert") {
            int u;
            ll x;
            cin >> u >> x;
            node[u].insert(x);
        } else if (query == "delete") {
            int u;
            ll x;
            cin >> u >> x;
            node[u].erase(x);
        } else if (query == "find") {
            int u, v, k;
            cin >> u >> v >> k;
            vector<ll> values = insert_Value(u, v);
            if (values.size() < k) {
                cout << -1 << "\n";
            } else {
                nth_element(values.begin(), values.begin() + k - 1, values.end());
                cout << values[k - 1] << "\n";
            }
        }
    }

    return 0;
}