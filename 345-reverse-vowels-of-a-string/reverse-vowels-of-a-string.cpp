class Solution {
private:
 bool vowel(char ch){
    bool f = false;
    if((ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ||
               ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U' )){
                   f = true;
               }
               return f;
 }
public:
    string reverseVowels(string a) {
        int  n = a.size();
        int l =0 , r = n-1;
        while(l<r){
            if(vowel(a[l]) && vowel(a[r])){
                    swap(a[l],a[r]);
                    l++;
                    r--;
               }
               else if(vowel(a[l]) && !vowel(a[r])){
                   r--;
               }
               else{
                  l++;
               }
        }
        return a;
    }
};