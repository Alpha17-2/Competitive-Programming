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
  int r1,r2,c1,c2,w1,w2;
  cin>>r1>>w1>>c1;
  cin>>r2>>w2>>c2;
  int A=0,B=0;
  if(r1>r2) A++;
  else B++;
  if(c1>c2) A++;
  else B++;
  if(w1>w2) A++;
  else B++;
  (A>B)?cout<<"A\n":cout<<"B\n";
} 