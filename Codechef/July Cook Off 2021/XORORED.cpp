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
  int n;
  cin>>n;
  vector<int> a(n);
  vector<int> temp(n);
  vector<int> bits(32);
  loop(0,n){
    cin>>a[i];
    temp[i]=a[i];
  }
  for(int i=0;i<32;i++){
    bits[i]=0;
    for(int &value:a){
        if(value%2!=0){
            bits[i]++;
        }
        value/=2;
    }
  }

  int X = 0,runner=1;
  for(int i=0;i<32;i++){
    if(bits[i]>=n-bits[i]){
        X+=runner;
    }
    runner*=2;
  }

  int minXor = 0;
  for(int i:temp){
    minXor |=  (i^X);
  }
  cout<<X<<" "<<minXor<<"\n";
} 