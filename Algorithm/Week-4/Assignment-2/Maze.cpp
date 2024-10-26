#include <bits/stdc++.h>
using namespace std;

const int N = 1e3 + 10;
bool vis[N][N];
int dx[4] = {0, 0, -1, 1}; 
int dy[4] = {-1, 1, 0, 0}; 
map<pair<int, int>, pair<int, int>> par;

int n, m;
char graph[N][N];

bool valid(int ci, int cj) {
    return ci >= 0 && ci < n && cj >= 0 && cj < m;
}

void bfs(int si, int sj) {
    vis[si][sj] = true;

    queue<pair<int, int>> q;
    q.push({si, sj});

    while (!q.empty()) {
        pair<int, int> node = q.front();
        q.pop();

        for (int i = 0; i < 4; i++) {
            int ci = node.first + dx[i];
            int cj = node.second + dy[i];

            if (valid(ci, cj) && !vis[ci][cj] && (graph[ci][cj] == '.' || graph[ci][cj] == 'D')) {
                vis[ci][cj] = true;
                q.push({ci, cj});
                par[{ci, cj}] = {node.first, node.second};
                if (graph[ci][cj] == 'D') {
                    return; 
                }
            }
        }
    }
}

int main() {
    cin >> n >> m;

    memset(vis, false, sizeof(vis));

    pair<int, int> start, end;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> graph[i][j];
            if (graph[i][j] == 'R') {
                start = {i, j};
            }
            if (graph[i][j] == 'D') {
                end = {i, j};
            }
        }
    }
    int si = start.first, sj = start.second; 
    int ei = end.first, ej = end.second;

    bfs(si, sj);

    if (!vis [ei][ej]) {
       
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cout << graph[i][j];
            }
            cout << endl;
        }
        return 0;
    }
    int sti = ei, stj = ej;
    while (graph[sti][stj] != 'R') {
        if(graph[sti][stj] != 'D') 
        {
            graph[sti][stj] = 'X';  
        }
        int Nsti = par[{sti, stj}].first;
        stj = par[{sti, stj}].second;
        sti = Nsti;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << graph[i][j];
        }
        cout << endl;
    }

    return 0;
}