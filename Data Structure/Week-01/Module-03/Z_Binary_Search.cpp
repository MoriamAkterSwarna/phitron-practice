#include<bits/stdc++.h>

using namespace std;

int main(){

    int n, q;                     
    cin>>n>>q; 

    int a[n];
    for(int i=0;i<n;i++){  // o(n)
        cin>>a[i];
    }

    sort(a, a+n);  // o(nlogn)

    while(q--){  // o(q)
        int x;
        cin>>x;
        bool flag = false;

        int l = 0, r = n-1;
        
        // binary search
        
        while(l<=r){  // o(logn)
            int mid = (l + r) /2; 
            if(a[mid] == x){
                flag = true; 
                break; 
            }
            else if(  x > a[mid]){
                l = mid + 1; 
            }
            else{
                r = mid - 1; 
            }
        }
// total time complexity = o( q * log n) = 10^5 * 17 = 10^5 * 17 = 1.7 * 10^6
        if(flag){
            cout<<"found"<<endl;
        }
        else{
            cout<<"not found"<<endl;
        }
    }




    return 0;
}