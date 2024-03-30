#include <bits/stdc++.h>
using namespace std;
int a[110];
set<int> st;

int f(int i, int sum) {
    if(i==0) {
        if(sum>0) {
            st.insert(sum);
            return 1;
        }
        return 0;
    }

    int p1 = f(i-1, sum);
    int p2 = f(i-1, sum-a[i]);
    return p1 || p2;
}

int main() {
    int n;
    cin>>n;

    int sum=0;
    for(int i=0;i<n;i++) {
        cin>>a[i];
        sum+=a[i];
    }

    f(n-1, sum);
    cout<<st.size()<<endl;
    for(auto x: st) cout<<x<<" ";
}
