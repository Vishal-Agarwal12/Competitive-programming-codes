const ll mod = 1e9 + 7;
void solve()
{
        ll n, k;
        cin >> n >> k;
        ll ans = 1;
        f0r(i, n)
    {
                if (i < k)
        {
                        ans *= (k - i) % mod;
                        
       
        }
        else
        {
                        break;
                   
        }
                ans %= mod;
           
    }
        cout << ans << endl;
}