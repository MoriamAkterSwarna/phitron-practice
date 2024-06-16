#include<bits/stdc++.h>

using namespace std;

int main(){

// ========== 1 ==============


//------------- time complexity = O()log (n))--------------
// -------------space complexity = O(1)


//     int k=1;
// while(k<=n){
// 	cout<<k<<endl;
// 	k=k*2;
// }




// ========== 2 ==============
//------------- time complexity = O(n^2)--------------
// -------------space complexity = O(1)



// for (int i = 0; i < n; i++)  // O(n)
//         for (int j = i; j > 0; j--)   //O(n)
//             cout << i << j;


// ========== 3 ==============
//------------- time complexity = O(n^3)--------------
// -------------space complexity = O(1)


// for (int i = 0; i < n; i++)  //O(n)
//         for (int j = i; j > 0; j--) //O(n)
//             for(int k=j; k > 0; k--) //O(n)
//                 cout << i << j << k;



// ========== 4 ==============
//------------- time complexity = O(n * log n)--------------
// -------------space complexity = O(1)



// for(int i=n/2;i<=n;i++){    // O(n)
// 	for(int j=1;j<=n;j=j*2){  // O(log n)
//    		cout<<i<<j<<endl;
// 	}
// }


// ========== 5 ==============
//------------- time complexity = O(n^2)--------------
// -------------space complexity = O(1)
// for(int i=n/2;i<=n;i++){
// 	for(int j=1;j<=n;j=j+i){
//    		cout<<i<<j<<endl;
// 	}
// }


    return 0;
}