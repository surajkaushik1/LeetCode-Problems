class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum =0;
        int dif= 1;
        int a = n;
        while(n>0){
            int d = n%10;
            sum = sum + d;
            n = n/10;
        }
        while(a>0){
            int d = a%10;
            dif = dif * d;
            a = a/10;
        }
        return dif-sum;
    }
};