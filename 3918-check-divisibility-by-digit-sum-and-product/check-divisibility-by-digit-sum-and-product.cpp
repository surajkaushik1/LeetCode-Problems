class Solution {
public:
    bool checkDivisibility(int n) {
        int n1  = n , n2 = n;
        int sum = 0 , pro = 1;
        while(n1>0){
            int d = n1 % 10;
            sum += d;
            n1 /= 10;
        }
        while(n2>0){
            int d = n2 % 10;
            pro *= d;
            n2 /= 10;
        }
        if(n%(sum+pro)==0 &&  (sum+pro)!=0){
            return true;
        }
        return false;
    }
};