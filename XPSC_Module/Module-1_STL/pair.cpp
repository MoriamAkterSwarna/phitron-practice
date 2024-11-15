#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // way 1 : making a pair
    pair<string, int> student1 = make_pair("rahim", 10);

    //  way 2 : making a pair
    // pair<string, int> student2 = {"karim", 10};

    // cout << student1.first << " " << student1.second << "\n";
    // cout << student2.first << " " << student2.second << "\n";

    // student1.first = "hablu";

    //  access value from a pair
    // auto [name, roll] = student1;

    // cout << name << " " << roll << "\n";

    int n;
    cin >> n;
    pair<string, int> students[n];

    for (int i = 0; i < n; i++)
    {
        cin >> students[i].first >> students[i].second;
    }

    // ? way 1: accessing multiple element using "auto"
    for (auto [x, y] : students)
    {
        cout << x << " " << y << "\n";
    }

    // ? way 2: accessing multiple element through loop
    for (int i = 0; i < n; i++)
    {
        cout << students[i].first << " " << students[i].second << "\n";
    }

    return 0;
}