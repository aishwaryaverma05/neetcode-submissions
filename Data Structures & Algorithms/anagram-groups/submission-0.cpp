class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>mpp;
        for(string key:strs){
            string s=key;
            sort(s.begin(),s.end());
            mpp[s].push_back(key);
        }
        vector<vector<string>> final;
        for(auto &it:mpp){
            final.push_back(it.second);
        }
        return final;
    }
};
