#include <iostream>
#include <algorithm>
#include <utility>
using namespace std;

int main (){


    int a, b, c, d; 
    cin >> a >> b; 

    int c = min(a, b); 
    cout << "Min: " << c << endl;
    int d = max(a, b); 
    cout << "Max: " << d << endl; 

    int mn = min({a, b, c, d}); 

    cout << "Min: " << mn << endl; 
    int mx = max({a, b, c, d}); 
    cout << "Max: " << mx << endl; 

    swap(a, b);  
    cout << "a: " << a << " b: " << b << endl;

    return 0; 
}