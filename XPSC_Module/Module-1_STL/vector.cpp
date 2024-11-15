// vector => dynamic array

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // int n;
    // cin >> n;
    // vector<int> v ;

    // Taking Input using fixed length
    // for(int i = 0; i < n; i++){
    //     cin >> v[i];
    // }

    // Taking Input without using length
    // for(int i = 0; i < n; i++){
    //     int x;
    //     cin >> x;
    //     v.push_back(x);
    // }

    // v.pop_back(); // delete the last element

    //  print with defined size
    // for (int i = 0; i < n; i++)
    // {
    //     cout << v[i] << " ";
    // }
    // cout << "\n";

    //  print without defined size
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << " ";
    // }
    // cout << "\n";

    /* `cout << v.front() << "\n";` is printing the first element of the vector `v`. The `front()` function is used to access the first element of the vector. */
    // cout << v.front() << "\n";
    /* `cout << v.back() << "\n";` is printing the last element of the vector `v`. The `back()`
    function is used to access the last element of the vector. */
    // cout << v.back() << "\n";

    /*  The `empty()` function is used to check if the vector is
    empty, and it returns a boolean value (true if the vector is empty, false otherwise). The output
    of this line will be `1` if the vector is empty and `0` if it is not empty. */

    // cout << v.empty() << "\n";

    /* The line `v.clear();` is clearing all the elements from the vector `v`. After this operation,
    the vector will be empty, and its size will be zero. This function removes all elements from the
    vector and deallocates the memory used by the vector to store the elements. */
    /* v.clear();  */

    // int n;
    // cin >> n;
    // vector<int> v(n, 5);
    // for (int i = 0; i < n; i++)
    // {
    //     cout << v[i] << " ";
    // }
    // cout << '\n';

    // int n;
    // cin >> n;
    // vector<int> v;
    // /* The line `v.assign(n, -1);` in the given C++ code snippet is initializing the vector `v` with
    // `n` elements, each having the value `-1`. */
    // v.assign(n, -1);
    // for (int i = 0;i < n;i++) {
    //    cout << v[i] << " ";
    // }
    // cout << '\n';

    // vector<int> v;
    // v.resize(4);
    // cout << v.size() << '\n';

    // for (int i = 0;i < v.size();i++) {
    //    cin >> v[i];
    // }
    // for (int i = 0;i < v.size();i++) {
    //    cout << v[i] << " ";
    // }
    // cout << '\n';

    // ? =========  Iterator ===========

    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    // auto it = v.begin(); // it's like 0th index
    // auto it = v.begin() + 2;

    // cout << *it << "\n";

    /*  using iterators to traverse through the elements of
    the vector `v` in forward direction. Here's a breakdown of what it does: */
    // for (auto it = v.begin(); it < v.end(); it++)
    // {
    //     cout << *it << " ";
    // }
    // cout << endl;

    /* The code snippet `for (auto it = v.rbegin(); it < v.rend(); it++)` is using reverse iterators to
    traverse through the elements of the vector `v` in reverse order. Here's a breakdown of what it
    does: */
    // for (auto it = v.rbegin(); it < v.rend(); it++)
    // {
    //     cout << *it << " ";
    // }
    // cout << endl;

    /* The line `auto lastElement = --v.end();` is decrementing the iterator pointing to the end of
    the vector `v` by one position and storing it in the variable `lastElement`. This effectively
    points to the last element of the vector `v`. */
    //  auto lastElement = --v.end();
    // cout << *lastElement << '\n';

    /* The line `reverse(v.begin(), v.end());` is using the `reverse` algorithm from the C++ Standard
    Library to reverse the elements in the vector `v`. */
    // reverse(v.begin(), v.end());

    /* The line `sort(v.begin(), v.end());` is using the `sort` algorithm from the C++ Standard Library
    to sort the elements in the vector `v` in ascending order. This function call sorts the elements
    starting from the iterator `v.begin()` (which points to the beginning of the vector) up to the
    iterator `v.end()` (which points to the position just after the last element in the vector).
    After this operation, the elements in the vector `v` will be rearranged in non-decreasing order. */
    // sort(v.begin(), v.end());

    // for(auto value: v){
    //     cout << value << " " ;
    // }
    // cout << "\n";

    auto mn = min_element(v.begin(), v.end());
    cout << *mn << "\n";
    auto mx = max_element(v.begin(), v.end());
    cout << *mx << "\n";

    /* The code `int maxElementPosition = mx - v.begin();` is calculating the position of the maximum
    element in the vector `v`. */
    int maxElementPosition  = mx-v.begin(); 
    cout << maxElementPosition << "\n"; 

    return 0;
}