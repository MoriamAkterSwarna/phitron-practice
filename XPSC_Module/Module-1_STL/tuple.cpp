#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // as many items we want we can take
    // ? make tuple
    tuple<string, int, string> t = make_tuple("raahim", 10, "0194");

    // ? print Tuple
    cout << get<0>(t) << " " << get<1>(t) << " " << get<2>(t) << "\n";


    // access and print Tuple using customization
    auto [name, roll, phoneNumber] = t;

    cout << name << " " << roll << " " << phoneNumber << "\n";

    return 0;
}