#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x = 46;
    for (int i = 31, j = 1; i >= 0; --i, j++)
    {
        if (j % 9 == 0)
        {
            j = 1;
            cout << " ";
        }
        if (x & (1 << i))
            cout << 1;
        else
            cout << 0;
    }
    /* cout << endl;
    x = x & -x;
    for (int i = 31, j = 1; i >= 0; --i, j++)
    {
        if (j % 9 == 0)
        {
            j = 1;
            cout << " ";
        }
        if (x & (1 << i))
            cout << 1;
        else
            cout << 0;
    } */
    cout << endl
         << __builtin_parity(x);
}