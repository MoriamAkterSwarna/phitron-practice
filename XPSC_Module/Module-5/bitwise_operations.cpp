#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define tst   \
    int t;    \
    cin >> t; \
    while (t--)

int check_the_kth_bit_on_or_off(int n, int k)
{ // *  check the kth bit on or off

    return ((n >> k) & 1);
}

void print_on_and_off_bits(int n)

{
    // for (int k = 0; k <= 30; k++)     // left to right read
    for (int k = 30; k >= 0; k--) // right to left read
    {
        if (check_the_kth_bit_on_or_off(n, k))
        {
            cout << 1 << " ";
        }
        else
        {
            cout << 0 << " ";
        }
    }
}

int turn_on_kth_bit(int n, int k)
{
    return ((1 << k) | n);
}

int turn_off_the_kth_bit(int n, int k)
{

    return (n & (~(1 << k)));
}

int toggle_the_kth_bit(int n, int k)
{

    return ((1 << k) ^ n);
}

void firebird_solve()
{
    int n, k;
    cin >> n >> k;

    // * check the kth bit on or off

    cout << check_the_kth_bit_on_or_off(n, k) << nl;

    // *  print on and off bits
    print_on_and_off_bits(n);
    cout << nl;

    // * turn on kth bit
    cout << turn_on_kth_bit(n, k);
    cout << nl;

    // * turn off the kth bit

    cout << turn_off_the_kth_bit(n, k);
    cout << nl;

    // * toggle the kth bit

    cout << toggle_the_kth_bit(n, k);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    firebird_solve();

    return 0;
}