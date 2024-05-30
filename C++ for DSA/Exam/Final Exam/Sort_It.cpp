#include<bits/stdc++.h>

using namespace std;

class Student{
    public: 
    string nm;
    int cls; 
    char s; 
    int id ; 
    int math_marks;
    int eng_marks; 

    int totoal_marks(){
        return math_marks + eng_marks; 
    }
    

};

bool cmp(Student a, Student b){
    if(a.totoal_marks() == b.totoal_marks()){
        return a.id < b.id; 
    }
    return a.totoal_marks() > b.totoal_marks(); 
}

int main(){

    int N; 
    cin >> N; 

    Student *s = new Student[N]; 

    for(int i = 0; i < N; i ++){
        cin >> s[i].nm >> s[i].cls >> s[i].s >> s[i].id >> s[i].math_marks >> s[i].eng_marks;
    }

    sort(s, s+N, cmp );

    for(int i = 0; i < N; i++){
        cout << s[i].nm << " " << s[i].cls << " " << s[i].s << " " << s[i].id << " " << s[i].math_marks << " " << s[i].eng_marks << endl;
    }

    return 0;
}