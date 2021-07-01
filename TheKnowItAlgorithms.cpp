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

class subSetGenerator // from i to n
{
    vector<int> subset;

public:
    void search(int i, int n)
    {
        if (i > n)
        {
            // res.push_back(subset);
            for (int i : subset)
                cout << i << " ";
            cout << endl;
            return;
        }
        search(i + 1, n);
        subset.push_back(i);
        search(i + 1, n);
        subset.pop_back();
    }
    void bitsearch(int n)
    {
        for (int b = 0; b < (1 << n); b++)
        {
            vector<int> subset;
            for (int i = 0; i < n; i++)
            {
                if (b & (1 << i))
                    subset.push_back(i);
            }
            for (int i : subset)
                cout << i << " ";
            cout << endl;
        }
    }
};

// Euclid's GCD theorem
int GCD(int m, int n)
{
    if (m % n == 0)
        return n;
    else
        return GCD(n, m % n);
}

int iGCD(int m, int n)
{
    while (m % n != 0)
    {
        int temp = n;
        n = m % n;
        m = temp;
    }
    return n;
}

// Fast Fibonnaci for n > 3
int Fib(int n)
{
    int a = 1, b = 1;
    int res;
    for (int i = 3; i <= n; ++i)
    {
        res = a + b;
        a = b;
        b = res;
    }
    return res;
}

int main()
{
    subSetGenerator o;
    for (int i = 3; i < 50; ++i)
        cout << i << ") " << Fib(i) << endl;
    return 0;
}