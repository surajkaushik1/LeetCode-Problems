class Solution {
public:
    int searchInsert(vector<int>& nums, int t) {
        int n = nums.size();
        int l=0,h=n-1;
        int cnt =0;
        while(l<=h){
            int mid = (l+h)/2; 
            if(nums[mid]==t){
                return mid;
            }
            else if(nums[mid]<t){
                l = mid+1;
            }
            else{
                h = mid - 1;
            }
            cnt++;
        }
        return h+1;
    }
};