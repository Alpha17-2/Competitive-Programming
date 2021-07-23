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
    string s;
    cin>>s;
    map<char,int> characters;
    loop(0,s.size())
    {
        characters[s[i]]++;
    }

    int ans = 0;
    int numberofsingle= 0;

    for(auto x:characters)
    {
        if(x.second>=2)
            ans++;
        if(x.second==1)
            numberofsingle++;
    }
        ans+=(numberofsingle/2);
        cout<<ans<<"\n";
}