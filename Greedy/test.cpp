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
int sum_natural(int n)
{
    if (n == 1)
        return 1;
    else
        return n + sum_natural(n - 1);
}

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

int power(int n, int m)
{
    if (m == 1)
        return n;
    else
        return n * power(n, m - 1);
}

int fastpower(int n, int m)
{
    if (m == 0)
        return 1;
    else if (m % 2 == 0)
        return fastpower(n * n, m / 2);
    else
        return n * fastpower(n, m - 1);
}

int fib(int n)
{
    if (n == 1 || n == 2)
        return 1;
    else
        return fib(n - 1) + fib(n - 2);
}

int main()
{
    //cout << grid_paths(2, 4);
    //cout << count_partition(9, 5); == 23
    //cout << sum_natural(15);
    //cout << fastpower(3, 1000);
    cout << fib(6);
    return 0;
}