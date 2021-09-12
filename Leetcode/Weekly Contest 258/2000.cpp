class Solution {
public:
    string reversePrefix(string word, char ch) {
        int index = -1;
        string ans = "";
        for(int i=0;i<word.size();i++){
            if(word[i]==ch) {
                index = i;
                break;
            }
        }
        if(index == -1) {
            ans = word;
        }
        else{
            for(int i=index;i>=0;i--) 
                ans+=word[i];
            for(int i=index+1;i<word.size();i++)
                ans+=word[i];
        }
        return ans;
    }
};