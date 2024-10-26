
#include<bits/stdc++.h>

using namespace std;

const int N = 1e3 + 2;
int n, m;
char a[N][N];
bool vis[N][N];

vector<pair<int, int>> d = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};

bool valid(int ci, int cj) {
    if(ci >= 0 && ci < n && cj >= 0 && cj < m) return true;
    else return false; 
    
}

int dfs(int si, int sj) {
    vis[si][sj] = true;
     int ans = 1; 

    for (int i = 0; i < 4; i++) {
        int ci = si + d[i].first;
        int cj = sj + d[i].second;
        if (valid(ci, cj) && !vis[ci][cj] && a[ci][cj] == '.') {
            ans += dfs(ci, cj);
        }
    }
    return ans;
}

int main() {
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    memset(vis, false, sizeof(vis));

    int min_area = INT_MAX;
    bool existComponent = false;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i][j] == '.' && !vis[i][j]) {
                existComponent = true;
                int area = dfs(i, j);
                min_area = min(min_area, area);
            }
        }
    }

    if (existComponent) {
        cout << min_area << endl;
    } else {
        cout << -1 << endl;
    }

    return 0;
}