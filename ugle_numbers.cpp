#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    set<ll> st;
    st.insert(1);
    for (int i = 1; i < 1500; i++)
    {
        auto it = st.begin();
        ll x = *it;
        st.erase(it);
        st.insert(x * 2);
        st.insert(x * 3);
        st.insert(x * 5);
    }
    cout << "The 1500'th ugly number is " << *st.begin() << ".\n";
}