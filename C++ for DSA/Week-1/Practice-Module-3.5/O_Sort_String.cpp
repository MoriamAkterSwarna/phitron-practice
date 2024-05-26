#include<bits/stdc++.h>

using namespace std;

int main(){

    int n; 
    cin >> n; 
    char S[n+1]; 
    getchar();
    cin.getline(S, n+1);

    for(int i = 0; i < n-1; i++){
        for(int j = i+1; j < n; j++){
            if(S[i] > S[j]){
                char temp = S[i]; 
                S[i] = S[j]; 
                S[j] = temp;
            }

            
        }
    } 

    // sort(S, S+n);

    // cout << S << endl;

    for(int i = 0; i < n; i++){
        cout << S[i]; 
    }



    return 0;
}