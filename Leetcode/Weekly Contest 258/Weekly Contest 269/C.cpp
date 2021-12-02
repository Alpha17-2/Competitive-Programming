class Solution {
public:
    int minimumDeletions(vector<int>& a) {
        
        int n = a.size();
        int ans = 0;
        int minIndex = -1;
        int maxIndex = -1;
        int mn = INT_MAX;
        int mx = INT_MIN;
        for(int i=0;i<n;++i){
            if(a[i]<mn){
                mn=a[i];
                minIndex = i;
            }
            if(a[i]>mx){
                mx = a[i];
                maxIndex = i;
            }
        }
        int l = min(minIndex,maxIndex);
        int r = max(minIndex,maxIndex);
        int ans1 = r+1;
        int ans2 = abs(l-n);
        int ans3 = (l+1) + abs(r-n);
        return min(ans1,(min(ans2,ans3)));
    }
};