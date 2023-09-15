class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int size=nums.size();
        vector<int>sol;
        for(int i=0;i<size ;i++){
            for(int j=i+1; j<size;j++){
                if(nums.at(i)+nums.at(j)==target){
                    sol={i,j};
                    return sol;
                }
            }
        }
        return sol;
    }
};
