#include<bits/stdc++.h>

using namespace std;

int main(){

    int t; 
    cin >> t; 
    for(int i = 0; i < t; i++){
        string s; 
    cin >> s; 

     int sum1=0, sum2=0; 
    for(int i = 0; i < s.size()/2; i++){

            sum1 = sum1 + s[i];
    }

    for(int i = s.size()/2; i < s.size(); i++){

            sum2 = sum2 + s[i];
    }

    if(sum1 == sum2)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    }




    return 0;
}