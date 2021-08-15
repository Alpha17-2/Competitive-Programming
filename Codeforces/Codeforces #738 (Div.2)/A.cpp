#include<bits/stdc++.h>
using namespace std;
#define iamalpha ios_base::sync_with_stdio(false);cin.tie(NULL);
#define loop(a, n) for (int i = a; i < n;i++)
#define isEven(n) n%2==0
#define lli long long int
void solve();
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin); 
    freopen("output.txt","w",stdout);
    #endif
    iamalpha
    int t=1;
    cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}
void solve()
{
    int n,ans=INT_MAX;
    cin>>n;
    vector<int> a(n);
    loop(0,n) cin>>a[i];
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            for(int m=0;m<=j-i;m++){
                a[i+m]=a[i+m]&a[j-m];
            }
            int temp = *max_element(a.begin(),a.end());
            ans = min(ans,temp);
            }
        }
        cout<<ans<<"\n";
}