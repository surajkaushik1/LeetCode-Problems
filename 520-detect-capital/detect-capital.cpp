class Solution {
public:
    bool detectCapitalUse(string w) {
        int n = w.size();
        int c = 0 , l = 0;
        for(auto i : w){
            if(i >= 65 && i<=90){
                c++;
            }
            else{
                l++;
            }
        }
        if(c==1 && (w[0] >= 65 && w[0]<=90 )){
            return true;
        }
        else if(c==n) return true;
        else if(c==0) return true;
        return false;
    }
};