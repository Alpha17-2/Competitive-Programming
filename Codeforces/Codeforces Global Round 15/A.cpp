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
    int n;
    cin>>n;
    string s;
    cin>>s;
    string temp=s;
    int k=0;
    sort(s.begin(),s.end());
    loop(0,n)
    if(s[i]!=temp[i])
    k++;
    cout<<k<<"\n";  
} 