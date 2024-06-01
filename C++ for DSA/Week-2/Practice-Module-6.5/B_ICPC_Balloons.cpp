#include<bits/stdc++.h>

using namespace std;

int main(){

    int t; 
    cin >> t;
    for(int i = 0; i < t; i++){
        int n; 
        cin >> n;
       string s; 
         cin >> s;  
        
        char arr[26] = {0};

        int count = 0;

        for( int j = 0; j < s.size(); j++){
            int problem = s[j] - 'A'; 

            if(arr[problem] == 0){
                count+=2;
                arr[problem] = 1;
                
            } 
            else {
                // arr[problem] = 0;
                count++;
            }
        }

        cout << count << endl;
    }




    return 0;
}