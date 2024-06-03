#include<bits/stdc++.h>

using namespace std;

class Student{
    public: 
    
    string name; 
    int id; 
    int bang; 
    int eng; 
    int math; 


    int total; 
    double avg; 
    string gpa; 
    int roll; 


};


bool cmp(Student a, Student b){
    if(a.total == b.total){
        
           
                return a.id < b.id; 
            
        
    }else{
        return a.total > b.total; 
    }
}

int main(){

    int n; 
    cin >> n; 

    Student s[n]; 

    for(int i = 0; i < n; i++ ){
        cin >> s[i].id  >> s[i].name  >> s[i].bang >> s[i].eng >> s[i].math ; 

        s[i].total = s[i].bang + s[i].eng + s[i].math; 
        s[i].avg = (double) s[i].total / 3;


        if(s[i].avg >= 80){
            s[i].gpa = "A+";

        }else if(s[i].avg >= 70){
            s[i].gpa = "A";
        }else if(s[i].avg >= 60){
            s[i].gpa = "A-";}
        else if(s[i].avg >= 50){
            s[i].gpa = "B";
        }else if(s[i].avg >= 40){
            s[i].gpa = "B+";
        
        }else{
            s[i].gpa = "F";
        }
        
    } 


    sort(s,s+n, cmp); 
    cout << "Roll\tID\t\tName\tBang\tEng\t\tMath\tTotal\tAvg\t\t\tGPA\n";

    cout << "-------------------------------------------------------------------------\n";
    for(int i = 0; i < n; i++){
        cout << i+1 << "\t\t" << s[i].id << "\t\t" << s[i].name << "\t" << s[i].bang<< "\t\t" << s[i].eng << "\t\t" << s[i].math << "\t\t" << s[i].total << "\t\t" << setprecision(4) << s[i].avg << "\t\t\t" << s[i].gpa << endl; 
    }



    return 0;
}