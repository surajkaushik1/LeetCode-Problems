class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int n = nums.size();
        int l = 0;
        unordered_map<int,int> f;
        int mx = INT_MIN;
        int ans = INT_MIN;
        for(int i = 0;i<n;i++){
            f[nums[i]]++;
            mx = max(f[nums[i]],mx);
            while(f[nums[i]]>k){
                f[nums[l]]--;
                l++;
            }
            ans = max(i-l+1,ans);
        }
        return ans;
    }
};