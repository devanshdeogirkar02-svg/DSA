class Solution {
public:
    bool judgeSquareSum(int c) {
        int y=0;
        int x=sqrt(c)-y;

        while(x>=y){
            long long sum = (long long) (x*x)+(y*y);
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