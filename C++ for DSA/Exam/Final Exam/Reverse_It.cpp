#include<bits/stdc++.h>

using namespace std;

class Student{
    public: 
    string nm;
    int cls; 
    char s; 
    int id ; 
    
};

int main(){

    int N; 
    cin >> N; 

    Student *s = new Student[N]; 

    for(int i = 0; i < N; i ++){
        cin >> s[i].nm >> s[i].cls >> s[i].s >> s[i].id;
    }

    for(int i  = 0; i < N/2; i++){
        swap(s[i].s, s[N-i-1].s);
    }

    for(int i = 0; i < N; i++){
        cout << s[i].nm << " " << s[i].cls << " " << s[i].s << " " << s[i].id << endl;
    }



    delete [] s;

    return 0;
}