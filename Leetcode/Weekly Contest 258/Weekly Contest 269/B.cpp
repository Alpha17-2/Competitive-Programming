class Solution {
public:
    vector<int> getAverages(vector<int>& a, int k) {
        
        int n = a.size();
        vector<int> ans(n);
        if(k>n) {
            for(int i=0;i<n;++i) ans[i]=-1;
            return ans;
        }
        else{
            long long int ps[n];
            ps[0]=a[0];
            for(int i=1;i<n;++i) ps[i]=ps[i-1]+a[i];
            for(int i=0;i<n;++i){
                if(i-k>=0 && i+k<n){
                    // valid
                    long long int sum = 0;
                    int l=i-k;
                    int r=i+k;
                    if(l==0){
                        sum = ps[r];
                        //cout<<sum<<" "<<r<<" "<<l<<"\n";
                    }
                    else{
                        sum = ps[r]-ps[l-1];
                        //cout<<r<<" "<<l<<"\n";
                        //cout<<sum<<"\n";
                    }
                    
                    ans[i]=(int)(sum/(2*k+1));
                }
                else ans[i]=-1;
            }
            return ans;
        }
        return ans;
    }
};