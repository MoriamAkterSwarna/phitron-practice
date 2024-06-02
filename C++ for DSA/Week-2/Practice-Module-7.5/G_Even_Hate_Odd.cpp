#include<bits/stdc++.h>

using namespace std;

int main(){

    int t; 
    cin >> t; 

    for(int i =0 ; i< t; i++){
        int n; 
        cin >> n; 
        
            int arr[n]; 
            for(int j =0; j< n; j++){
                cin >> arr[j];
            }
            if(n%2 == 0){
                int oddCount = 0; 
            int evenCount = 0;
            for(int j =0; j< n; j++){
                if(arr[j]%2 == 0){
                    evenCount++;
                }
                else{
                    oddCount++;
                }
            }

            int rm = n/2; 
            int min1 = abs(evenCount - rm);
            int min2 = abs(oddCount - rm);

            if(min1 < min2){
                cout << min1 << endl;
            } 
            else{
                cout << min2 << endl;
            }
            }
            else{
                cout << -1 << endl;
            }
           
        
        

    }

    return 0;
}