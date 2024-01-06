#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<char, int> a, pair<char, int> b)
{
    if (a.second != b.second)
        return a.second > b.second;
    return a.first < b.first;
}
int main()
{
    string s;
    cin >> s;
    int n = s.size();
    map<char, int> m;
    int a[26] = {0}, A[26] = {0};
    for (int i = 0; i < n; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
            a[s[i] - 'a']++;
        else
            A[s[i] - 'A']++;
    }

    for (int i = 0; i < n; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
            m[s[i]] = a[s[i] - 'a'];
        else
            m[s[i]] = A[s[i] - 'A'];
    }
    vector<pair<char, int>> temp;
    map<char, int>::iterator itr;
    for (itr = m.begin(); itr != m.end(); itr++)
    {
        temp.push_back(make_pair(itr->first, itr->second));
    }
    sort(temp.begin(), temp.end(), cmp);
    
    cout << temp[0].first << endl;
}