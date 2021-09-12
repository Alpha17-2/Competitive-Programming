class Solution {
public:
    long long interchangeableRectangles(vector<vector<int>>& a) {
        map<double,int> m;
        long long int ans = 0;
        for(int i=0;i<a.size();i++){
            double d = a[i][0]/(double)a[i][1];
            ans += m[d];
            m[d]++;
        }
        return ans;
    }
};