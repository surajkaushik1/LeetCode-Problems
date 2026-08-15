class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int l =0;
        unordered_map<char,int> f;
        int ans = 0;
        for(int i=0;i<n;i++){
            f[s[i]]++;
            while(f[s[i]]>1){
                f[s[l]]--;
                l++;
            }
            ans = max(ans,i-l+1);
        }
        return ans;
    }
};