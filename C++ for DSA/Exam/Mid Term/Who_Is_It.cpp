#include<bits/stdc++.h>

using namespace std;

class Student{
    public:
        int unique_id;
        char name[101]; 
        char section; 
        int marks;


        Student(int unique_id, char name[101], char section, int marks){
            this->unique_id = unique_id;
            strcpy(this->name, name); 
            this->section = section;
            this->marks = marks;
        }
};


int main(){

    int T;
    cin >> T; 

    while(T--){

        int n = 3; 
        Student *students[n]; 

        

        //    int * max_marks = 0;
         Student * max_student = nullptr; 
        for(int i = 0; i < n; i++){
            int unique_id;
            char name[101];
            char section;
            int marks;

            cin >> unique_id >> name >> section >> marks;
            
            students[i] = new Student(unique_id, name, section, marks);

         
           

            if( max_student == nullptr || students[i]->marks > max_student->marks  || (students[i]->marks == max_student->marks && students[i]->unique_id < max_student->unique_id)){

                
                max_student = students[i];
            }
            
        }

         if(max_student != nullptr){
            cout << max_student->unique_id << " " << max_student->name << " " << max_student->section << " " << max_student->marks << endl;
            }
        
    }
    




    return 0;
}

