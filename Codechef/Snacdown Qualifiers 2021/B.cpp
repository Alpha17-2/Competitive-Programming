// Link -> https://www.codechef.com/SNCKQL21/problems/TESTSERIES

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
   int result;
   unordered_map<int,int> m;
   loop(0,5){
    cin>>result;
    m[result]++;
   }
   int india = m[1],eng=m[2],draw=m[0];
   if(india>eng) cout<<"INDIA\n";
   else if(eng>india) cout<<"ENGLAND\n";
   else cout<<"DRAW\n";
} 