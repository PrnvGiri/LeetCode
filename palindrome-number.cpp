class Solution {
public:
    bool isPalindrome(int x) {
        long r=0;
        int i = x;
        while(i > 0)
        {
            r= r*10 + i%10;
            i=i/10;
        }
        return r == x;   
    }
};
