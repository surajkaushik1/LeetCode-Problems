class Solution {
public:
    int numberOfSpecialChars(string w) {
        int n = w.size();
        unordered_map<char,int> frq;
        for(int i=0;i<n;i++){
            frq[w[i]]++;
        }
        int len = frq.size();
        int cnt =0;
        for(auto i : frq){
            for(auto x : frq){
                if(i.first == x.first-32){
                    cnt++;
                    break;
                }
            }
        }
        return cnt;
    }
};