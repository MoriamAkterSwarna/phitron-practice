#include<bits/stdc++.h>

using namespace std;

int main(){

    int n; 

    cin >> n; 

    vector <int> v(n); 

    for(int i =0; i< n; i++){  // o(n)
        cin >> v[i];
    }

    bool flag = false; 

    // total o(n^2)
    // for(int i = 0; i<n-1; i++){ //o(n)
    //     for(int j = i+1; j<n; j++){  //o(n)
    //         if(v[i] == v[j]){
    //             flag= true;
    //             break; 
    //         }
    //     }
    // }


    // complexity = n log(n)
    sort(v.begin(), v.end()); //n log(n)
    for(int i=1; i<n; i++){  // lon(n)
        if(v[i] == v[i-1]){
            flag= true; 
            break; 
        }
    }
    if(flag){
        cout << "YES" << endl; 
    }
    else{
        cout << "NO" << endl; 
    }


    return 0;
}