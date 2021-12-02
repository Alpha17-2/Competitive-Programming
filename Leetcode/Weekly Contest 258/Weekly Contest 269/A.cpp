class Solution {
public:
    vector<int> targetIndices(vector<int>& a, int target) {
        
     sort(a.begin(),a.end());
        vector<int> ans;
        for(int i=0;i<a.size();++i){
            if(a[i]==target) ans.push_back(i);
        }
        return ans;        
    }
};