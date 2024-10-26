// #include<bits/stdc++.h>
// #define ll long long
// #define B begin()
// #define E end()
// #define all(x) x.B,x.E
// #define fast() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
// using namespace std;
// int n;
// vector<int> vec;
// int sum, half;

// int dp[15][15007][10];

// int f(int i, int crrSum, int coin) {

//     if (i == n ) {
//         if (coin == half) return abs((sum - crrSum) - crrSum);
//         else return INT_MAX;
//     }

//     // if (i >= n or coin > half) return INT_MAX;

//     if (dp[i][crrSum][coin] != -1) return dp[i][crrSum][coin];
//     return dp[i][crrSum][coin] = min(f(i + 1, crrSum + vec[i], coin + 1),
//                                      f(i + 1, crrSum, coin));
// }

// void solve() {
//     cin >> n;
//     sum = 0;
//     vec.resize(n);
//     for (int i = 0; i < n; i++) {
//         cin >> vec[i];
//         sum += vec[i];
//     }

//     if (n == 1) {
//         cout << vec[0] << endl;
//         return;
//     }

//     half = (n / 2);
//     if (n % 2) half++;

//     memset(dp, -1, sizeof(dp));
//     cout << f(0, 0, 0) << endl;
// }


// int main()
// {
//     fast();
//     int t = 1;
//     cin >> t;
//     while (t--)
//         solve();
//     return 0;
// }



#include <iostream>
#include <vector>
#include <algorithm>

int min_difference(std::vector<int>& coins) {
    // std::sort(coins.begin(), coins.end(), std::greater<int>());
    int mina_sum = 0, moni_sum = 0;
    for (int coin : coins) {
        if (mina_sum <= moni_sum) {
            mina_sum += coin;
        } else {
            moni_sum += coin;
        }
    }
    return std::abs(mina_sum - moni_sum);
}

int main() {
    int T;
    std::cin >> T;
    while (T--) {
        int N;
        std::cin >> N;
        std::vector<int> coins(N);
        for (int i = 0; i < N; i++) {
            std::cin >> coins[i];
        }
        std::cout << min_difference(coins) << std::endl;
    }
    return 0;
}