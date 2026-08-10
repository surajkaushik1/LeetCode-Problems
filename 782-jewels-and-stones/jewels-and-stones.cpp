class Solution {
public:
    int numJewelsInStones(string j, string s) {
        int n = j.size();
        int m = s.size();
        int cnt = 0;
        for(int i=0;i<n;i++){
            for(int l=0;l<m;l++){
                if(j[i]==s[l]){
                    cnt++;
                }
            }
        }
        return cnt;
    }
};