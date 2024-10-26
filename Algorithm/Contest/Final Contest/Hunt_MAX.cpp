#include <bits/stdc++.h>
using namespace std;

#define ll long long 

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int q;
    cin >> q;

    map<ll, ll> frequency; 
    priority_queue<pair<ll, ll>> pq; 

    while (q--) {
        int query;
        cin >> query;

        if (query == 1) {
            ll x;
            cin >> x;
            
            frequency[x]++;
            pq.push({frequency[x], x});
        } else if (query == 2) {
            while (!pq.empty()) {
                auto top = pq.top();
                ll max_freq = top.first;
                ll max_val = top.second;

                if (frequency[max_val] == max_freq) {
                    cout << max_val << "\n"; 
                    frequency[max_val] = 0;
                    pq.pop();
                    break;
                } else {
                    pq.pop();
                }
            }

            if (pq.empty()) {
                cout << "empty\n";
            }
        }
    }

    return 0;
}