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
    //cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}
void solve()
{
   string s;
   bool isPresent = true;
   map<string,bool> characters;
   characters["H"]=false;
   characters["2B"]=false;
   characters["3B"]=false;
   characters["HR"]=false;
   int count = 0;
   loop(0,4)
   {
     cin>>s;
     if(characters.find(s)!=characters.end() && !characters[s])
     {
        characters[s]=true;
        count++;
     }
   }
   if(count==4) cout<<"Yes";
   else cout<<"No";
} 