class Solution {
public:
    string toLowerCase(string s) {
        int n = s.size();
        for(int i=0;i<n;i++){
            if((s[i]) <= 90 && s[i] >= 65 ){
                s[i] = (s[i] + 32);
            }
            else{
                s[i] = s[i];
            }
        }
        return s;
    }
};