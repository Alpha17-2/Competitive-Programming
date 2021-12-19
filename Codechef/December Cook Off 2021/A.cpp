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
    int k;
    cin>>k;
    if(k==2) {
        cout<<"1\n";
        return;
    }
    k-=1;
    int ans = 0;
    for(int i=1;i<=(int)sqrt(k);++i){
        if(k%i==0) ans+=2;
    }

    int sq = (int)(sqrt(k));
    if(pow(sq,2) == k) 
        ans-=1;

    cout<<ans<<"\n";
} 