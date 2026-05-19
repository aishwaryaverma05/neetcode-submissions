class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        // for(int i=0;i<nums.size()-3;i++){
        //     for(int j=i+1;j<nums.size();j++){
        //         int sum=nums[i]+nums[j];
        //         for(int k=j+1;k<nums.size();k++){
        //             sum+=nums[k];
        //             if(sum==0){
        //                 res.push_back({nums[i],nums[j],nums[k]});
        //             }
        //         }
        //     }
        // }
        // return res;
        // unordered_map<int,int>mpp;
        // for(int i=0;i<nums.size();i++){
        //     int sum=nums[i];
        //     for(int j=i+1;j<nums.size();j++){
        //         int ele=sum+nums[j];
        //         if(mpp.find(0-ele)!=mpp.end()){
        //             res.push_back({i,j,});
        //         }
        //         else{
        //             mpp[0-ele]=j;
        //         }
        //     }

        // }
        // sort(nums.begin(),nums.end());
        // for(int i=0;i<nums.size();i++){
        //     int left=i+1;
        //     int right=nums.size()-1;
        //     while(left<right){
        //         if(nums[left]+nums[right]+nums[i]==0){
        //             res.push_back({nums[left],nums[right],nums[i]});
        //             left++;
        //             right--;
        //         }
        //         else if(nums[left]+nums[right]+nums[i]>0){
        //             right--;
        //         }
        //         else{
        //             left++;
        //         }
        //     }
        // }
        // return res;
        vector<vector<int>> res;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(i>0 && nums[i]==nums[i-1]) continue; 
            int left=i+1;
            int right=nums.size()-1;
            while(left<right){
                int sum=nums[i]+nums[left]+nums[right];
                if(sum<0){
                    left++;
                }
                else if(sum>0){
                    right--;
                }
                else{
                    vector<int> temp={nums[i],nums[left],nums[right]};
                    res.push_back(temp);
                    left++;
                    right--;
                    while(left<right && nums[left]==nums[left-1])left++;
                    while(left<right && nums[right]==nums[right+1])right--;
                }
            }
        }
        return res;
    }
};
