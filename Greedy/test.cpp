#include <bits/stdc++.h>
using namespace std;
// Steps to solving recursion :
/* 
    1. What's the simplest possible input
    2. Try and visualize examples
    3. Try to relate harder problems with the simpler problems
    4. Generalize your finding (create a recurrence function) 
    5. Code it. 
*/

int grid_paths(int r, int c)
{
    if (r == 1 || c == 2)
        return 1;
    else
    {
        return grid_paths(r, c - 1) + grid_paths(r - 1, c);
    }
}

int count_partition(int n, int m)
{
    if (n == 0)
        return 1;
    if (m == 0 || n < 0)
        return 0;
    else
    {
        return count_partition(n - m, m) + count_partition(n, m - 1);
    }
}

int main()
{
    cout << "Hello, World!";
}