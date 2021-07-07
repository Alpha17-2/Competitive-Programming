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
    lli a,b;
    cin>>a>>b;
    if(a==b){
        cout<<"0 0\n";     
    }
    else{
       lli low = min(a,b);
       lli high = max(a,b);
       lli diff = high-low;
       lli time1 = low;
       lli Multiple1 = low - low%diff;
       lli Multiple2 = low + (diff-(low%diff));  
       lli time2 = (low%diff==0 && high%diff==0)?0:min(abs(Multiple2-low),abs(Multiple1-low));
       cout<<diff<<" "<<min(time1,time2)<<"\n";
    }  
} 