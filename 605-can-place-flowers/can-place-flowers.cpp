class Solution {
public:
    bool canPlaceFlowers(vector<int>& nums, int cnt) {
        int n = nums.size();
        bool f = false;
        if(n==1 && nums[0]==0){
            return true;
        }
        if(nums[0]==0 && nums[1]==0){
            cnt--;
            nums[0] = 1;
        }
        if(nums[n-1]==0 && nums[n-2]==0){
            cnt--;
            nums[n-1] = 1;
        }
        for(int i=1;i<n-1;i++){
            if(nums[i]==0 && nums[i-1]==0 && nums[i+1]==0){
                cnt--;
                nums[i] = 1;
            }
        }
        if(cnt<=0){
            return true;
        }
        return false;
    }
};