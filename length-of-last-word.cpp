class Solution {
public:
    int lengthOfLastWord(string s) {
        int end = s.length();
        end = end - 1;
        while(end>=0 && s[end]==' '){
            end--;
        }
        int lastword = end;
        while(lastword>=0 && s[lastword]!=' '){
            lastword--;
            
        }
        return end-lastword;
    }
};
