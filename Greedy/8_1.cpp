#include <bits/stdc++.h>
using namespace std;

bool comp(pair<int, int> a, pair<int, int> b)
{
    return a.second < b.second;
}

int maxMeetings(int start[], int end[], int n)
{
    vector<pair<int, int>> se;
    for (int i = 0; i < n; ++i)
    {
        se.push_back(make_pair(start[i], end[i]));
    }
    sort(se.begin(), se.end(), comp);

    int count = 1, last = se[0].second;
    for (int i = 1; i < n; ++i)
    {
        if (se[i].first > last)
        {
            count++;
            last = se[i].second;
        }
    }

    return count;
}

int main()
{
    int n;
    cin >> n;
    int S[n], E[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> S[i];
    }
    for (int i = 0; i < n; ++i)
    {
        cin >> E[i];
    }
    cout << maxMeetings(S, E, n);
}