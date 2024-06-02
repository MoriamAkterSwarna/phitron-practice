// #include<bits/stdc++.h>

// using namespace std;

// int main(){

//     int x, n; 
//     cin >> x >> n; 

//     int s = 0; 

//     for(int i = 1; i <= n; i++){
//         if(i%2 == 0){
//             s =  s + (int) pow(x * 1.0 , i * 1.0);
//         }
        
//     } 

//     cout << s ;




//     return 0;
// }



#include<bits/stdc++.h>

using namespace std;

int power(int base, int exp) {
    int result = 1;
    for(int i = 1; i <= exp; i++) {
        result *= base;
    }
    return result;
}

int main(){

    int x, n; 
    cin >> x >> n; 

    int s = 0; 

    for(int i = 1; i <= n; i++){
        if(i%2 == 0){
            s += (int) power(x *1.0, i * 1.0);
        }
    } 

    cout << s << endl;

    return 0;
}