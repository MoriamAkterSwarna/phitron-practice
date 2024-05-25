#include<bits/stdc++.h>

using namespace std;

int main(){

    int A, B, C; 
    cin >> A >> B >> C; 

    int max = INT_MIN; 

    if(A > max ){
        max = A;
    }
     if(B > max){
        max = B;
    }
     if(C > max){
        max = C;
    } 

    int min = INT_MAX; 

    if(A < min){
        min = A;
    }
     if(B < min){
        min = B;
    }
     if(C < min){
        min = C;
    }

    cout << min << " " << max << endl;



    return 0;
}