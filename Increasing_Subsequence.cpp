#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }

    vector<int> temp;
    temp.push_back(a[0]);
    
    for(int i=1;i<n;i++) {
        if(a[i] > temp.back()) 
            temp.push_back(a[i]);
        else {
            int it = lower_bound(temp.begin(), temp.end(), a[i]) - temp.begin();
            temp[it] = a[i];
        }    
    }

    cout<< temp.size();
}
