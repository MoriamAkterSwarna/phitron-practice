#include<bits/stdc++.h>

using namespace std;

int main(){

    // Non-decreasing order by default
    // priority_queue<int> pq; 
    // pq.push(10); 
    // pq.push(15);
    // pq.push(5);
    // pq.push(20);
    // pq.push(25);

    // cout << "Size: " << pq.size() << endl;  
    // cout << "Top: " << pq.top() << endl; 

    // pq.pop();  // O(logn)
    // cout << "Top: " << pq.top() << endl; // O(1)

    // cout << "Empty or not: " << pq.empty() << endl;

    //  Non-increasing order 

    priority_queue<int, vector<int>, greater<int>> pq;

    pq.push(10);
    pq.push(15);
    pq.push(5);
    pq.push(20);
    pq.push(25);

    // cout << "Size: " << pq.size() << endl; 
    // cout << "Top: " << pq.top() << endl; 


    // pq.pop();  // O(logn) 

    // cout << "Top: " << pq.top() << endl; // O(1) 

    // cout << "Empty or not: " << pq.empty() << endl; 

    while(!pq.empty()){
        int value = pq.top(); 
        pq.pop(); 
        cout << value << " "; 
    }
    return 0;
}