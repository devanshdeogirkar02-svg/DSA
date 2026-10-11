class Solution {
public:
    bool judgeSquareSum(int c) {
        long long y=0;
        long long x=sqrt(c)-y;

        while(x>=y){
            long long sum = (x*x)+(y*y);
            if(sum ==c) return true;
            else if(sum < c){
                y++;
            }else {
                x--;
            }
        }
        return false;
    }
};