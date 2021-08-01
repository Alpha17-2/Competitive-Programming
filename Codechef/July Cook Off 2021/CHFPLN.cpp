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
  int n,value;
  map<int,int> elements;
  lli ans = 0;
  cin>>n;
  loop(0,n){
    cin>>value;
    elements[value]++;
  }
  for(auto x:elements){
    ans += min(x.second,x.first-1);
  }
  cout<<ans<<"\n"; 
} 