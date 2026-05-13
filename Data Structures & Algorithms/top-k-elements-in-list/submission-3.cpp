class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mpp;
        vector<int>res;
        for(int num:nums){
            mpp[num]++;
        }
        for(int i=0;i<k;i++){
            int maxfreq=0;
            int maxele=0;
            for(auto it:mpp){
                if(it.second>maxfreq){
                    maxfreq=it.second;
                    maxele=it.first;
                }
            }
            res.push_back(maxele);
            mpp.erase(maxele);
        }
        return res;
    }
};
