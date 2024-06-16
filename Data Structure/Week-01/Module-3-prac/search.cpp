#include<bits/stdc++.h>

using namespace std;

int main(){

    
    int n; 
    cin >> n; 

    vector <int> v(n); 

    for(int i = 0; i< n; i++){  // O(n)
        cin >> v[i]; 
    }

    int x; 
    cin >> x; 

    int l = 0, r = n-1; 
     bool flag = false; 
    while(l <= r){   // O(log n)
        int mid = (l + r)/2; 
        if(v[mid] == x){
            if( v[mid] == v[mid+1] || v[mid] ==v[mid-1] ){
                flag = true; 
                break; 
            }
        }
        if(v[mid] > x){
            r = mid - 1; 
        } else{
            l = mid + 1; 
        } 
        
    }


    if(flag) {
        cout << "true" <<endl;
    } else {
        cout << "false" << endl; 
    }


    return 0;
}