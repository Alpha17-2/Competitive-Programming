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
    while (t--) {
        solve();
    }
    return 0;
}

void solve()
{
    string s;
    cin>>s;
    int indexOfa=-1;
    loop(0,s.size()){
        if(s[i]=='a')
        {
            indexOfa=i;
            break;
        }
    }
    if(indexOfa!=-1){
        int n=s.size();
        int left=indexOfa-1;
        int right=indexOfa+1;
        int runner = 1;
        bool ans = true;
        for(char c='b';c<='z' && runner<n;runner++,c++){
            if(left>=0 && s[left]==c)
            {
                left--;
            }
            else if(right<n && s[right]==c){
                right++;
            }
            else{
                ans = false;
                break;
            }
        }
        if(ans) cout<<"YES\n";
        else cout<<"NO\n";
    }
    else cout<<"NO\n";
} 