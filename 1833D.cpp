#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    vector<ll> v = a;
    sort(v.begin(), v.end());

    if (n == 1)
    {
        cout << v[0] << endl;
        return;
    }

    ll mx = v[n - 1], mxPos = -1;
    for (ll i = 0; i < n; i++)
    {
        if (a[i] == mx)
        {
            mxPos = i;
            break;
        }
    }

    if (mxPos == n - 1)
    {
        cout << a[n - 1] << " ";

        ll j = -1;
        for (j = mxPos - 1; j >= 0; j--)
        {
            if (a[j] > a[0])
            {
                cout << a[j] << " ";
            }
            else
            {
                cout << a[j] << " ";
                j--;
                break;
            }
        }
        for (ll i = 0; i <= j; i++)
            cout << a[i] << " ";
        cout << endl;
        return;
    }

    if (mxPos == 0)
    {
        ll pos1 = -1;
        ll lastElement = v[n - 2];
        for (int i = 0; i < n; i++)
        {
            if (a[i] == lastElement)
            {
                pos1 = i;
                break;
            }
        }

        if (pos1 == n - 1)
        {
            cout << a[n - 1] << " ";
            for (ll i = 0; i < n - 1; i++)
                cout << a[i] << " ";
            cout << endl;
            return;
        }

        for (ll i = pos1; i < n; i++)
            cout << a[i] << " ";

        ll j = -1;
        for (j = pos1 - 1; j >= 0; j--)
        {
            if (a[j] > a[0])
            {
                cout << a[j] << " ";
            }
            else
            {
                cout << a[j] << " ";
                j--;
                break;
            }
        }
        for (ll i = 0; i <= j; i++)
            cout << a[i] << " ";
        cout << endl;
        return;
    }

    set<ll> st;
    for (int i = 0; i < n; i++)
        st.insert(a[i]);

    for (int i = mxPos; i < n; i++)
    {
        st.erase(a[i]);
    }

    ll pos1 = -1;
    ll lastElement = *st.rbegin();
    for (int i = 0; i < n; i++)
    {
        if (a[i] == lastElement)
        {
            pos1 = i;
            break;
        }
    }

    for (ll i = mxPos; i < n; i++)
    {
        cout << a[i] << " ";
    }
    for (ll i = mxPos - 1; i >= pos1; i--)
    {
        cout << a[i] << " ";
    }
    for (ll i = 0; i < pos1; i++)
    {
        cout << a[i] << " ";
    }

    cout << endl;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
