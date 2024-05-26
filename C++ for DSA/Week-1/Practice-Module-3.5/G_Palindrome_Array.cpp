#include<bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin>>n; 

    int arr[n]; 

    for(int i=0; i<n; i++){
        cin>>arr[i];
    } 

    int rev[n];

    for(int i=n-1; i>= 0; i--){
        rev[n-i-1] = arr[i];
    }

    int flag = 0; 

    for(int i=0; i<n; i++){
        if(rev[i] != arr[i]){
            flag = 1;
            break;
        }
    }


    if(flag == 0){
        cout<<"YES"<<endl;
    }else{ 
        cout<<"NO"<<endl;
    }




    return 0;
}