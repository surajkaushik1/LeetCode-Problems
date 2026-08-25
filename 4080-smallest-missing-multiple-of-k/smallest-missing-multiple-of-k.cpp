class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        vector<int> e;
        int n = nums.size();
        int mx = 1;
        for(int i=0;i<n;i++){
            if(nums[i]%k==0){
                mx = max(mx,nums[i]);
                e.push_back(nums[i]);
            }
        }
        int l = e.size();
        sort(e.begin(),e.end());
        e.erase(unique(e.begin(),e.end()),e.end());
        int a = mx/k;
        for(int i=1;i<=a;i++){
            bool f = true;
            for(int j=0;j<l;j++){
                if(k*i==e[j]){
                    f = false;
                }
            }
            if(f){
                    return k*i;
                }
        }
        return (a+1)*k;
    }
};