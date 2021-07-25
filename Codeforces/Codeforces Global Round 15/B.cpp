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
    cin >> n;
    vector<vector<int>> a(n, vector<int>(5));
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < 5; j++) {
        cin >> a[i][j];
      }
    }
    int currentWinner = 0;
    for (int i = 1; i < n; i++) {
      int cc = 0;
      for (int j = 0; j < 5; j++) {
        cc += (a[i][j] < a[currentWinner][j]);
      }
      if (cc >= 3) {
        currentWinner = i;
      }
    }
    for (int i = 0; i < n; i++) {
      int cc = 0;
      for (int j = 0; j < 5; j++) {
        cc += (a[i][j] < a[currentWinner][j]);
      }
      if (cc >= 3) {
        currentWinner = -2;
        break;
      }
    }
    cout << currentWinner + 1 << '\n';
} 