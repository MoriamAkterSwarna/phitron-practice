#include<bits/stdc++.h>

using namespace std;

int main(){

    
int n;
cin>>n;

// O(N*log(N))
for(int i=1;i<=n;i++){  // O(N) 


    int x = i; 
    while(x > 0){       // O(log(N))
        int digit = x%10; 
        cout<<digit<<endl;
        x = x/10; 
    }
    cout << endl ; 
}




    return 0;
}