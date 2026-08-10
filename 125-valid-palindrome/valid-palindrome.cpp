class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.size();
        string a = "";
        for(int i=0;i<n;i++){
            if(s[i]>='A' && s[i]<='Z'|| (s[i] >= 'a' && s[i]<='z' || s[i] >='0' &&  s[i] <='9')){
                a += tolower(s[i]);
            }
            else{
                continue;
            }
        }
        n = a.size();
        int l=0 , r =n-1;
        cout<<s;
        while(l<r){
            if(a[l] != a[r]){
                return false;
            }
            l++;
            r--;
        }
        return true;
    }
};