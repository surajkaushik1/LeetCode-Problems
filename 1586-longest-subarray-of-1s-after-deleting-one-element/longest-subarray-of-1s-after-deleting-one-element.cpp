class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n = nums.size();
        int l = 0;
        unordered_map<int,int> f;
        int ans = 0;
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                f[nums[i]]++;
            }
            while(f[nums[i]]>1){
                f[nums[l]]--;
                l++;
            }
            ans = max(ans,i-l);
        }
        return ans;
    }
};