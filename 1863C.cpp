#include <iostream>
using namespace std;

int n,q,x;
int a[100100];

int check(int mid) {
    if(mid==n-1) return 1;
    if(a[mid]>a[mid+1]) return 1;
    else return 0;
}

int main()
{
    int t;
    cin>>t;
    while(t--) {
        cin>>n>>q;
        
        for(int i=0;i<n;i++) cin>>a[i];
        
        int lo=0,hi = n-1, peak = 0;
            
        while(lo<=hi) {
            int mid = lo+(hi-lo)/2;
            
            if(check(mid)) {
                peak = mid;
                hi = mid-1;
            }
            else {
                lo = mid+1;
            }
        }
        
        while(q--) {
            cin>>x;
            int ans1=-1, ans2=-1;
            
            lo = 0, hi = peak-1;
            while(lo<=hi) {
                int mid = lo+(hi-lo)/2;
                
                if(a[mid]>=x) {
                    ans1 = mid;
                    hi = mid-1;
                }
                else {
                    lo = mid+1;
                }
            }
            
            lo = peak, hi =n-1;
            while(lo<=hi) {
                int mid = lo+(hi-lo)/2;
                
                if(a[mid]<=x) {
                    ans2 = mid;
                    hi = mid-1;
                }
                else {
                    lo = mid+1;
                }
            }
            
            if(ans1!=-1) {
                cout<<ans1+1<<" ";
            }
            if(ans2!=-1) {
                cout<<ans2+1<<endl;
            }
        }
    }

    return 0;
}