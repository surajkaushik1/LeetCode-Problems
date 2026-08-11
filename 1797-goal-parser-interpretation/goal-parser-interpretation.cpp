class Solution {
    private:
    bool isVowel(char ch){
        return isVowel(ch);
    }
public:
    string interpret(string c) {
        int n = c.size();
        string s = "";
        for(int i=0;i<n;i++){
            if(c[i]=='(' && c[i+1]==')'){
                s += 'o';
            }
            else if(c[i]=='(' && c[i+1]=='a' && c[i+2]=='l'&& c[i+3]==')'){
                s += 'a';
                s += 'l';
            }
            else if(c[i] == 'G'){
                s += 'G';
            }
        }
        return s;
    }
};