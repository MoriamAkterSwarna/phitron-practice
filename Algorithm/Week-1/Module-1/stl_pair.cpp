#include<bits/stdc++.h>

using namespace std;

// class Pair {
//     public:
//     int first , second;

//     void make_pair(int a , int b){
//         first = a;
//         second = b;
//     };

int main(){

    // Pair p;
    // p.first = 10;
    // p.second = 20;
    // p.make_pair(10 , 20); 

    pair<int , int> p;
    p = make_pair(10 , 20); // make_pair is a function that returns a pair
    cout << p.first << " " << p.second << endl;

    return 0;
}