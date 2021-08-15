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
    string a;
    cin>>a;
    int indexOfFirstNonBlank = -1;
    loop(0,n) {
        if(a[i]!='?' && indexOfFirstNonBlank==-1)
        {
            indexOfFirstNonBlank=i;
        }
    }
    if(indexOfFirstNonBlank==-1){
        // all blank
        loop(0,n){
            if(i%2==0)
                a[i]='B';
            else
                a[i]='R';
        }
    }
    else{
        char first = a[indexOfFirstNonBlank];
        char second = first=='B'?'R':'B';
        // traverse left
        for(int i=indexOfFirstNonBlank-1;i>=0;i-=2){
            a[i]=second;
            if(i-1>=0)
                a[i-1]=first;
        }
        // traverse rigth
        char current = first;
        for(int i=indexOfFirstNonBlank+1;i<n;i++){
            if(a[i]=='?')
                a[i]=(current=='B')?'R':'B';
            current = a[i];
        }
    }
    cout<<a<<"\n";
} 