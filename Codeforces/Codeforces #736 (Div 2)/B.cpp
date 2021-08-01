#include<bits/stdc++.h>
using namespace std;
#define iamalpha ios_base::sync_with_stdio(false);cin.tie(NULL);
#define loop(a, n) for (int i = a; i < n;i++)
#define isEven(n) n%2==0
#define lli long long int
void solve();
bool checkLeft(int i,int n);
bool checkRight(int i,int n);
bool checkRight(int i,int n){
    if(i+1<n)
        return true;
    return false;
}
bool checkLeft(int i,int n){
    if(i>=1)
        return true;
    return false;
}
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
  string enemy,gregor;
  cin>>enemy>>gregor;
  vector<bool> alreadyReached(n,false);
  vector<bool> wonAlready(n,false);
  int ans = 0;
  loop(0,n){
    if(gregor[i]=='1' && enemy[i]=='0'){
        // no enemy
        alreadyReached[i]=true;
        wonAlready[i]=true;
    }
  }
  loop(0,n){
        
        if(gregor[i]=='1' && !wonAlready[i]){

            if(!wonAlready[i] && checkLeft(i,n) && checkRight(i,n)){
                // we can check both sides
                if(!alreadyReached[i-1] && enemy[i-1]=='1'){
                    wonAlready[i]=true;
                    alreadyReached[i-1]=true;
                }
                else if(!alreadyReached[i+1] && enemy[i+1]=='1'){
                    wonAlready[i]=true;
                    alreadyReached[i+1]=true;
                }
                else{
                    
                }
            }
            else if(!wonAlready[i] && checkLeft(i,n)){
                // only left
                if(!alreadyReached[i-1] && enemy[i-1]=='1'){
                    wonAlready[i]=true;
                    alreadyReached[i-1]=true;
                }
            }
            else if(!wonAlready[i] && checkRight(i,n)){
                if(!alreadyReached[i+1] && enemy[i+1]=='1'){
                    wonAlready[i]=true;
                    alreadyReached[i+1]=true;
                }
            }
            else{
            }
        }
    }
    loop(0,n) if(alreadyReached[i]) ans++;
    cout<<ans<<"\n";
} 