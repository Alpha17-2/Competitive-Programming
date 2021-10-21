// Link -> https://www.codechef.com/SNCKQL21/problems/LUCKYNUM

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
   int a,b,c;
   cin>>a>>b>>c;
   if(a==7 || b==7 || c==7) cout<<"YES\n";
   else cout<<"NO\n";
} 