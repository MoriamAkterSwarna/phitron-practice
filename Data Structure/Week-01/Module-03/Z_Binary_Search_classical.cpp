#include<bits/stdc++.h>

using namespace std;

int main(){

    int n;                     
    cin>>n; 

    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int x; 
    cin>>x; 

   int l = 0, r = n-1; 
   bool flag = false;
   while(l<r){
        int mind_index = (l + r) /2; 
        if(a[mind_index] == x){
            flag = true; 
            break; 
        }
        else if(a[mind_index] < x){
            l = mind_index + 1; 
        }
        else{
            r = mind_index - 1; 
        }
   }

   if(flag){
       cout<<"found"<<endl;
    }
    else{
        cout<<"not found"<<endl;
    }




    return 0;
}