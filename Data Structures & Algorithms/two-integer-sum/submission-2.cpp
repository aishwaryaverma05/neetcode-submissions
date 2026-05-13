class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // int left=0;
        // int right=nums.size()-1;
        // while(left<right){
        //     int sum=nums[left]+nums[right];
        //     if(sum==target){
        //         return {left,right};
        //     }
        //     else if(sum>target){
        //         right--;
        //     }
        //     else{
        //         left++;
        //     }
        // }
        // return {};
        unordered_map<int, int> mpp;   

        for (int i = 0; i < nums.size(); i++) {
            
            int diff = target - nums[i];

            
            if (mpp.count(diff)) {
                return {mpp[diff], i};
            }

            
            mpp[nums[i]] = i;
        }

        return {}; 
    }
};
