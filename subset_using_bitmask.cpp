#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
vector<vector<int>> subsets(vector<int> &nums)
{
    int sz = nums.size();
    int subset_cnt = (1 << sz);
    vector<vector<int>> subsets;
    for (int mask = 0; mask < subset_cnt; mask++)
    {
        vector<int> subset;
        for (int j = 0; j < sz; j++)
        {
            if (mask & (1 << j))
                subset.push_back(nums[j]);
        }
        subsets.push_back(subset);
    }
    return subsets;
}
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    auto all_subset = subsets(v);

    for (auto each_subset : all_subset)
    {
        for (int ele : each_subset)
            cout << ele << " ";
        cout << "\n";
    }
}