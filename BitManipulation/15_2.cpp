#include <bits/stdc++.h>
using namespace std;

vector<int> SingleNumber(vector<int> nums)
{
    vector<int> arr(2, 0);
    set<int> s;
    for (int i = 0; i < nums.size(); ++i)
    {
        if (s.find(nums[i]) != s.end())
        {
            s.erase(nums[i]);
        }
        else
            s.insert(nums[i]);
    }
    /*for (set<int>::iterator it = s.begin(); it != s.end(); ++it) {
        cout << " " << *it;
    }*/
    set<int>::iterator it = s.begin();
    set<int>::iterator it2 = ++s.begin();
    //cout << *it << " " << *it2;
    if (*it > *it2)
    {
        arr[0] = *it2;
        arr[1] = *it;
    }
    else
    {
        arr[0] = *it;
        arr[1] = *it2;
    }
    return arr;
}

vector<int> singleNumber(vector<int> nums)
{
    vector<int> v(2);

    // Xor to get the xor of remaining two numbers
    int Xor = nums[0];
    for (int i = 1; i < nums.size(); ++i)
        Xor ^= nums[i];

    // getting the right most set bit
    int set_bit_no = Xor & -Xor;
    int x = 0, y = 0;

    // dividing the set into two sections one that has that bit set
    // and other not.
    for (int i = 0; i < nums.size(); ++i)
    {
        // getting the unique from one section
        if (nums[i] & set_bit_no)
            x ^= nums[i];
        /*  else
            y ^= nums[i]; */
    }
    // removing one number from xor to get the other.
    y = Xor ^ x;

    v[0] = min(x, y);
    v[1] = max(x, y);
    return v;
}

int main()
{
    vector<int> nums{1, 2, 3, 3, 1, 4};
    vector<int> Xor = singleNumber(nums);
    cout << endl;
    for (auto i : Xor)
        cout << i << " ";
}