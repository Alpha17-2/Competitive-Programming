#include<bits/stdc++.h>
using namespace std;
#define iamalpha ios_base::sync_with_stdio(false);cin.tie(NULL);
#define loop(a, n) for (int i = a; i < n;i++)
#define isEven(n) n%2==0
#define lli long long int
void solve();
bool found = false;
bool isPerfectSquare(int n);
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
        found = false;
        solve();
    }
    return 0;
}
void isPossible(int n,int a,int b)
{
    if(found) return;
    if(n==a || n==b)
    {
        found = true;
        return;
    }
    if(n<min(a,b)) return;
    if(found) return;
    if( a!=1 && n%a == 0 ) isPossible(n/a , a , b);
    isPossible(n-b,a,b);
}
void solve()
{
   int n,a,b;
   cin>>n>>a>>b;

   isPossible(n,a,b);
   if(found) cout<<"Yes\n";
   else cout<<"No\n";
} 