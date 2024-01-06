// CPP program to find if a string is suffix,prefix,substring,subsequence of another
#include <bits/stdc++.h>
using namespace std;

bool isSuffix(string s1, string s2)
{
    int n1 = s1.length();
    int n2 = s2.length();
    if (n1 > n2)
        return false;
    for (int i = 0; i < n1; i++)
    {
        if (s1[n1 - i - 1] != s2[n2 - i - 1])
            return false;
    }
    return true;
}

bool isPrefix(string s1, string s2)
{
    int n1 = s1.length();
    int n2 = s2.length();
    if (n1 > n2)
        return false;
    for (int i = 0; i < n1; i++)
    {
        if (s1[i] != s2[i])
            return false;
    }
    return true;
}

bool isSubstring(string s1, string s2)
{
    int M = s1.length();
    int N = s2.length();

    for (int i = 0; i <= N - M; i++)
    {
        int j;
        for (j = 0; j < M; j++)
            if (s2[i + j] != s1[j])
                break;

        if (j == M)
            return true;
    }
    return false;
}

bool isSubSequence(string str1, string str2, int m, int n)
{
    int j = 0;
    for (int i = 0; i < n && j < m; i++)
    {
        if (str1[j] == str2[i])
        {
            j++;
        }
    }
    if (j == m)
        return true;
    return false;
}

int main()
{
    string s1, s2;
    cin >> s2 >> s1;

    bool result_suffix = isSuffix(s1, s2);
    if (result_suffix)
        cout << "Yes it's suffix" << endl;
    else
        cout << "No it's not suffix" << endl;

    bool result_Prefix = isPrefix(s1, s2);
    if (result_Prefix)
        cout << "Yes it's prefix" << endl;
    else
        cout << "No it's not prefix" << endl;

    bool result_Substring = isSubstring(s1, s2);
    if (result_Substring)
        cout << "Yes it's Substring" << endl;
    else
        cout << "No it's not Substring" << endl;

    bool result_SubSequence = isSubSequence(s1, s2, s1.size(), s2.size());
    if (result_SubSequence)
        cout << "Yes it's SubSequence" << endl;
    else
        cout << "No it's not SubSequence" << endl;

    return 0;
}