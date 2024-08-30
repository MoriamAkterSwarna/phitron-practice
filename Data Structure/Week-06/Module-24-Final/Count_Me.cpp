#include<bits/stdc++.h>

using namespace std;

int main( ) {

    int n;
    cin >> n;
    cin.ignore( );

    while ( n-- )
        {

        string s;
        getline( cin , s );

        int maxCount = 0;
        string maxWord;

        string word;
        stringstream ss( s );
        map<string , int> mp;
        while ( ss >> word ) {
            mp [ word ]++;
            if ( mp [ word ] > maxCount ) {
                maxCount = mp [ word ];
                maxWord = word;
                }

            }
        cout << maxWord << " " << maxCount << endl;
        }

    return 0;
    }
