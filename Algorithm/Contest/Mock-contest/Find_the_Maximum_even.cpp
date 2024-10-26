#include<bits/stdc++.h>

using namespace std;

int main(){

    int n; 
    cin >> n; 

    int arr[n]; 
    for(int i = 0; i < n; i++){
        cin >> arr[i]; 
    } 

    int max_even = INT_MIN; 

    for(int i = 0; i < n; i++){
        
        if( i  > max_even && arr[i] % 2 == 0){
            max_even = arr[i]; 
        }  
        
        
    }  

    for(int i = 0; i < n-1; i++){
        for( int j = i + 1; j < n; j++){
            int sum = arr[i] + arr[j]; 
            if (sum > max_even && sum % 2 == 0){
                max_even = sum; 
            } 
        }
    }

    cout << max_even << endl;

    return 0;
}