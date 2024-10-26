// #include<bits/stdc++.h>

// using namespace std;

// int main(){

//     int n; 
//     cin >> n; 

//     int arr[n]; 
//     for(int i = 0; i < n; i++){
//         cin >> arr[i]; 
//     } 

//     int t; 
//     cin >> t; 

//     sort (arr, arr + n);
//     int index =-1; 
//     bool flag = false; 
//     int l = 0, r = n-1; 
 
    
//     while(l <= r){
//        int mid = l + (r -l) / 2;
//         if(arr[mid] == t){
            
//               flag = true; 
//               index = mid; 
//             break; 
//         }else if(arr[mid] < t){
//             l = mid + 1; 
//         }else{
//             r = mid - 1; 
//         }
//     }

//     if(flag){
//         cout <<index  << endl; 

//     }else{
//         cout << -1 << endl; 
//     }

//     return 0;
// }


#include<bits/stdc++.h>

using namespace std;

int main(){

    int n; 
    cin >> n; 

    int arr[n]; 
    for(int i = 0; i < n; i++){
        cin >> arr[i]; 
    } 

    int t; 
    cin >> t;

    int index = -1; 
    for(int i = 0; i < n; i++){
        if(arr[i] == t){
            index = i;  
            
        }
    }

    cout << index << endl;

    return 0;
}