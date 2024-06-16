#include<bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin >> n; 

    vector <int> a(n); 

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a.begin(), a.end());  // n log (n)


    int count = 0; 

    // total O(n^2)
    for(int i = 0; i < a.size()-1; i++){   // O(n)
        
        if(a[i] +1 == a[i +1]){
            count ++;
        } 

        else{
            for(int j = i+2; j< a.size(); j++){  //O(n)
            if(a[i] + 1 == a[j] ){
            count ++;
            break; 
        }
        }
        }
       
    }

     cout << count << " ";


    return 0;
}