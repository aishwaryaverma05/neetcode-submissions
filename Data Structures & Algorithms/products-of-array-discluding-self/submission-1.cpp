class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> vec;
        for(int i=0;i<nums.size();i++){
            int prod=1;
            for(int j=0;j<nums.size();j++){
                if(i!=j){
                    prod*=nums[j];
                }
            }
            vec.push_back(prod);
        }
        return vec;
    }
};
