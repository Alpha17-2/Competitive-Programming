#include<bits/stdc++.h>
using namespace std;
#define iamalpha ios_base::sync_with_stdio(false);cin.tie(NULL);
#define loop(a, n) for (int i = a; i < n;i++)
#define isEven(n) n%2==0
#define lli long long int
#define MAX 1000000
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
  int x,y;
  cin>>x>>y;
  if(__gcd(x,y)>1)
    cout<<"0\n";
  else{
    if(x==1 && y==1)
        cout<<"2\n";
    else{
        int mn = min(x,y);
        int mx = max(x,y);
        if(!isEven(mn) && !isEven(mx))
        {
            if(__gcd(mn+1,mx)>1)
                cout<<"1\n";
            else if(__gcd(mn,mx+1)>1)
                cout<<"1\n";
            else cout<<"2\n";
        }
        else cout<<"1\n";      
    }
  }
} 