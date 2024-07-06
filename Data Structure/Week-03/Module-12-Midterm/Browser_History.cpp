// #include<bits/stdc++.h>

// using namespace std;

// int main( ) {
//     list<string> browserHistory;
//     string address;
//     while ( cin >> address && address != "end" ) {
//         browserHistory.push_back( address );
//         }

//     auto current = browserHistory.begin( ); // Start at the head of the list
//     int Q;
//     cin >> Q;
//     cin.ignore( ); // To safely use getline after cin

//     while ( Q-- ) {
//         string commandLine;
//         getline( cin , commandLine );
//         stringstream iss( commandLine );
//         string command;
//         iss >> command; // Extract the command part

//         if ( command == "visit" ) {
//             string visitAddress;
//             iss >> visitAddress; // Extract the address part
//             auto it = find( browserHistory.begin( ) , browserHistory.end( ) , visitAddress );
//             if ( it != browserHistory.end( ) ) {
//                 current = it;
//                 cout << *current << endl;
//                 }
//             else {
//                 cout << "Not Available" << endl;
//                 }
//             }
//         else if ( command == "next" ) {
//             if ( current != browserHistory.end( ) && next( current ) != browserHistory.end( ) ) {
//                 ++current;
//                 cout << *current << endl;
//                 }
//             else {
//                 cout << "Not Available" << endl;
//                 }
//             }
//         else if ( command == "prev" ) {
//             if ( current != browserHistory.begin( ) ) {
//                 --current;
//                 cout << *current << endl;
//                 }
//             else {
//                 cout << "Not Available" << endl;
//                 }
//             }
//         }

//     return 0;
//     }





#include<bits/stdc++.h>

using namespace std;
class Node {
    public:
    string val;
    Node* next;



    Node( string val ) {
        this->val = val;
        this->next = NULL;
        }
    };
void addAddress( string address , Node*& head , Node*& tail , Node*& current ) {
    Node* newNode = new Node( address );
    if ( !head ) {
        head = newNode;
        current = head;
        }
    else {
        Node* temp = head;
        while ( temp->next ) {
            temp = temp->next;
            }
        temp->next = newNode;
        }
    }

void visit( string address , Node* head , Node* tail , Node*& current ) {
    Node* temp = head;
    while ( temp ) {
        if ( temp->val == address ) {
            current = temp;
            cout << current->val << endl;
            return;
            }
        temp = temp->next;
        }
    cout << "Not Available" << endl;
    }

void nextNode( Node* head , Node* tail , Node*& current ) {
    if ( current && current->next ) {
        current = current->next;
        cout << current->val << endl;
        }
    else {
        cout << "Not Available" << endl;
        }
    }

void prevNode( Node* head , Node* tail , Node*& current ) {
    if ( current && current != head ) {
        Node* temp = head;
        while ( temp->next != current ) {
            temp = temp->next;
            }
        current = temp;
        cout << current->val << endl;
        }
    else {
        cout << "Not Available" << endl;
        }
    }
int main( ) {

    Node* head = NULL;
    Node* current;
    Node* tail = NULL;

    string address;
    while ( cin >> address && address != "end" ) {
        addAddress( address , head , tail , current );
        }

    int Q;
    cin >> Q;
    cin.ignore( );

    while ( Q-- ) {
        string commandLine;
        getline( cin , commandLine );
        stringstream iss( commandLine );
        string command , visitAddress;
        iss >> command;

        if ( command == "visit" ) {
            iss >> visitAddress;
            visit( visitAddress , head , tail , current );
            }
        else if ( command == "next" ) {
            nextNode( head , tail , current );
            }
        else if ( command == "prev" ) {
            prevNode( head , tail , current );
            }
        }


    return 0;
    }