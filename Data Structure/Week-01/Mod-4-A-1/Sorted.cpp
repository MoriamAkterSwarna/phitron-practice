#include<bits/stdc++.h>

using namespace std;

int main(){

    int t;  
    cin >> t; 
    
    while (t--)
    {
        
    int n; 
    cin >> n; 

    vector <int> v(n); 

    for(int i = 0; i < n; i++){ // o(n)
        cin >> v[i]; 
    }

    
    bool flag = true; 

    // total = o(n^2)
    // for(int i =0; i<n-1; i++){  // o(n)
    //     for(int j = i +1; i< n; i++){ // o(n)
    //         if(v[i] <= v[j]){
    //             // cout<< v[i] << " " << v[j]<< endl;
    //             flag =true; 
    //             break;
    //         }
    //         break;
    //     }
    //     break;
    // }

    for(int i = 0; i < n-1; i++ ){  // o(n)
        if(v[i] > v[i+1]){
            flag = false; 
            break;
        }
        
        
    }
    if(flag){
        cout << "YES" << endl; 
    }else{
        cout << "NO" << endl; 
    }

    }
    


    return 0;
}