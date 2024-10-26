


#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main() {
    int n;
    cin >> n;
    
    vector<int> arr(n);
    ll total = 0;
    
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        
    }

    for(int i = 0; i < n; i++){
        total += arr[i];
    }
    
    ll left = 0;
    for (int i = 0; i < n; ++i) {
        left += arr[i];
        if (left == total) {
            cout << left << " " << i + 1 << endl;
            return 0;
        }
        total = total - arr[i];
    }
    
    cout << "UNSTABLE" << endl;
    return 0;
}