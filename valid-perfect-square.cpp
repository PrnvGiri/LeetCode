class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num==0 || num==1){
            return true;
        }
        long y = num/2;
        while(y*y>num){
            y = (y+num/y)/2;
        }
       return y*y == num;
    }
};
