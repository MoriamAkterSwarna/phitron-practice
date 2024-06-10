#include<bits/stdc++.h>

using namespace std;

int main(){

    vector<int> v= {1, 2,2, 4, 1, 8, 9, 2, 4,5, 3, 4, 5,2};


    replace(v.begin(), v.end()-1, 2, 101); 
    for(int x: v){
        cout << x << " ";
    }



    return 0;
}