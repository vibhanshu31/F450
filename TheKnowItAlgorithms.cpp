#include <bits/stdc++.h>
using namespace std;

int power(int n, int m)
{
    if (m == 0)
        return 1;
    else if (m & 1 == 0)
        return power(n * n, m / 2);
    else
        return n * power(n, m - 1);
}

int main()
{
    cout << power(2, 10);
    return 0;
}