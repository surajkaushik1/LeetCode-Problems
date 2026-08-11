class Solution {
public:
    string reverseVowels(string a) {
        int  n = a.size();
        int l =0 , r = n-1;
        while(l<r){
            if((a[l]=='a' || a[l]=='e' || a[l]=='i' || a[l]=='o' || a[l]=='u' ||
               a[l]=='A' || a[l]=='E' || a[l]=='I' || a[l]=='O' || a[l]=='U' ) && 
               (a[r]=='a' || a[r]=='e' || a[r]=='i' || a[r]=='o' || a[r]=='u' ||
               a[r]=='A' || a[r]=='E' || a[r]=='I' || a[r]=='O' || a[r]=='U')){
                    swap(a[l],a[r]);
                    l++;
                    r--;
               }
               else if((a[l]=='a' || a[l]=='e' || a[l]=='i' || a[l]=='o' || a[l]=='u' ||
               a[l]=='A' || a[l]=='E' || a[l]=='I' || a[l]=='O' || a[l]=='U' ) && 
               (a[r]!='a' || a[r]!='e' || a[r]!='i' || a[r]!='o' || a[r]!='u' ||
               a[r]!='A' || a[r]!='E' || a[r]!='I' || a[r]!='O' || a[r]!='U')){
                   r--;
               }
               else{
                  l++;
               }
        }
        return a;
    }
};