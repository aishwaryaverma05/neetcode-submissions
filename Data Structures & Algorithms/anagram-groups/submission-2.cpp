class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mpp;
        for(string st:strs){
            string key=st;
            sort(key.begin(),key.end());
            mpp[key].push_back(st);
        }
        vector<vector<string>> res;
        for(auto p:mpp){
            res.push_back(p.second);
        }
        return res;
    }
};
