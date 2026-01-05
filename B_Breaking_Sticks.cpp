#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;
using namespace std;

template <class T>
using pbds = tree<T, null_type,
                  less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int a;
        cin >> a;

        vector<int> v(a);
        for (int i = 0; i < a; i++)
        {
            cin >> v[i];
        }

        int count = 0;
        for (int i = 0; i < a; i++)
        {
            count = count + v[i] - 1;
        }

        cout << count << '\n';
    }

    return 0;
}