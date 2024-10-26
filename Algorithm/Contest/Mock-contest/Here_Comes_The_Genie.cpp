// #include<bits/stdc++.h>

// using namespace std;

// int main(){

//     int n; 
//     cin >> n; 

//     vector<int> v(n); 

//     for(int i = 0; i < n; i++){
//         cin >> v[i]; 
//     } 

//     int totalBall = 0, color = 0; 

//     sort(v.begin(), v.end()); 

//     for(int i = 0; i < n; i++){
//         if(  v[i]   != color){
//             totalBall += v[i] - color; 
//             color = v[i]; 
//         }
//     } 

//     cout << totalBall << endl;

//     return 0;
// }


// #include<bits/stdc++.h>

// using namespace std;

// int main(){

//     int n;
//     cin >> n;

//     vector<int> A(n);
//     for(int i = 0; i < n; i++){
//         cin >> A[i];
//     }

//     sort (A.begin(), A.end());

//     int mx_ball_count = 0;
//     int previous = 0;
  

//     for(int i = 0; i < n; i++){
        
//         if(A[i] != previous){
//             mx_ball_count += A[i] ;
//             previous = A[i];
//         } 

//     }

//     cout << mx_ball_count << endl;

//     return 0;
// }


// #include<bits/stdc++.h>

// using namespace std;

// int main(){

//     int n;
//     cin >> n;

//     vector<int> A(n);
//     for(int i = 0; i < n; i++){
//         cin >> A[i];
//     }

//     sort(A.begin(), A.end(), greater<int>());
//     int mx_ball_count = 0;
//     int previous = INT_MAX; 

//     for(int i = 0; i < n; i++){
//         if(A[i] < previous){
//             mx_ball_count += A[i];
//             previous = A[i];
//         } else {
//             mx_ball_count += previous - 1;
//             previous = previous - 1;
//         }
//     }

//     cout << mx_ball_count << endl;

//     return 0;
// }


#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
    int n;
    cin >> n;

    vector<int> A(n);
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    
    sort(A.begin(), A.end(), greater<int>());

    ll mx_ball_count = 0;
    ll previous = INT_MAX; 

    for (ll i = 0; i < n; i++) {
        
        if (A[i] < previous) {
            mx_ball_count += A[i]; 
            previous = A[i]; 
        } else if (previous > 0) {
            mx_ball_count += previous - 1; 
            previous--; 
        }
        else {
            break; 
        }
    }

    cout << mx_ball_count << endl;

    return 0;
}