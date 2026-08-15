class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int n = nums.size();
        int l=0;
        int pro = 1;
        int cnt=0;
        if(k==0 || n==0 ||(n==1 && nums[0]>k)){
            return 0;
        }
        for(int i=0;i<n;i++){
            pro *= nums[i];
            while(pro >=k){
                pro /= nums[l];
                l++;
            }
            cnt += (i-l+1);
        }
        return cnt;
    }
};