class Solution {
public:
    bool checkIfPangram(string s) {
        int n = s.size();
        for(int i=0;i<n;i++){
            s[i] = tolower(s[i]);
        }
        unordered_set<char> st(s.begin(),s.end());
        int cnt = 26;
        int  len = st.size();
        for(char ch : st){
            if(ch >= 'a' && ch<='z'){
                cnt--;
            }
        }
        if(cnt==0){
            return true;
        }
        return false;
    }
};