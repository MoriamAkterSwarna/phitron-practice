#include<bits/stdc++.h>

using namespace std;

int main(){

    int n; 
    cin >> n; 
    int a[n], s = 0; 
    for(int i =0; i <n; i++  )
    {
        cin >> a[i]; 
        s+=a[i];
    } 

    bool dp[n+1][s+1]; 
    dp[0][0] = true;

    for(int i = 1; i <= s; i++)
    {
        dp[0][i] = false;
    }

    for( int i = 1; i <= n; i++)
    {
        for(int j = 0; j <= s; j++)
        {
            if(a[i-1] <= j)
            {
                dp[i][j] = dp[i-1][j-a[i-1]] || dp[i-1][j];
            }
            else
            {
                dp[i][j] = dp[i-1][j];
            }
        }
    }

    vector<int> v; 
    for(int i = 0; i <= n; i ++){
        for(int j = 0; j <= s; j++)
        {
            if(dp[i][j] == 1)
            {
                // cout << j << " "; 

                v.push_back(j);
            }
            // else 

            // {
            //     cout << dp[i][j] << " "; 
            // }
        }
    }
        
        int ans = INT_MAX; 
        for(int val: v){
            int sum1 = val; 
            int sum2 = s - val; 
            ans = min(ans, abs(sum1 - sum2)); 
        }

        cout << ans << endl;
    
    

    return 0;
}