#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main(){


    int T; 
    cin >> T; 
    while(T--)
    {
        ll n; 
        cin >> n; 

        vector <ll> arr(n-2); 
        
        for(ll i = 0; i < n-2; i++)
        {
            cin >> arr[i]; 
        } 

        ll sum ; 
        cin >> sum;  

        ll remain = 0; 
        for(ll i = 0; i < n-2; i++)
        {
            remain += arr[i]; 
        }  

         ll difference =  sum - remain; 

         cout << difference +1 << endl;

    }

    

    return 0;
}

