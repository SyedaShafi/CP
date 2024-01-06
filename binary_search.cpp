#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int bs(int *a, int n, int l, int r, int ele)
{
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (a[mid] == ele)
            return mid;
        else if (a[mid] < ele)
            l = mid + 1;
        else if (a[mid] > ele)
            r = mid - 1;
    }
    return -1;
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    int ele, ans;
    int l = 0, r = n - 1, mid = (l + r) / 2, f = 0;
    cout << "Enter the array: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];
    // cout << "Enter the element to be searched: ";
    // cin >> ele;
    // ********binary search in decs array*******
    // sort(a, a + n, greater<int>());
    // while (l <= r)
    // {
    //     mid = l + ((r - l) / 2);
    //     if (a[mid] == ele)
    //     {
    //         cout << mid << "\n";
    //         f = 1;
    //         break;
    //     }
    //     else if (ele < a[mid])
    //     {
    //         l = mid + 1;
    //     }
    //     else
    //     {
    //         r = mid - 1;
    //     }
    // }
    // if (f == 0)
    //     cout << -1 << endl;

    // *******First occurence in an array using BS******
    // int res = -1;
    // while (l <= r)
    // {
    //     mid = l + (r - l) / 2;
    //     if (ele == a[mid])
    //     {
    //         res = mid;
    //         r = mid - 1;
    //     }
    //     else if (ele < a[mid])
    //     {
    //         r = mid - 1;
    //     }
    //     else
    //     {
    //         l = mid + 1;
    //     }
    // }
    // cout << res << "\n";

    // ********last occurence of an element in an array using BS********
    // int res = -1;
    // while (l <= r)
    // {
    //     mid = l + (r - l) / 2;
    //     if (ele == a[mid])
    //     {
    //         res = mid;
    //         l = mid + 1;
    //     }
    //     else if (ele < a[mid])
    //     {
    //         r = mid - 1;
    //     }
    //     else
    //     {
    //         l = mid + 1;
    //     }
    // }
    // cout << res << "\n";

    // **********Count of an element of in a sorted array***********
    // int res1 = -1;
    // int res2 = -1;
    // first occcurence
    // while (l <= r)
    // {

    //     mid = l + (r - l) / 2;
    //     if (ele == a[mid])
    //     {
    //         res1 = mid;
    //         r = mid - 1;
    //     }
    //     else if (ele < a[mid])
    //     {
    //         r = mid - 1;
    //     }
    //     else
    //         l = mid + 1;
    // }
    // last occurence
    // l = 0, r = n - 1;
    // while (l <= r)
    // {

    //     mid = l + (r - l) / 2;
    //     if (ele == a[mid])
    //     {
    //         res2 = mid;
    //         l = mid + 1;
    //     }
    //     else if (ele < a[mid])
    //     {
    //         r = mid - 1;
    //     }
    //     else
    //         l = mid + 1;
    // }
    // cout << "r1 " << res1 << " r2 " << res2 << endl;
    // if (res1 == -1 and res2 == -1)
    //     cout << 0 << endl;
    // else if (res1 == res2)
    //     cout << 1 << endl;
    // else
    //     cout << res2 - res1 + 1 << endl;

    //***********number of times a sorted array is rotated************//
    // approach: the index of the minimum element
    // int start = 0, end = n - 1, prev, next, res;
    // if (a[start] <= a[end])
    //     res = 0;
    // else
    //     while (start <= end)
    //     {
    //         mid = start + ((end - start) / 2);
    //         prev = (mid - 1 + n) % n;
    //         next = (mid + 1) % n;
    //         cout << "Start " << start << " end " << end << " mid " << mid << "\n";
    //         if ((a[mid] <= a[prev]) and (a[mid] <= a[next]))
    //         {
    //             res = mid;
    //             break;
    //         }
    //         else if (a[0] <= a[mid])
    //         {
    //             start = mid + 1;
    //         }
    //         else if (a[mid] <= a[end])
    //         {
    //             end = mid - 1;
    //         }
    //     }
    // cout << res << "\n";

    // *********Find an element in an sorted rotated array ********
    // approach find the index of the minimum element
    // cout << "Enter the element to be searched: ";
    // cin >> ele;
    // int start = 0, end = n - 1, prev, next, res = -1;
    // while (start <= end)
    // {
    //     mid = start + (end - start) / 2;
    //     prev = (mid - 1 + n) % n;
    //     next = (mid + 1) % n;
    //     if (a[mid] <= a[prev] && a[mid] <= a[next])
    //     {
    //         res = mid;
    //         break;
    //     }
    //     else if (a[0] <= a[mid])
    //     {
    //         start = mid + 1;
    //     }
    //     else if (a[mid] <= a[end])
    //     {
    //         end = mid - 1;
    //     }
    // }
    // cout << res << "\n";

    // int r1 = bs(a, n, 0, res - 1, ele);
    // int r2 = bs(a, n, res, n - 1, ele);
    // if (r1 == -1 && r2 == -1)
    //     cout << "Element not found\n";
    // else if (r1 >= 0)
    //     cout << "element found at index " << r1 << "\n";
    // else
    //     cout << "Element found at index " << r2 << "\n";
}




