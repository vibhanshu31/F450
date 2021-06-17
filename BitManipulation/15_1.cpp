#include <bits/stdc++.h>
using namespace std;

// 1
/* int setBits(int N)
{
    int count = 0;
    for (int i = 0; i < 32; ++i)
    {
        if (N & (1 << i))
            ++count;
    }
    return count;
} */

// 2
int setBits(int N)
{
    int count = 0;
    while (N > 0)
    {
        N = N & (N - 1);
        ++count;
    }
    return count;
}

int main()
{
    cout << setBits(6);
}