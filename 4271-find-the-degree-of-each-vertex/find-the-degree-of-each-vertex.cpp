class Solution {
public:
    vector<int> findDegrees(vector<vector<int>>& nums) {
        int n = nums.size();
        int m = nums[0].size();
        vector<int> a;
        for(int i=0;i<n;i++){
            int cnt = 0;
            for(int j=0;j<m;j++){
                if(nums[i][j]==1){
                    cnt++;
                }
            }
            a.push_back(cnt);
        }
        return a;
    }
};