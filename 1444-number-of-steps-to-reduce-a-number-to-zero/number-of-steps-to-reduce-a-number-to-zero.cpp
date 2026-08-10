class Solution {
public:
    int numberOfSteps(int num) {
        int n = num;
        int count =0;
        while(n>0){
            if(n%2==0){
                count++;
                n = n/2;
            }
            else{
                count++;
                n = n-1;
            }
        }
        return count;
    }
};