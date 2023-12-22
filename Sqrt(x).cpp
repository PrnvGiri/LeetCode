class Solution {
public:
    int mySqrt(int x) {
        if(x==0 || x==1){
            return x;
        }
        int y = x/2;
        while(y>x/y){
            y = (y+x/y)/2;
        }
        return y;
    }
};
