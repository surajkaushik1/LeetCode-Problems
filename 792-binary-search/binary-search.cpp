class Solution {
public:
    int search(vector<int>& nums, int t) {
        int n =nums.size();
        int l =0 , h = n-1;
        int mid = (l+h)/2;
        while(l<=h){
            int mid = (l+h)/2;
            if(nums[mid] < t){
                l = mid+1;
            }
            else if(nums[mid] > t){
                h = mid-1;
            }
            else if(nums[mid]==t){
                return mid;
            }
        }
        return -1;
    }
};