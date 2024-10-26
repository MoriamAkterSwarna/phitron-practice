// #include<bits/stdc++.h>

// using namespace std;

// #define ll long long 

// int main() {
//     int n, q; 
//     cin >> n >> q; 

//     vector<ll> arr(n + 1); 
    
    

//     for (ll i = 1; i <= n; i++) {
//     arr[i] = (i + 1) / 2;
// }

//     vector<ll> prefix_sum(n + 1, 0);
//     for (ll i = 1; i <= n; i++) {
//         prefix_sum[i] = prefix_sum[i - 1] + arr[i];
//     }

//     while (q--) {
//         ll l, r; 
//         cin >> l >> r; 

//         if(l < 1 || r > n || l > r) {
//             cout << 0 << endl;
//             continue;
//         }

//         if(l == 1) {
//             cout << prefix_sum[r] << endl;
//             continue;
//         } 
        


//         ll sum = prefix_sum[r] - prefix_sum[l - 1];
//         cout << sum << endl;
//     }

//     return 0;
// }



#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, Q;
    cin >> N >> Q;

    vector<int> v(N);
    for (int i = 0; i < N / 2; i++) {
        v[2 * i] = i + 1;
        v[2 * i + 1] = i + 1;
    }


    vector<long long> prefix_sum(N + 1, 0);
    for (int i = 0; i < N; i++) {
        prefix_sum[i + 1] = prefix_sum[i] + v[i];
    }


    while (Q--) {
        int L, R;
        cin >> L >> R;
        cout << prefix_sum[R] - prefix_sum[L - 1] << endl;
    }

    return 0;
}