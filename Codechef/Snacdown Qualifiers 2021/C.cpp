// Link -> https://www.codechef.com/SNCKQL21/problems/MAXDISTKT

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
    int ans[n];
    int mod[n];
    map<int,int> freq;
    map<int,vector<int>> indices;
    for(int i=0;i<n;i++){
        int value;
        cin>>value;
        indices[value].push_back(i);
    }
    int value = 0;
    
    for(auto x:indices){
        int limit = x.first;
        bool reach = false;
        vector<int> a = x.second;
        for(int i=0;i<a.size();++i){
            int index = a[i];
            if(value == limit){
                reach = true;
            }
            if(reach){
                ans[index] = value-1;
            }
            else{
                ans[index] = value;
                ++value;
            }
        }
    }
    
    loop(0,n) cout<<ans[i]<<" ";
    cout<<"\n";
}
