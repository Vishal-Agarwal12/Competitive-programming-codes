#include <iostream>
using namespace std;
using ll = long long;

const ll MOD = 1000000007;
ll power(ll base, ll exp, ll mod) {
    ll result = 1;
    base = base % mod;
    while (exp > 0) {
        if (exp % 2 == 1) {
            result = (result * base) % mod;
        }
        base = (base * base) % mod;
        exp /= 2;
    }
    return result;
}

ll calculateExpression(ll n) {
    ll exponentTerm = (power(10, n, MOD) - 1 + MOD) % MOD;
    ll result = (3 * exponentTerm) % MOD;
    result = (result * power(9, MOD - 2, MOD)) % MOD; 
    return result;
}

int main() {
    ll t;
    cin>>t;
    while(t--) {
        ll n;
        cin >> n;

        ll result = calculateExpression(n);
        cout<<result<<'\n';
    }

    return 0;
}
