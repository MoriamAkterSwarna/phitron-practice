#include<bits/stdc++.h>

using namespace std;


class Student{
    public: 
    
    string name; 
    int id; 
    int marks; 
    
};

int main(){

    
    int n; 
    cin >> n;
    Student s[n];

    for(int i = 0; i < n; i++){
        cin >> s[i].id >> s[i].name >> s[i].marks; 
    }

    int i = 0; j = n-1; 
    while(i < j){
        swap(s[i].marks, s[j].marks);
        i++; 
        j--; 
    }

    for(int i =0; i< n; i++){
        cout << s[i].id << " " << s[i].name << " " << s[i].marks << endl;
    }



    return 0;
}