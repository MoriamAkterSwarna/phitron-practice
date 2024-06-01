#include<bits/stdc++.h>

using namespace std;

void reverseWords( stringstream &s) {
        string word; 
       

        if(s >> word){

            for(int i = word.size()-1; i >= 0; i--){
                cout << word[i];
            
            }


                if(s.peek() != EOF)
                cout << " ";

                    reverseWords(s);

                
                
        }
        
            
   
}

int main(){

    string s; 
    getline(cin, s); 
    
    stringstream ss(s); 

    reverseWords(ss);



    return 0;
}